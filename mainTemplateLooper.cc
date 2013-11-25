//c stuff
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <set>
#include <stdexcept>

//root stuff
#include "TSystem.h"
#include "TChain.h"
#include "TChainElement.h"
#include "TFile.h"
#include "TTree.h"
#include "TBenchmark.h"
#include "TDirectory.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TString.h"
#include "TMath.h"

//stuff from tools
#include "../Tools/goodrun.h"
#include "../Tools/zhmetjetUtils.h"

//stuff from CMS2
#include "../CORE/metTemplatesSelections.h"
#include "../CORE/MT2/MT2.h"

//stuff from my tools
#include "../looperTools/eventFilter.h"

//stuff from tools/BTagReshaping
#include "../Tools/BTagReshaping/BTagReshaping.h"

//stuff from this looper
#include "mainTemplateLooper.h"
#include "ZMET.h"

using namespace std;
using namespace ZMet;

// typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;
//3.14159265358979323846

mainTemplateLooper::mainTemplateLooper()
{

  for (int i = 0; i < 5; i++){
  	for (int j = 0; j < 3; j++){
  	  for (int k = 0; k < 7; k++){
  		ninc[i][j][k] = 0;
  		ntar[i][j][k] = 0;
  		ninc_ee[i][j][k] = 0;
  		ntar_ee[i][j][k] = 0;
  		ninc_mm[i][j][k] = 0;
  		ntar_mm[i][j][k] = 0;
  	  }
  	}
  }

  for (int i = 0; i < 2; i++){
	for (int j = 0; j < 6; j++){
	  nofallinc[i][j] = 0;
	  nofcutinc[i][j] = 0;
	  ndataofallinc[i][j] = 0;
	  ndataofcutinc[i][j] = 0;
	  noferrinc[i][j] = 0;
	  ndataoferrinc[i][j] = 0;
	}
  }

  for (int i = 0; i < 2; i++){
	for (int j = 0; j < 7; j++){
	  nofalltar[i][j] = 0;
	  nofcuttar[i][j] = 0;
	  ndataofalltar[i][j] = 0;
	  ndataofcuttar[i][j] = 0;
	  noferrtar[i][j] = 0;
	  ndataoferrtar[i][j] = 0;
	}
  }

  reweightFile_ = NULL;
  hvtxreweight = NULL;
	
  outfile_ = NULL;

  oldtemplatefile_ = NULL;
  templatefile_ = NULL;
  targetfile_ = NULL;

  checkJetDr = false;
  luminosity = 19.5;

}

mainTemplateLooper::mainTemplateLooper( Float_t mT2jlow = 0.0, Float_t mT2jhi = 5000.0 )
{

  for (int i = 0; i < 5; i++){
  	for (int j = 0; j < 3; j++){
  	  for (int k = 0; k < 7; k++){
  		ninc[i][j][k] = 0;
  		ntar[i][j][k] = 0;
  		ninc_ee[i][j][k] = 0;
  		ntar_ee[i][j][k] = 0;
  		ninc_mm[i][j][k] = 0;
  		ntar_mm[i][j][k] = 0;
  	  }
  	}
  }

  for (int i = 0; i < 2; i++){
	for (int j = 0; j < 6; j++){
	  nofallinc[i][j] = 0;
	  nofcutinc[i][j] = 0;
	  ndataofallinc[i][j] = 0;
	  ndataofcutinc[i][j] = 0;
	  noferrinc[i][j] = 0;
	  ndataoferrinc[i][j] = 0;
	}
  }

  for (int i = 0; i < 2; i++){
	for (int j = 0; j < 7; j++){
	  nofalltar[i][j] = 0;
	  nofcuttar[i][j] = 0;
	  ndataofalltar[i][j] = 0;
	  ndataofcuttar[i][j] = 0;
	  noferrtar[i][j] = 0;
	  ndataoferrtar[i][j] = 0;
	}
  }

  reweightFile_ = NULL;
  hvtxreweight = NULL;
	
  outfile_ = NULL;

  oldtemplatefile_ = NULL;
  templatefile_ = NULL;
  targetfile_ = NULL;

  checkJetDr = false;
  luminosity = 19.5;

  mt2jlow = mT2jlow;
  mt2jhi = mT2jhi;

}


mainTemplateLooper::~mainTemplateLooper(){
  delete outfile_;
  // delete templatefile_;
  // delete templatefile_;
}

