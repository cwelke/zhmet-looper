// #include <vector>
#include <map>
#include <string>
// #include <set>
// #include <stdio.h>
// #include <stdlib.h>

//root stuff
// #include "TSystem.h"
#include "TChain.h"
#include "TChainElement.h"
#include "TFile.h"
#include "TTree.h"
#include "TROOT.h"
#include "TH1F.h"
#include "Math/LorentzVector.h"
#include "Math/VectorUtil.h"
// #include
// #include "TString.h"

#ifndef MAINTEMPLATELOOPER_H
#define MAINTEMPLATELOOPER_H

typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;

// ROOT
class TChain;

class mainTemplateLooper
{
public:
  mainTemplateLooper();
  mainTemplateLooper( Float_t mT2jlow, Float_t mT2jhi );
  ~mainTemplateLooper();
  
  int ScanChain ( TChain * chain, bool fast = true, int nEvents = -1, std::string skimFilePrefix = "test", std::string suffix = "" );
  // bool getbjets( const Float_t workingpoint );
  // bool getbjets( const Float_t workingpoint, const std::vector <Float_t> &csvvals );
  Float_t getMT2( bool verbose = false );
  Float_t getMT2b( const std::vector <LorentzVector> &leps, const std::vector <LorentzVector> &bjets );
  std::vector <Float_t> getMlb( const std::vector <LorentzVector> &leps, const std::vector <LorentzVector> &bjets );
  void setSample( std::string samplename );
  void fillHist( const std::string &variable, const std::string &region, const Float_t evt_var, const Double_t weight);
  void bookHist(std::map<std::string,TH1F*> &hist_map, const std::string &histname, const std::string &histtitle, unsigned int nbins, float min, float max);
  void bookHists();
  void fillHist( const std::string &histoname, const double variable, const double weight );
  void fillHist(  TH1F* &hist, double variable, const double weight );
  void saveHists( std::map < std::string, TH1F* > &hist_map );
  void saveHists();
  Float_t getBinomialError(Float_t num, Float_t deno );

private:
  
  std::vector <LorentzVector> goodbs;

  std::string basename;

  //some setting variables
  bool checkJetDr;
  double luminosity;
  Float_t mt2jlow;
  Float_t mt2jhi;

  //counters for error setting
  unsigned int ninc[5][3][7];
  unsigned int ninc_ee[5][3][7];
  unsigned int ninc_mm[5][3][7];

  Float_t ntar[5][3][7];
  Float_t ntar_ee[5][3][7];
  Float_t ntar_mm[5][3][7];

  //counters for OF predictions
  Float_t nofallinc[2][6];
  Float_t nofcutinc[2][6];
  Float_t noferrinc[2][6];

  Float_t ndataofallinc[2][6];
  Float_t ndataofcutinc[2][6];
  Float_t ndataoferrinc[2][6];

  Float_t nofalltar[2][7];
  Float_t nofcuttar[2][7];
  Float_t noferrtar[2][7];

  Float_t ndataofalltar[2][7];
  Float_t ndataofcuttar[2][7];
  Float_t ndataoferrtar[2][7];

  //reweight file
  TFile *reweightFile_;
  TH1F * hvtxreweight;

  //histo file pointer
  TFile * outfile_;

  //template files
  TFile * templatefile_;
  TFile * targetfile_;

  TFile * oldtemplatefile_;

  //histograms
  std::map < std::string, TH1F* > hists_;
  std::map < std::string, TH1F* > evthists_;
  std::map < std::string, TH1F* > DATAMEThists_;
  std::map < std::string, TH1F* > BGMEThists_;
  std::map < std::string, TH1F* > DYMEThists_;
  std::map < std::string, TH1F* > MCMEThists_;

};
#endif
