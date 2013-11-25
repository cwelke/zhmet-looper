#include <vector>

// #include "mainTemplateLooper.h"
// #include "TChain.h"

int runMainTemplateLooper( Float_t lowcut = 0.0 ){

  Float_t highcut = 5000.0;

  // gSystem->Load("../CORE/libCMS2NtupleMacrosCORE.so");
  gSystem->Load("libmainTemplateLooper.so");

  gROOT ->SetStyle("Plain");
  gStyle->SetOptStat(111111);

  TChain *ch = new TChain("T1"); 

  // string sample = "closure_";
  string sample = "data_";

  string suffix = "";
  
  if(sample == "data_"){
	
	cout<<"Chaining up ntuples"<<endl;

	string ntuples = "/home/users/cwelke/ZMet_2012/output/V00-02-17";
	string mcntuples = "/home/users/cwelke/ZHmet_2013/output/V00-02-19";

	vector <string> samples;
	vector <string> mcsamples;

	// samples.push_back("data_53X_2012A_baby_nojson.root");
	// samples.push_back("data_53X_2012B_baby_nojson.root");
	// samples.push_back("data_53X_2012C_baby_nojson.root");
	// samples.push_back("data_53X_2012D_baby_nojson.root");

	// mcsamples.push_back("t_53X_slim_baby.root");

	// mcsamples.push_back("tbz_53X_slim_baby.root");

	mcsamples.push_back("ttbar_mgdl_53X_slim_baby.root");
	// mcsamples.push_back("ttbar_mgsl_53X_slim_baby.root");
	// mcsamples.push_back("ttbar_mghad_53X_slim_baby.root");

	// mcsamples.push_back("ttg_53X_slim_baby.root");
	// mcsamples.push_back("ttw_53X_slim_baby.root");
	// mcsamples.push_back("ttww_53X_slim_baby.root");
	// mcsamples.push_back("ttz_53X_slim_baby.root");

	// mcsamples.push_back("vvv_53X_slim_baby.root");

	// mcsamples.push_back("ww_53X_slim_baby.root");

	// mcsamples.push_back("wz2l2q_53X_slim_baby.root");
	// mcsamples.push_back("wz3lnu_53X_slim_baby.root");


	// mcsamples.push_back("zjets_53X_slim_baby.root");

	// mcsamples.push_back("z1jet_53X_slim__baby.root");
	// mcsamples.push_back("z2jet_53X_slim__baby.root");
	// mcsamples.push_back("z3jet_53X_slim__baby.root");
	// mcsamples.push_back("z4jet_53X_slim__baby.root");

	// //DONT USE BROKEN SAMPLE
	// // mcsamples.push_back("zbb2l_53X_slim_baby.root");

	// mcsamples.push_back("zhsm_53X_slim_baby.root");

	// mcsamples.push_back("zz2l2nu_53X_slim_baby.root");
	// mcsamples.push_back("zz2l2q_53X_slim_baby.root");
	// mcsamples.push_back("zz4l_53X_slim_baby.root");

	for( size_t ind = 0; ind < samples.size(); ind++ ){
	  ch->Add( Form( "%s/%s", ntuples.c_str(), samples.at(ind).c_str() ) );
	}

	for( size_t ind = 0; ind < mcsamples.size(); ind++ ){
	  ch->Add( Form( "%s/%s", mcntuples.c_str(), mcsamples.at(ind).c_str() ) );
	}

	// ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-17/zhsm_53X_slim_baby.root");

	// ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-15/zjets_53X_slim_baby.root");
	// ch->Add("/home/users/cwelke/ZHmet_2013/output/V00-02-19/tbz_53X_slim_baby.root");
	// ch->Add("/home/users/cwelke/ZHmet_2013/output/V00-02-19/ttz_53X_slim_baby.root");
	// ch->Add("/home/users/cwelke/ZHmet_2013/output/V00-02-19/ttg_53X_slim_baby.root");
	// ch->Add("/home/users/cwelke/ZHmet_2013/output/V00-02-19/ttw_53X_slim_baby.root");
	// ch->Add("/home/users/cwelke/ZHmet_2013/output/V00-02-19/ttww_53X_slim_baby.root");
	// ch->Add("/home/users/cwelke/ZHmet_2013/output/V00-02-19/vvv_53X_slim_baby.root");
	// ch->Add("/home/users/cwelke/ZHmet_2013/output/V00-02-19/zz2l2nu_53X_slim_baby.root");


  }else if(sample == "closure_"){

	// ch->Add("/home/users/benhoob/ZMet2012/output/V00-02-13/data_53X_2012A_baby.root");
	// ch->Add("/home/users/benhoob/ZMet2012/output/V00-02-13/data_53X_2012B_baby.root");
	// ch->Add("/home/users/benhoob/ZMet2012/output/V00-02-13/data_53X_2012C_baby.root");
	// ch->Add("/home/users/benhoob/ZMet2012/output/V00-02-13/data_53X_2012D_baby.root");

	// ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-17/data_53X_2012A_baby_nojson.root");
	// ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-17/data_53X_2012B_baby_nojson.root");
	// ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-17/data_53X_2012C_baby_nojson.root");
	// ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-17/data_53X_2012D_baby_nojson.root");

	ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-15/zjets_53X_slim_baby.root");
	ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-15/z1jet_53X_slim_*_baby.root");
	ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-15/z2jet_53X_slim_*_baby.root");
	ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-15/z3jet_53X_slim_*_baby.root");
	ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-15/z4jet_53X_slim_*_baby.root");

	ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-15/zjetsmc_ee_baby.root");
	ch->Add("/home/users/cwelke/ZMet_2012/output/V00-02-15/zjetsmc_mm_baby.root");

  }

  mainTemplateLooper looper( lowcut, highcut );// = new mainTemplateLooper();
  
  cout<<"running looper for: "<<suffix<<endl;
  looper.ScanChain(ch, true, -1, sample, suffix); 

  // suffix = "_emftight";
  // cout<<"running looper for: "<<suffix<<endl;
  // looper.ScanChain(ch, true, -1, sample, suffix); 

  // suffix = "_emfsupertight";
  // cout<<"running looper for: "<<suffix<<endl;
  // looper.ScanChain(ch, true, -1, sample, suffix); 

  // suffix = "_hoetight";
  // cout<<"running looper for: "<<suffix<<endl;
  // looper.ScanChain(ch, true, -1, sample, suffix); 

  // suffix = "_hoesupertight";
  // cout<<"running looper for: "<<suffix<<endl;
  // looper.ScanChain(ch, true, -1, sample, suffix); 

  // suffix = "_novtxweight";
  // cout<<"running looper for: "<<suffix<<endl;
  // looper.ScanChain(ch, true, -1, sample, suffix); 

  delete ch;
 

  return 0;
}