int mainTemplateLooper::ScanChain ( TChain * chain, bool fast, int nEvents, string skimFilePrefix, string suffix ){

  // Benchmark
  TBenchmark *bmark = new TBenchmark();
  bmark->Start("benchmark");


  // Loop over events to Analyze
  long i_permilleOld = 0;
  unsigned long nEventsTotal = 0;
  unsigned long nEventsChain = chain->GetEntries();
  if( nEvents >= 0 ) nEventsChain = nEvents;
  TObjArray *listOfFiles = chain->GetListOfFiles();
  TIter fileIter(listOfFiles);
  TFile *currentFile = 0;

  //Set btag reshaping
  BTagShapeInterface * nominalShape = 0;
  nominalShape = new BTagShapeInterface("../Tools/BTagReshaping/csvdiscr.root", 0.0, 0.0); 

  //~>~>~>~>~>~>~>~>~>~>//
  //Import template file//
  //~<~<~<~<~<~<~<~<~<~<//
  string outputfilename =Form("./photon_template_MET_%s2jetbins_all%s.root",
							  skimFilePrefix.c_str(),
							  suffix.c_str()); 
  outfile_ = new TFile( outputfilename.c_str() ,"RECREATE");
  if(skimFilePrefix == "data_"){

	oldtemplatefile_ = new TFile("/nfs-6/userdata/cwelke/Zmet/photonTemplates/V00-02-03_All_Data_2jetbins_templates.root");

	if(suffix != "_novtxweight"){

	  templatefile_ = new TFile(Form("../photon_output/V00-02-05/All_Data_2jetbins_templates_vtxreweight%s.root",               suffix.c_str()), "READ");
	  targetfile_   = new TFile(Form("../photon_output/V00-02-05/All_Data_2jetbins_templates_vtxreweight_mjjveto_bveto%s.root", suffix.c_str()), "READ");
	  // /nfs-6/userdata/cwelke/Zmet/photonTemplates/V00-02-03_All_Data_2jetbins_templates_vtxreweight_mjjveto_bveto.root

	}else if (suffix == "_novtxweight"){

	  templatefile_ = new TFile("../photon_output/V00-02-03/All_Data_2jetbins_templates.root",               "READ");
	  targetfile_   = new TFile("../photon_output/V00-02-03/All_Data_2jetbins_templates_mjjveto_bveto.root", "READ");
	  // /nfs-6/userdata/cwelke/Zmet/photonTemplates/V00-02-03_All_Data_2jetbins_templates_vtxreweight_mjjveto_bveto.root
	}


  }else if(skimFilePrefix == "closure_" ){

	string vtxfile = "";
	vtxfile = "../vtxreweighting/vtxreweight_MC.root";
	reweightFile_ = TFile::Open(vtxfile.c_str());

	hvtxreweight = dynamic_cast<TH1F*>( reweightFile_->Get("hratio"));

	oldtemplatefile_ = new TFile("/nfs-6/userdata/cwelke/Zmet/photonTemplates/V00-02-03_All_2jetbins_templates.root");

	if(suffix != "_novtxweight"){

	  templatefile_ = new TFile(Form("../photon_output/V00-02-03/All_2jetbins_templates_vtxreweight%s.root",               suffix.c_str()), "READ");
	  // targetfile_   = new TFile(Form("../photon_output/V00-02-03/All_2jetbins_templates_vtxreweight_mjjveto_bveto%s.root", suffix.c_str()), "READ");

	  targetfile_   = new TFile(Form("../photon_output/V00-02-05/All_2jetbins_templates_vtxreweight_mjjveto_bveto%s.root", suffix.c_str()), "READ");

	}else if (suffix == "_novtxweight"){

	  templatefile_ = new TFile("../photon_output/V00-02-03/All_2jetbins_templates.root",               "READ");
	  targetfile_   = new TFile("../photon_output/V00-02-03/All_2jetbins_templates_mjjveto_bveto.root", "READ");

	}

  }                          

  //Set the histograms and output file
  outfile_->cd();
  bookHists();

  //set json file
  // set_goodrun_file("/home/users/benhoob/ZMet2012/jsons/final_19p47fb_cms2.txt");
  //json for moriond
  set_goodrun_file("/home/users/benhoob/ZMet2012/jsons/Merged_190456-208686_8TeV_PromptReReco_Collisions12_goodruns.txt");
  //json for hcp
  // set_goodrun_file("/home/users/benhoob/ZMet2012/jsons/Cert_190456-208686_8TeV_PromptReco_Collisions12_JSON_goodruns.txt");

  while ( (currentFile = (TFile*)fileIter.Next()) ) {

    // Get File Content
    TFile *file = new TFile( currentFile->GetTitle() ); 
    TTree *tree = (TTree*)file->Get("T1");

	cout<<"Loading file: "<<currentFile->GetTitle()<<endl;
	setSample( currentFile->GetTitle() );

    zmet.Init(tree);
    unsigned int nEventsTree = tree->GetEntries(); 
    for( unsigned long event = 0; event < nEventsTree; ++event) {
    
      // Get Event Content
      if( nEventsTotal >= nEventsChain ) continue;
      if(fast) tree->LoadTree(event);
      zmet.GetEntry(event);
	  // cout<<"event: "<<event<<endl;
      ++nEventsTotal;

	  // pogress
	  long i_permille = (long)floor(1000 * nEventsTotal / double(nEventsChain));
	  if (i_permille != i_permilleOld) {
		printf("  \015\033[32m ---> \033[1m\033[31m%4.1f%%" "\033[0m\033[32m <---\033[0m\015", i_permille/10.);
		fflush(stdout);
		i_permilleOld = i_permille;
	  }

	  //parse events from json
	  if( zmet.isdata() ){
		if( !goodrun_json( zmet.run(), zmet.lumi() ) ){continue;}
		DorkyEventIdentifier id = { zmet.run(),zmet.event(), zmet.lumi() };
		if ( is_duplicate( id ) ){
		  // cout << "\t! ERROR: found duplicate." << endl;
		  // nDuplicates++;
		  continue;
		}
	  }
	  
	  //filter inclusive dy sample
	  if( basename == "zjetstt" || basename == "zjetsll" ) basename = "zjets";
	  if( basename == "zjets" || basename == "zjetsinc" || basename == "zjetsinc2" ){
		if( TString(currentFile->GetTitle()).Contains("zjets_") ) {
		  if( zmet.nwzpartons() > 0 )			continue;
		}	  
		basename = "zjets";
	  	if( ( basename == "zjets" && zmet.leptype() != 2 ) && zmet.ngentaus() == 2 ) basename = "zjetstt";
	    if( ( basename == "zjets" && zmet.leptype() != 2 ) && zmet.ngentaus() != 2 ) basename = "zjetsll";
	  }	
	  
	  //~-~-~-~-~-~-~-~-~-//
	  //Analysis Code Here//
	  //~-~-~-~-~-~-~-~-~-//
	  double weight = 1;
	  // weight *= hvtxreweight->GetBinContent(zmet.nvtx()+1);
	  //rescale MC
	  if(       !zmet.isdata() && (basename == "zpythia") ){
		// weight = 1;
		// weight *= hvtxreweight->GetBinContent(zmet.nvtx()+1);
	  	weight *= zmet.vtxweight();
		weight *= zmet.trgeff();	   
	  	weight *= zmet.weight();
	  	weight *= luminosity;
	  }else if( !zmet.isdata() && !(basename == "zpythia") ){
	  	weight *= zmet.vtxweight();
		weight *= zmet.trgeff();	   
	  	weight *= zmet.weight();
	  	weight *= luminosity;
	  }else if (zmet.isdata()  ){
	  	weight = 1;
	  }
	  
	  //Selection starts here

	  //control run range if necessary
	  // if( zmet.run() >= 197556 && zmet.run() <= 198913 )        continue;//exclude 2012cv1

	  if(zmet.isdata() ){
		if(!(zmet.csc()==0 && 
			 zmet.hbhe()==1 && 
			 zmet.hcallaser()==1 && 
			 zmet.ecallaser()==1 && 
			 zmet.ecaltp()==1 && 
			 zmet.trkfail()==1 && 
			 zmet.eebadsc()==1 && 
			 zmet.hbhenew()==1))                                continue;//met filter variables and trigger variables
	  }

	  if( zmet.lep1().pt() < 20.0 )                             continue;
	  if( zmet.lep2().pt() < 20.0 )                             continue;//pT > (20,20)

	  if(zmet.isdata()){
		if( zmet.leptype()==0 ){
		  if( zmet.ee()==0 )	                                continue;
		}
		else if( zmet.leptype()==1 ){
		  if( zmet.mm()==0 )		                            continue;
		}
		else if( zmet.leptype()==2 ){
		  if( zmet.em()==0 && zmet.me()==0 )			        continue;
		}
	  }

	  float csv1_nominal = zmet.csv1();
	  float csv2_nominal = zmet.csv2();
	  float csv3_nominal = zmet.csv3();	  
	  //ngen b stuff - for later
	  if( !zmet.isdata() ){
		csv1_nominal=nominalShape->reshape(zmet.jet1().Eta(), 
										   zmet.jet1().Pt(),
										   zmet.csv1(),
										   zmet.jet1mcfa());
		csv2_nominal=nominalShape->reshape(zmet.jet2().Eta(), 
										   zmet.jet2().Pt(),
										   zmet.csv2(),
										   zmet.jet2mcfa());
		csv3_nominal=nominalShape->reshape(zmet.jet3().Eta(), 
										   zmet.jet3().Pt(),
										   zmet.csv3(),
										   zmet.jet3mcfa());
	  }
	  vector <Float_t> csvvals;
	  csvvals.push_back(csv1_nominal);
	  csvvals.push_back(csv2_nominal);
	  csvvals.push_back(csv3_nominal);

	  bool realmetz = false;
	  bool ztodilep = false;

	  if( !zmet.isdata() ){
	  	if( ( 
			 basename == "wz" 
			 || basename == "zz" 
			 || basename == "st" 
			 || basename == "ww" 
			 || basename == "ttv" 
			 || basename == "smzh" 
			 || basename == "tbz" 
			 || basename == "vvv" 
			  ) && zmet.ngennu() == 0   ) realmetz = true;
	  	if( ( basename == "vvv" || basename == "ttv" ) && zmet.zdilep() != 1   ) ztodilep = true;

	  	// if( ( basename == "zjets" && zmet.leptype() != 2 ) && zmet.ngentaus() == 2 ) continue;
	  }

	  if( zmet.pfTau_leadPtcandID() != (-1) ){                  continue;}//tau veto
	  if( zmet.njets() < 2 ){                                   continue;}//jet selection 
	  if( zmet.njets() > 3 ){                                   continue;}//jet selection 
	  if( zmet.nlep()  > 2 ){                                   continue;}// 3rd lep veto
	  
	  
	  vector <LorentzVector> leps;
	  leps.push_back(zmet.lep1());
	  leps.push_back(zmet.lep2());
	  vector <LorentzVector> jets;
	  jets.push_back(zmet.jet1());
	  jets.push_back(zmet.jet2());
	  if( zmet.njets() == 3 ){
	  	jets.push_back(zmet.jet3());
	  }
	  Float_t mjj  = (jets.at(0) + jets.at(1)).mass();
	  Float_t ptjj = (jets.at(0) + jets.at(1)).pt();
	  Float_t mll  = zmet.dilep().mass();
	  Float_t mT2  = getMT2();
	  Float_t mT2j = getMT2b( leps, jets );

	  //all non b related cuts defined here
	  bool mjj100 = (mjj > 100.0 && mjj < 150.0);
	  bool mjj150 = (mjj > 150.0);
	  bool medzwindow = !( mll < 81.0 || mll > 101.0);
	  bool mt2j200 = (mT2j > 200.0 );
	  bool bveto = ( zmet.nbcsvl() == 0 );
	  bool twojet = ( zmet.njets() == 2 );
	  bool threejet = ( zmet.njets() == 3 );
	  
	  
	  // if( !realmetz || !ztodilep ){
	  // 	if( mjj150 && mt2j200 && bveto && zmet.pfmet() > 120.0 ){ // 0 btags
	  // 	  fillHist(                  "mll", "bveto1_met120", mll, weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "bveto1_met120", zmet.mt2(), weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "bveto1_met120_otfmt2", mT2, weight );
	  // 	  if( mT2 > 90.0 ) fillHist( "mll", "bveto1_met120_mt2", mll, weight );
	  // 	}
	  // 	if( mjj100 && mt2j200 && bveto && zmet.pfmet() > 120.0 ){ // 0 btags
	  // 	  fillHist(                  "mll", "bveto2_met120", mll, weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "bveto2_met120", zmet.mt2(), weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "bveto2_met120_otfmt2", mT2, weight );
	  // 	  if( mT2 > 90.0 ) fillHist( "mll", "bveto2_met120_mt2", mll, weight );
	  // 	}
	  // 	if( mjj100 && !mt2j200 && bveto && zmet.pfmet() > 120.0 ){ // 0 btags
	  // 	  fillHist(                  "mll", "bveto3_met120", mll, weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "bveto3_met120", zmet.mt2(), weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "bveto3_met120_otfmt2", mT2, weight );
	  // 	  if( mT2 > 90.0 ) fillHist( "mll", "bveto3_met120_mt2", mll, weight );
	  // 	}
	  // 	if( mjj150 && !mt2j200 && bveto && zmet.pfmet() > 120.0 ){ // 0 btags
	  // 	  fillHist(                  "mll", "bveto4_met120", mll, weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "bveto4_met120", zmet.mt2(), weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "bveto4_met120_otfmt2", mT2, weight );
	  // 	  if( mT2 > 90.0 ) fillHist( "mll", "bveto4_met120_mt2", mll, weight );
	  // 	}
	  // }

	  // 	if( mjj150 && mt2j200 && bveto ){ // 0 btags
	  // 	  if( medzwindow && zmet.leptype() != 2 ) fillHist( "met", "bveto1", zmet.pfmet(), weight );
	  // 	  if( zmet.leptype() == 2 ) fillHist( "met", "bveto1", zmet.pfmet(), weight );
	  // 	}
	  // 	if( mjj100 && mt2j200 && bveto ){ // 0 btags
	  // 	  if( medzwindow && zmet.leptype() != 2 ) fillHist( "met", "bveto2", zmet.pfmet(), weight );
	  // 	  if( zmet.leptype() == 2 ) fillHist( "met", "bveto2", zmet.pfmet(), weight );
	  // 	}
	  // 	if( mjj100 && !mt2j200 && bveto ){ // 0 btags
	  // 	  if( medzwindow && zmet.leptype() != 2 ) fillHist( "met", "bveto3", zmet.pfmet(), weight );
	  // 	  if( zmet.leptype() == 2 ) fillHist( "met", "bveto3", zmet.pfmet(), weight );
	  // 	}
	  // 	if( mjj150 && !mt2j200 && bveto ){ // 0 btags
	  // 	  if( medzwindow && zmet.leptype() != 2 ) fillHist( "met", "bveto4", zmet.pfmet(), weight );
	  // 	  if( zmet.leptype() == 2 ) fillHist( "met", "bveto4", zmet.pfmet(), weight );
	  // 	}
	  

	  //btag stuff  	  
	  Bool_t twogoodbs = getbjets( goodbs, jets, 0.244, csvvals );	  

	  if( !twogoodbs ){	continue; }

	  Float_t mT2b = getMT2b( leps, goodbs );
	  Float_t mbb = (goodbs.at(0)+goodbs.at(1)).mass();
	  Float_t ptbb = (goodbs.at(0)+goodbs.at(1)).pt();
	  
	  //all b related cuts defined here
	  bool mbb150 = (mbb > 150.0);
	  bool mbb100150 = (mbb < 150.0 && mbb > 100.0 );
	  bool mt2b200 = (mT2b > 200.0 );
	  
	  
	  // // 2btag cuts - VERY SLOW
	  // fillHist( "mll",  "2b", mll,  weight );
	  if( medzwindow ){ // high mjj cut
	  	// fillHist( "mbb",  "2b", mbb,  weight );
	  	fillHist( "mt2b", "2b", mT2b, weight );
	  	// fillHist( "ptbb", "2b", ptbb, weight );
	  	// fillHist( "mjj",  "2b", mjj,  weight );
	  	// fillHist( "ptjj", "2b", ptjj, weight );
	  	// fillHist( "zpt",  "2b", zmet.dilep().pt(),  weight );

		if( basename == "ttbar" ){
		  if( TString(currentFile->GetTitle()).Contains("mgdl_") ){
			fillHist( "mt2b", "dilep", mT2b, weight );
			fillHist( "mt2j", "dilep", zmet.mt2j(), weight );
			if( mbb100150 ){
			  fillHist( "mt2b", "2jet", mT2b, weight );
			  fillHist( "mt2j", "2jet", zmet.mt2j(), weight );
			}
			if( zmet.ngentaus() != 2 ){

			  vector <LorentzVector> bquarks;
			  bquarks.push_back(zmet.genbquark1());
			  bquarks.push_back(zmet.genbquark2());

			  vector <LorentzVector> genleps;
			  genleps.push_back(zmet.genlep1());
			  genleps.push_back(zmet.genlep2());

			  Float_t mT2bgen = getmt2bgen( genleps, bquarks, zmet.genmet(), zmet.genmetphi() , 0.0 );
			  fillHist( "mt2bgen", "dilep", mT2bgen, weight );
			  // fillHist( "mt2jgen", "dilep", zmet.mt2j(), weight );
			  if( mbb100150 ){
				fillHist( "mt2bgen", "2jet", mT2bgen, weight );
				// fillHist( "mt2jgen", "2jet", zmet.mt2j(), weight );
			  }
			}
		  }
		}

	  }

	     
	  // if( mbb150 && mt2b200 ){ // 0 btags
	  // 	if( medzwindow && zmet.leptype() != 2 ) fillHist( "met", "2btag1", zmet.pfmet(), weight );
	  // 	if( zmet.leptype() == 2 ) fillHist( "met", "2btag1", zmet.pfmet(), weight );
	  // }
	  // if( mbb100150 && mt2b200 ){ // 0 btags
	  // 	if( medzwindow && zmet.leptype() != 2 ) fillHist( "met", "2btag2", zmet.pfmet(), weight );
	  // 	if( zmet.leptype() == 2 ) fillHist( "met", "2btag2", zmet.pfmet(), weight );
	  // }
	  // if( mbb100150 && !mt2b200 ){ // 0 btags
	  // 	if( medzwindow && zmet.leptype() != 2 ) fillHist( "met", "2btag3", zmet.pfmet(), weight );
	  // 	if( zmet.leptype() == 2 ) fillHist( "met", "2btag3", zmet.pfmet(), weight );
	  // }
	  // if( mbb150 && !mt2b200 ){ // 0 btags
	  // 	if( medzwindow && zmet.leptype() != 2 ) fillHist( "met", "2btag4", zmet.pfmet(), weight );
	  // 	if( zmet.leptype() == 2 ) fillHist( "met", "2btag4", zmet.pfmet(), weight );
	  // }

	  // if( !realmetz || !ztodilep ){
	  // 	if( mbb150 && mt2b200 && zmet.pfmet() > 120.0 ){ // 0 btags
	  // 	  fillHist(                  "mll", "2btag1_met120", mll, weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "2btag1_met120", zmet.mt2(), weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "2btag1_met120_otfmt2", mT2, weight );
	  // 	  if( mT2 > 90.0 ) fillHist( "mll", "2btag1_met120_mt2", mll, weight );
	  // 	}

	  // 	if( mbb100150 && mt2b200 && zmet.pfmet() > 120.0 ){ // 0 btags
	  // 	  fillHist(                  "mll", "2btag2_met120", mll, weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "2btag2_met120", zmet.mt2(), weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "2btag2_met120_otfmt2", mT2, weight );
	  // 	  if( mT2 > 90.0 ) fillHist( "mll", "2btag2_met120_mt2", mll, weight );
	  // 	}

	  // 	if( mbb100150 && !mt2b200 && zmet.pfmet() > 120.0 ){ // 0 btags
	  // 	  fillHist(                  "mll", "2btag3_met120", mll, weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "2btag3_met120", zmet.mt2(), weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "2btag3_met120_otfmt2", mT2, weight );
	  // 	  if( mT2 > 90.0 ) fillHist( "mll", "2btag3_met120_mt2", mll, weight );
	  // 	}

	  // 	if( mbb150 && !mt2b200 && zmet.pfmet() > 120.0 ){ // 0 btags
	  // 	  fillHist(                  "mll", "2btag4_met120", mll, weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "2btag4_met120", zmet.mt2(), weight );
	  // 	  if( medzwindow ) fillHist( "mt2", "2btag4_met120_otfmt2", mT2, weight );
	  // 	  if( mT2 > 90.0 ) fillHist( "mll", "2btag4_met120_mt2", mll, weight );
	  // 	}

	  // 	if( mbb150 && mt2b200 && zmet.pfmet() > 120.0 ){ // 0 btags
	  // 	  if( zmet.dilep().mass() >= 20 && zmet.dilep().mass() < 50 ){
	  // 		if( zmet.isdata() ){
	  // 		  if( zmet.leptype() == 2 ) cout << "Found event in list! " << zmet.run() << " " << zmet.lumi() << " " << zmet.event() << endl;
	  // 		}		  
	  // 	  } 
	  // 	}

	  // }

	  if( !medzwindow ){ continue; }//zveto medium	  	  
	  if(zmet.leptype() == 2){ continue; }//no more use for OF events after this point	  
	  continue;

	}
	// Clean Up
    delete tree;
    file->Close();
  }


  if ( nEventsChain != nEventsTotal ) {
    cout << Form( "ERROR: number of events from files (%d) is not equal to total number of events (%d)", (int)nEventsChain, (int)nEventsTotal ) << endl;
  }

  // return
  bmark->Stop("benchmark");
  cout << endl;
  cout << nEventsTotal << " Events Processed" << endl;
  cout << endl;
  cout << "------------------------------" << endl;
  cout << "CPU  Time:	" << Form( "%.01f", bmark->GetCpuTime("benchmark")  ) << endl;
  cout << "Real Time:	" << Form( "%.01f", bmark->GetRealTime("benchmark") ) << endl;
  cout << endl;
  delete bmark;

  //this command saves the histos to the file and closes it.
  // saveHists();

  cout<<"Writing baby to: "<<outputfilename<<endl;
  outfile_->cd();
  outfile_->Write();
  outfile_->Close();
  return 0;
  
}
  

