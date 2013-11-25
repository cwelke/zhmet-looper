#include "ZMET.h"
ZMET zmet;
namespace ZMet {
	float &rho() { return zmet.rho(); }
	int &vtxidx() { return zmet.vtxidx(); }
	int &zdilep() { return zmet.zdilep(); }
	int &run() { return zmet.run(); }
	float &xsec() { return zmet.xsec(); }
	int &ssmu1() { return zmet.ssmu1(); }
	int &ssmu2() { return zmet.ssmu2(); }
	int &eldup() { return zmet.eldup(); }
	float &btagweight() { return zmet.btagweight(); }
	float &btagweightup() { return zmet.btagweightup(); }
	float &ht30() { return zmet.ht30(); }
	float &ht40() { return zmet.ht40(); }
	float &ht40up() { return zmet.ht40up(); }
	float &ht40dn() { return zmet.ht40dn(); }
	int &nbcsvl() { return zmet.nbcsvl(); }
	int &nbcsvlm() { return zmet.nbcsvlm(); }
	int &nbcsvm() { return zmet.nbcsvm(); }
	int &nbcsvt() { return zmet.nbcsvt(); }
	int &nbvz() { return zmet.nbvz(); }
	int &nbvzres() { return zmet.nbvzres(); }
	float &jzb() { return zmet.jzb(); }
	float &mjj() { return zmet.mjj(); }
	float &mbb() { return zmet.mbb(); }
	float &mjjup() { return zmet.mjjup(); }
	float &mjjdn() { return zmet.mjjdn(); }
	int &nlep() { return zmet.nlep(); }
	int &nel() { return zmet.nel(); }
	int &nmu() { return zmet.nmu(); }
	int &st() { return zmet.st(); }
	int &goodrun() { return zmet.goodrun(); }
	int &lumi() { return zmet.lumi(); }
	int &event() { return zmet.event(); }
	int &failjetid() { return zmet.failjetid(); }
	float &unc() { return zmet.unc(); }
	float &uncx() { return zmet.uncx(); }
	float &uncy() { return zmet.uncy(); }
	float &maxemf() { return zmet.maxemf(); }
	float &trgeff() { return zmet.trgeff(); }
	int &nvtx() { return zmet.nvtx(); }
	float &weight() { return zmet.weight(); }
	float &vtxweight() { return zmet.vtxweight(); }
	float &pthat() { return zmet.pthat(); }
	float &mllgen() { return zmet.mllgen(); }
	float &qscale() { return zmet.qscale(); }
	float &mg() { return zmet.mg(); }
	float &ml() { return zmet.ml(); }
	float &x() { return zmet.x(); }
	float &ptgen1() { return zmet.ptgen1(); }
	float &ptgen2() { return zmet.ptgen2(); }
	float &eff0() { return zmet.eff0(); }
	float &eff100() { return zmet.eff100(); }
	float &eff200() { return zmet.eff200(); }
	float &eff300() { return zmet.eff300(); }
	float &eveto1() { return zmet.eveto1(); }
	float &hveto1() { return zmet.hveto1(); }
	float &eveto2() { return zmet.eveto2(); }
	float &hveto2() { return zmet.hveto2(); }
	int &ngenels() { return zmet.ngenels(); }
	int &ngenmus() { return zmet.ngenmus(); }
	int &ngentaus() { return zmet.ngentaus(); }
	int &ngenleps() { return zmet.ngenleps(); }
	int &jet1flav() { return zmet.jet1flav(); }
	int &jet2flav() { return zmet.jet2flav(); }
	int &jet3flav() { return zmet.jet3flav(); }
	int &jet4flav() { return zmet.jet4flav(); }
	int &ngenbs() { return zmet.ngenbs(); }
	float &jet1drgen() { return zmet.jet1drgen(); }
	float &jet2drgen() { return zmet.jet2drgen(); }
	float &jet3drgen() { return zmet.jet3drgen(); }
	float &jet4drgen() { return zmet.jet4drgen(); }
	float &jet1beta1_01() { return zmet.jet1beta1_01(); }
	float &jet2beta1_01() { return zmet.jet2beta1_01(); }
	float &jet3beta1_01() { return zmet.jet3beta1_01(); }
	float &jet4beta1_01() { return zmet.jet4beta1_01(); }
	float &jet1beta2_01() { return zmet.jet1beta2_01(); }
	float &jet2beta2_01() { return zmet.jet2beta2_01(); }
	float &jet3beta2_01() { return zmet.jet3beta2_01(); }
	float &jet4beta2_01() { return zmet.jet4beta2_01(); }
	float &jet1beta1_05() { return zmet.jet1beta1_05(); }
	float &jet2beta1_05() { return zmet.jet2beta1_05(); }
	float &jet3beta1_05() { return zmet.jet3beta1_05(); }
	float &jet4beta1_05() { return zmet.jet4beta1_05(); }
	float &jet1beta2_05() { return zmet.jet1beta2_05(); }
	float &jet2beta2_05() { return zmet.jet2beta2_05(); }
	float &jet3beta2_05() { return zmet.jet3beta2_05(); }
	float &jet4beta2_05() { return zmet.jet4beta2_05(); }
	float &jet1beta1_10() { return zmet.jet1beta1_10(); }
	float &jet2beta1_10() { return zmet.jet2beta1_10(); }
	float &jet3beta1_10() { return zmet.jet3beta1_10(); }
	float &jet4beta1_10() { return zmet.jet4beta1_10(); }
	float &jet1beta2_10() { return zmet.jet1beta2_10(); }
	float &jet2beta2_10() { return zmet.jet2beta2_10(); }
	float &jet3beta2_10() { return zmet.jet3beta2_10(); }
	float &jet4beta2_10() { return zmet.jet4beta2_10(); }
	int &nwzpartons() { return zmet.nwzpartons(); }
	int &ngennue() { return zmet.ngennue(); }
	int &ngennum() { return zmet.ngennum(); }
	int &ngennut() { return zmet.ngennut(); }
	int &ngennu() { return zmet.ngennu(); }
	float &mlb1() { return zmet.mlb1(); }
	float &mlb2() { return zmet.mlb2(); }
	float &mlbt1() { return zmet.mlbt1(); }
	float &mlbt2() { return zmet.mlbt2(); }
	float &mlbmin() { return zmet.mlbmin(); }
	float &mlbtmin() { return zmet.mlbtmin(); }
	float &mt2() { return zmet.mt2(); }
	float &mt2j() { return zmet.mt2j(); }
	int &el27() { return zmet.el27(); }
	int &mm() { return zmet.mm(); }
	int &mmtk() { return zmet.mmtk(); }
	int &me() { return zmet.me(); }
	int &em() { return zmet.em(); }
	int &mu() { return zmet.mu(); }
	int &mu21() { return zmet.mu21(); }
	int &ee() { return zmet.ee(); }
	float &m13() { return zmet.m13(); }
	float &m23() { return zmet.m23(); }
	float &m14() { return zmet.m14(); }
	float &m24() { return zmet.m24(); }
	float &m34() { return zmet.m34(); }
	float &drjetll() { return zmet.drjetll(); }
	float &jetptll() { return zmet.jetptll(); }
	int &pfjetidll() { return zmet.pfjetidll(); }
	float &drjetlt() { return zmet.drjetlt(); }
	float &jetptlt() { return zmet.jetptlt(); }
	int &pfjetidlt() { return zmet.pfjetidlt(); }
	int &id1() { return zmet.id1(); }
	int &id2() { return zmet.id2(); }
	int &id3() { return zmet.id3(); }
	int &id4() { return zmet.id4(); }
	int &id5() { return zmet.id5(); }
	int &id6() { return zmet.id6(); }
	int &el1tv() { return zmet.el1tv(); }
	int &el2tv() { return zmet.el2tv(); }
	int &el1nomu() { return zmet.el1nomu(); }
	int &el2nomu() { return zmet.el2nomu(); }
	int &el1nomuss() { return zmet.el1nomuss(); }
	int &el2nomuss() { return zmet.el2nomuss(); }
	float &tche1() { return zmet.tche1(); }
	float &tche2() { return zmet.tche2(); }
	float &tche3() { return zmet.tche3(); }
	float &tche4() { return zmet.tche4(); }
	float &tche5() { return zmet.tche5(); }
	float &tche6() { return zmet.tche6(); }
	float &tche7() { return zmet.tche7(); }
	float &tche8() { return zmet.tche8(); }
	float &csv1() { return zmet.csv1(); }
	float &csv2() { return zmet.csv2(); }
	float &csv3() { return zmet.csv3(); }
	float &csv4() { return zmet.csv4(); }
	float &csv5() { return zmet.csv5(); }
	float &csv6() { return zmet.csv6(); }
	float &csv7() { return zmet.csv7(); }
	float &csv8() { return zmet.csv8(); }
	float &jetunc1() { return zmet.jetunc1(); }
	float &jetunc2() { return zmet.jetunc2(); }
	float &jetunc3() { return zmet.jetunc3(); }
	float &jetunc4() { return zmet.jetunc4(); }
	float &jetunc5() { return zmet.jetunc5(); }
	float &jetunc6() { return zmet.jetunc6(); }
	float &jetunc7() { return zmet.jetunc7(); }
	float &jetunc8() { return zmet.jetunc8(); }
	int &jetgenb1() { return zmet.jetgenb1(); }
	int &jetgenb2() { return zmet.jetgenb2(); }
	int &jetgenb3() { return zmet.jetgenb3(); }
	int &jetgenb4() { return zmet.jetgenb4(); }
	int &jetgenb5() { return zmet.jetgenb5(); }
	int &jetgenb6() { return zmet.jetgenb6(); }
	int &jetgenb7() { return zmet.jetgenb7(); }
	int &jetgenb8() { return zmet.jetgenb8(); }
	float &pfmett1new() { return zmet.pfmett1new(); }
	float &pfmett1newphi() { return zmet.pfmett1newphi(); }
	float &minmet() { return zmet.minmet(); }
	float &trkmet() { return zmet.trkmet(); }
	float &trkmetphi() { return zmet.trkmetphi(); }
	float &trksumet() { return zmet.trksumet(); }
	float &pfmet() { return zmet.pfmet(); }
	float &pfmett1() { return zmet.pfmett1(); }
	float &pfmett1phi() { return zmet.pfmett1phi(); }
	float &pfmetup() { return zmet.pfmetup(); }
	float &pfmetdn() { return zmet.pfmetdn(); }
	float &pfmetphi() { return zmet.pfmetphi(); }
	float &pfsumet() { return zmet.pfsumet(); }
	float &met() { return zmet.met(); }
	float &metphi() { return zmet.metphi(); }
	float &sumet() { return zmet.sumet(); }
	float &mumet() { return zmet.mumet(); }
	float &mumetphi() { return zmet.mumetphi(); }
	float &musumet() { return zmet.musumet(); }
	float &mujesmet() { return zmet.mujesmet(); }
	float &mujesmetphi() { return zmet.mujesmetphi(); }
	float &mujessumet() { return zmet.mujessumet(); }
	float &genmet() { return zmet.genmet(); }
	float &genmetcustom() { return zmet.genmetcustom(); }
	float &genmetphi() { return zmet.genmetphi(); }
	float &gensumet() { return zmet.gensumet(); }
	float &dphixmet() { return zmet.dphixmet(); }
	float &metpar() { return zmet.metpar(); }
	float &metperp() { return zmet.metperp(); }
	float &tcmet() { return zmet.tcmet(); }
	float &tcmetphi() { return zmet.tcmetphi(); }
	float &tcsumet() { return zmet.tcsumet(); }
	float &tcmetNew() { return zmet.tcmetNew(); }
	float &tcmetphiNew() { return zmet.tcmetphiNew(); }
	float &tcsumetNew() { return zmet.tcsumetNew(); }
	float &tcmetcor() { return zmet.tcmetcor(); }
	float &pfmetcor() { return zmet.pfmetcor(); }
	int &njets() { return zmet.njets(); }
	int &njetsold() { return zmet.njetsold(); }
	int &njetsres() { return zmet.njetsres(); }
	int &njetsup() { return zmet.njetsup(); }
	int &njetsdn() { return zmet.njetsdn(); }
	int &njpt() { return zmet.njpt(); }
	int &njets40() { return zmet.njets40(); }
	int &njets40up() { return zmet.njets40up(); }
	int &njets40dn() { return zmet.njets40dn(); }
	float &sumjetpt() { return zmet.sumjetpt(); }
	float &sumjetpt10() { return zmet.sumjetpt10(); }
	float &vecjetpt() { return zmet.vecjetpt(); }
	int &nbtags() { return zmet.nbtags(); }
	int &nbl() { return zmet.nbl(); }
	int &nbm() { return zmet.nbm(); }
	float &ndphijetmet() { return zmet.ndphijetmet(); }
	float &maxjetpt() { return zmet.maxjetpt(); }
	float &maxjetdphimet() { return zmet.maxjetdphimet(); }
	int &leptype() { return zmet.leptype(); }
	int &ecaltype() { return zmet.ecaltype(); }
	int &passz() { return zmet.passz(); }
	int &pdgid() { return zmet.pdgid(); }
	float &dpdm() { return zmet.dpdm(); }
	float &meterror() { return zmet.meterror(); }
	float &meterrorc() { return zmet.meterrorc(); }
	float &ptll() { return zmet.ptll(); }
	float &ptlt() { return zmet.ptlt(); }
	float &pterrll() { return zmet.pterrll(); }
	float &pterrlt() { return zmet.pterrlt(); }
	float &ptlltrk() { return zmet.ptlltrk(); }
	float &ptlttrk() { return zmet.ptlttrk(); }
	float &ptllgfit() { return zmet.ptllgfit(); }
	float &ptltgfit() { return zmet.ptltgfit(); }
	float &ptllpf() { return zmet.ptllpf(); }
	float &ptltpf() { return zmet.ptltpf(); }
	float &ptllgen() { return zmet.ptllgen(); }
	float &ptltgen() { return zmet.ptltgen(); }
	int &npfmuons() { return zmet.npfmuons(); }
	int &nmatchedpfmuons() { return zmet.nmatchedpfmuons(); }
	int &idll() { return zmet.idll(); }
	int &idlt() { return zmet.idlt(); }
	float &etall() { return zmet.etall(); }
	float &etalt() { return zmet.etalt(); }
	float &phill() { return zmet.phill(); }
	float &philt() { return zmet.philt(); }
	float &dilmass() { return zmet.dilmass(); }
	float &dilmasspf() { return zmet.dilmasspf(); }
	float &dilmasscor() { return zmet.dilmasscor(); }
	float &dilpt() { return zmet.dilpt(); }
	int &flagll() { return zmet.flagll(); }
	int &flaglt() { return zmet.flaglt(); }
	int &isdata() { return zmet.isdata(); }
	float &lljj() { return zmet.lljj(); }
	float &jj() { return zmet.jj(); }
	float &l1jj() { return zmet.l1jj(); }
	float &l2jj() { return zmet.l2jj(); }
	float &j1ll() { return zmet.j1ll(); }
	float &j2ll() { return zmet.j2ll(); }
	float &l1j1() { return zmet.l1j1(); }
	float &l2j2() { return zmet.l2j2(); }
	float &l1j2() { return zmet.l1j2(); }
	float &l2j1() { return zmet.l2j1(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &dilep() { return zmet.dilep(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &dileppf() { return zmet.dileppf(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &w() { return zmet.w(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1() { return zmet.lep1(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2() { return zmet.lep2(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3() { return zmet.lep3(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep4() { return zmet.lep4(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep5() { return zmet.lep5(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep6() { return zmet.lep6(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pflep1() { return zmet.pflep1(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pflep2() { return zmet.pflep2(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genlep1() { return zmet.genlep1(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genlep2() { return zmet.genlep2(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gennu1() { return zmet.gennu1(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gennu2() { return zmet.gennu2(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfTau_leadPtcand() { return zmet.pfTau_leadPtcand(); }
	int &pfTau_leadPtcandID() { return zmet.pfTau_leadPtcandID(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet1() { return zmet.jet1(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet2() { return zmet.jet2(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet3() { return zmet.jet3(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet4() { return zmet.jet4(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet5() { return zmet.jet5(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet6() { return zmet.jet6(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet7() { return zmet.jet7(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet8() { return zmet.jet8(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &subthreshjetup1() { return zmet.subthreshjetup1(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &subthreshjetup2() { return zmet.subthreshjetup2(); }
	int &jet1mcfa() { return zmet.jet1mcfa(); }
	int &jet2mcfa() { return zmet.jet2mcfa(); }
	int &jet3mcfa() { return zmet.jet3mcfa(); }
	int &jet4mcfa() { return zmet.jet4mcfa(); }
	int &jet1mcfp() { return zmet.jet1mcfp(); }
	int &jet2mcfp() { return zmet.jet2mcfp(); }
	int &jet3mcfp() { return zmet.jet3mcfp(); }
	int &jet4mcfp() { return zmet.jet4mcfp(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet1() { return zmet.bjet1(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet2() { return zmet.bjet2(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet3() { return zmet.bjet3(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet4() { return zmet.bjet4(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark1() { return zmet.genbquark1(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark2() { return zmet.genbquark2(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark3() { return zmet.genbquark3(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark4() { return zmet.genbquark4(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genz() { return zmet.genz(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gent() { return zmet.gent(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gentbar() { return zmet.gentbar(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genttbar() { return zmet.genttbar(); }
	int &csc() { return zmet.csc(); }
	int &hbhe() { return zmet.hbhe(); }
	int &hbhenew() { return zmet.hbhenew(); }
	int &hcallaser() { return zmet.hcallaser(); }
	int &ecallaser() { return zmet.ecallaser(); }
	int &ecaltp() { return zmet.ecaltp(); }
	int &trkfail() { return zmet.trkfail(); }
	int &eebadsc() { return zmet.eebadsc(); }
	float &drll() { return zmet.drll(); }
	float &dphill() { return zmet.dphill(); }
	float &drblmin() { return zmet.drblmin(); }
	float &st30() { return zmet.st30(); }
	float &st40() { return zmet.st40(); }
	float &m1() { return zmet.m1(); }
	float &m2() { return zmet.m2(); }
	float &m3() { return zmet.m3(); }
	int &zveto() { return zmet.zveto(); }
	int &nextramu() { return zmet.nextramu(); }
	int &nhyp() { return zmet.nhyp(); }
	int &nmuss() { return zmet.nmuss(); }
	int &extraz() { return zmet.extraz(); }
	int &extrag() { return zmet.extrag(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pujets() { return zmet.pujets(); }
	int &npujets() { return zmet.npujets(); }
}