void mainTemplateLooper::setSample( string samplename )
{
  if(       TString(samplename).Contains("zjetsmc_"          ) ){ basename = "zpythia";
  }else if( TString(samplename).Contains("zjets_"            ) ){ basename = "zjetsinc";
  }else if( TString(samplename).Contains("zbb2l_"            ) ){ basename = "zjets";
  }else if( TString(samplename).Contains("z1jet_"            ) ){ basename = "zjets";
  }else if( TString(samplename).Contains("z2jet_"            ) ){ basename = "zjets";
  }else if( TString(samplename).Contains("z3jet_"            ) ){ basename = "zjets";
  }else if( TString(samplename).Contains("z4jet_"            ) ){ basename = "zjets";
  }else if( TString(samplename).Contains("data_"             ) ){ basename = "data";
  }else if( TString(samplename).Contains("wz"                ) ){ basename = "wz";
  }else if( TString(samplename).Contains("ww"                ) ){ basename = "ww";
  }else if( TString(samplename).Contains("zz"                ) ){ basename = "zz";
  }else if( TString(samplename).Contains("ttbar_"            ) ){ basename = "ttbar";
  }else if( TString(samplename).Contains("t_53X_slim_baby"   ) ){ basename = "st";
  }else if( TString(samplename).Contains("tbz_53X_slim_baby" ) ){ basename = "tbz";
  }else if( TString(samplename).Contains("ttg_53X_slim_baby" ) ){ basename = "ttv";
  }else if( TString(samplename).Contains("ttw_53X_slim_baby" ) ){ basename = "ttv";
  }else if( TString(samplename).Contains("ttww_53X_slim_baby") ){ basename = "ttv";
  }else if( TString(samplename).Contains("ttz_53X_slim_baby" ) ){ basename = "ttv";
  }else if( TString(samplename).Contains("vvv_53X_slim_baby" ) ){ basename = "vvv";
  }else if( TString(samplename).Contains("zhsm_53X_slim_baby") ){ basename = "smzh";

  }else{ 
  	cout<<"filename for file:"<<samplename<<"not set."<<endl;
  	basename = "";
  }
  // cout<<"filename:"<<samplename<<endl;
  cout<<"basename:"<<basename<<endl;
  return;
}

Float_t mainTemplateLooper::getMT2( bool verbose )
{
  return MT2(zmet.pfmet(), zmet.pfmetphi(), zmet.lep1(), zmet.lep2(), 0.0, verbose );
}

Float_t mainTemplateLooper::getMT2b( const vector <LorentzVector> &leps, const vector <LorentzVector> &bjets )
{
  Float_t mT2b1 = 0;
  Float_t mT2b2 = 0;
  if( bjets.size() == 2 ){
	mT2b1 = MT2( zmet.pfmet(), zmet.pfmetphi(), leps.at(0) + bjets.at(0), leps.at(1) + bjets.at(1) );
	mT2b2 = MT2( zmet.pfmet(), zmet.pfmetphi(), leps.at(0) + bjets.at(1), leps.at(1) + bjets.at(0) );
	return min( mT2b1, mT2b2 );
  }else if ( bjets.size() == 3 ){
	vector <float> mT2b;
	mT2b.push_back( MT2( zmet.pfmet(), zmet.pfmetphi(), leps.at(0) + bjets.at(0), leps.at(1) + bjets.at(1) ) );
	mT2b.push_back( MT2( zmet.pfmet(), zmet.pfmetphi(), leps.at(0) + bjets.at(1), leps.at(1) + bjets.at(0) ) );
	mT2b.push_back( MT2( zmet.pfmet(), zmet.pfmetphi(), leps.at(0) + bjets.at(0), leps.at(1) + bjets.at(2) ) );
	mT2b.push_back( MT2( zmet.pfmet(), zmet.pfmetphi(), leps.at(0) + bjets.at(2), leps.at(1) + bjets.at(0) ) );
	mT2b.push_back( MT2( zmet.pfmet(), zmet.pfmetphi(), leps.at(0) + bjets.at(1), leps.at(1) + bjets.at(2) ) );
	mT2b.push_back( MT2( zmet.pfmet(), zmet.pfmetphi(), leps.at(0) + bjets.at(2), leps.at(1) + bjets.at(1) ) );
    sort( mT2b.begin(), mT2b.end() );
	// return mT2b.at(0);
	return mT2b.at(mT2b.size()-1);
  }else{
	return 0.0;
  }
  
}

vector <Float_t> mainTemplateLooper::getMlb( const vector <LorentzVector> &leps, const vector <LorentzVector> &bjets )
{
  vector <Float_t> mlb;
  mlb.push_back(( leps.at(0) + bjets.at(0) ).mass());
  mlb.push_back(( leps.at(1) + bjets.at(0) ).mass());
  mlb.push_back(( leps.at(0) + bjets.at(1) ).mass());
  mlb.push_back(( leps.at(1) + bjets.at(1) ).mass());
  sort(mlb.begin(), mlb.end());
  return mlb;
}

void mainTemplateLooper::fillHist( const string &variable, const string &region, const Float_t evt_var, const Double_t weight)
{
  if( zmet.leptype() == 0 ) fillHist(Form("h_%s_ee_%s_%s", variable.c_str(), basename.c_str(), region.c_str() ), evt_var, weight);
  if( zmet.leptype() == 1 ) fillHist(Form("h_%s_mm_%s_%s", variable.c_str(), basename.c_str(), region.c_str() ), evt_var, weight);
  if( zmet.leptype() == 2 ) fillHist(Form("h_%s_em_%s_%s", variable.c_str(), basename.c_str(), region.c_str() ), evt_var, weight);
  if( zmet.leptype() != 2 ) fillHist(Form("h_%s_ll_%s_%s", variable.c_str(), basename.c_str(), region.c_str() ), evt_var, weight);
}

void mainTemplateLooper::bookHist(map<string,TH1F*> &hist_map, const string &histname, const string &histtitle, unsigned int nbins, float min, float max)
{

  cout<<"Booking Hist: "<<histname<<endl;
  hist_map.insert ( pair<string,TH1F*>(histname, new TH1F(histname.c_str(), histtitle.c_str(), nbins, min, max)));
  hist_map[histname]->Sumw2();
  return;

}


void mainTemplateLooper::bookHists(){
  
  vector <string> variable;
  // variable.push_back("mll");
  // variable.push_back("mbb");
  // variable.push_back("ptbb");
  // variable.push_back("mjj");
  // variable.push_back("ptjj");
  // variable.push_back("njets");
  // variable.push_back("met");
  // variable.push_back("zpt");
  // variable.push_back("zht");
  // variable.push_back("hpt");
  variable.push_back("mt2b");
  variable.push_back("mt2j");
  variable.push_back("mt2bgen");
  // variable.push_back("mt2jgen");
  // variable.push_back("nbtags");
  // variable.push_back("csv1");
  // variable.push_back("csv2");
  // variable.push_back("csv3");
  // variable.push_back("mt2");

  vector <string> event_type;
  event_type.push_back("ee");
  event_type.push_back("em");
  event_type.push_back("mm");
  event_type.push_back("ll");
  event_type.push_back("all");

  vector <string> region;
  // region.push_back("");
  region.push_back("bveto1");
  region.push_back("bveto2");
  region.push_back("bveto3");
  region.push_back("bveto4");
  region.push_back("2btag1");
  region.push_back("2btag2");
  region.push_back("2btag3");
  region.push_back("2btag4");

  vector <string> evtselection;
  // evtselection.push_back("");
  evtselection.push_back("dilep");
  evtselection.push_back("zdilep");
  evtselection.push_back("2b");
  evtselection.push_back("sig");
  evtselection.push_back("met80");
  evtselection.push_back("met100");
  evtselection.push_back("met120");
  evtselection.push_back("mjj150");
  evtselection.push_back("mt2j");
  evtselection.push_back("mt2b");
  evtselection.push_back("2jet");
  evtselection.push_back("3jet");
  evtselection.push_back("met120_otfmt2");
  evtselection.push_back("met120_mt2");

  vector <string> selection;
  for( size_t regi = 0; regi < region.size(); regi++ ){
	for( size_t evti = 0; evti < evtselection.size(); evti++ ){
	  if( regi == 0 )  selection.push_back(evtselection.at(evti));
	  if( evti == 0 )  selection.push_back(region.at(regi));
	  selection.push_back( Form("%s_%s", region.at(regi).c_str(), evtselection.at(evti).c_str() ) );
	}
  }

  vector <string> sample;
  sample.push_back("data");
  sample.push_back("zpythia");
  sample.push_back("zjets");
  sample.push_back("zjetsll");
  sample.push_back("zjetstt");
  sample.push_back("wz");
  sample.push_back("zz");
  sample.push_back("ttbar");
  sample.push_back("st");
  sample.push_back("ww");
  sample.push_back("ttv");
  sample.push_back("vvv");
  sample.push_back("smzh");
  sample.push_back("tbz");

  string histname = "";

  for (size_t vari = 0; vari < variable.size(); vari ++){
	for (size_t evti = 0; evti < event_type.size(); evti ++){
	  for (size_t seli = 0; seli < selection.size(); seli ++){
		for (size_t sami = 0; sami < sample.size(); sami ++){
		  
		  histname = Form("h_%s_%s_%s_%s" , variable.at(vari).c_str(), event_type.at(evti).c_str(), sample.at(sami).c_str(), selection.at(seli).c_str() );		
		  if( variable.at(vari) == "njets"  ){ bookHist(evthists_, histname.c_str(), histname.c_str(), 20, 0.0, 20.0);
		  }else if( variable.at(vari) == "nbtags" ){ bookHist(evthists_, histname.c_str(), histname.c_str(), 10, 0.0, 10.0);
		  }else if( variable.at(vari) == "csv1" ){ bookHist(evthists_, histname.c_str(), histname.c_str(), 100, 0.0, 1.0);
		  }else if( variable.at(vari) == "csv2" ){ bookHist(evthists_, histname.c_str(), histname.c_str(), 100, 0.0, 1.0);
		  }else if( variable.at(vari) == "csv3" ){ bookHist(evthists_, histname.c_str(), histname.c_str(), 100, 0.0, 1.0);
		  }else if( variable.at(vari) == "zpt"  ){ bookHist(evthists_, histname.c_str(), histname.c_str(), 1000, 0.0, 1000.0);
		  }else if( variable.at(vari) == "zht"  ){ bookHist(evthists_, histname.c_str(), histname.c_str(), 10000, 0.0, 10000.0);
		  }else if( variable.at(vari) == "mll"  ){ bookHist(evthists_, histname.c_str(), histname.c_str(), 500, 1.0, 501.0);
		  }else{ bookHist(evthists_, histname.c_str(), histname.c_str(), 500, 0.0, 500.0);
		  }
		}
	  }
	}
  }

  return;
}

void mainTemplateLooper::fillHist( const string &histoname, double variable, const double weight ){

try
  {
  float min = evthists_.at(histoname)->GetXaxis()->GetXmin();
  float max = evthists_.at(histoname)->GetXaxis()->GetXmax();

  if (variable > max) variable = evthists_.at(histoname)->GetBinCenter(evthists_.at(histoname)->GetNbinsX());
  if (variable < min) variable = evthists_.at(histoname)->GetBinCenter(1);

  evthists_.at(histoname)->Fill(variable, weight);
  }
 catch (exception &e)
   {
	 cout<<Form("Cannot find hist: %s", histoname.c_str() )<<endl<<"Exiting."<<endl;
	 exit(1);
   }

  return;
}

void mainTemplateLooper::fillHist(  TH1F* &hist, double variable, const double weight ){

  float min = hist->GetXaxis()->GetXmin();
  float max = hist->GetXaxis()->GetXmax();

  if (variable > max) variable = hist->GetBinCenter(hist->GetNbinsX());
  if (variable < min) variable = hist->GetBinCenter(1);

  hist->Fill(variable, weight);

  return;
}


void mainTemplateLooper::saveHists(map < string, TH1F* > &hist_map ){

  outfile_->cd();
  for (map<string, TH1F*>::iterator itr = hist_map.begin(); itr != hist_map.end(); itr++){
	itr->second->Write(itr->first.c_str(), TObject::kOverwrite);
  }

  return;
}

void mainTemplateLooper::saveHists(){

  outfile_->cd();
  for (map<string, TH1F*>::iterator itr = evthists_.begin(); itr != evthists_.end(); itr++){
	itr->second->Write(itr->first.c_str(), TObject::kOverwrite);
  }

  return;
}

Float_t mainTemplateLooper::getBinomialError( const Float_t num, const Float_t deno ){
  
  Float_t   p       =   num / deno;
  Float_t   error   =   sqrt(p*(1-p)/deno);
  return error;
  
}

