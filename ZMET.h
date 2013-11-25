// -*- C++ -*-
#ifndef ZMET_H
#define ZMET_H
#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include "TBits.h"
#include <vector> 
typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;

#define PARANOIA

using namespace std; 
class ZMET {
private: 
protected: 
	unsigned int index;
	float	rho_;
	TBranch *rho_branch;
	bool rho_isLoaded;
	int	vtxidx_;
	TBranch *vtxidx_branch;
	bool vtxidx_isLoaded;
	int	zdilep_;
	TBranch *zdilep_branch;
	bool zdilep_isLoaded;
	int	run_;
	TBranch *run_branch;
	bool run_isLoaded;
	float	xsec_;
	TBranch *xsec_branch;
	bool xsec_isLoaded;
	int	ssmu1_;
	TBranch *ssmu1_branch;
	bool ssmu1_isLoaded;
	int	ssmu2_;
	TBranch *ssmu2_branch;
	bool ssmu2_isLoaded;
	int	eldup_;
	TBranch *eldup_branch;
	bool eldup_isLoaded;
	float	btagweight_;
	TBranch *btagweight_branch;
	bool btagweight_isLoaded;
	float	btagweightup_;
	TBranch *btagweightup_branch;
	bool btagweightup_isLoaded;
	float	ht30_;
	TBranch *ht30_branch;
	bool ht30_isLoaded;
	float	ht40_;
	TBranch *ht40_branch;
	bool ht40_isLoaded;
	float	ht40up_;
	TBranch *ht40up_branch;
	bool ht40up_isLoaded;
	float	ht40dn_;
	TBranch *ht40dn_branch;
	bool ht40dn_isLoaded;
	int	nbcsvl_;
	TBranch *nbcsvl_branch;
	bool nbcsvl_isLoaded;
	int	nbcsvlm_;
	TBranch *nbcsvlm_branch;
	bool nbcsvlm_isLoaded;
	int	nbcsvm_;
	TBranch *nbcsvm_branch;
	bool nbcsvm_isLoaded;
	int	nbcsvt_;
	TBranch *nbcsvt_branch;
	bool nbcsvt_isLoaded;
	int	nbvz_;
	TBranch *nbvz_branch;
	bool nbvz_isLoaded;
	int	nbvzres_;
	TBranch *nbvzres_branch;
	bool nbvzres_isLoaded;
	float	jzb_;
	TBranch *jzb_branch;
	bool jzb_isLoaded;
	float	mjj_;
	TBranch *mjj_branch;
	bool mjj_isLoaded;
	float	mbb_;
	TBranch *mbb_branch;
	bool mbb_isLoaded;
	float	mjjup_;
	TBranch *mjjup_branch;
	bool mjjup_isLoaded;
	float	mjjdn_;
	TBranch *mjjdn_branch;
	bool mjjdn_isLoaded;
	int	nlep_;
	TBranch *nlep_branch;
	bool nlep_isLoaded;
	int	nel_;
	TBranch *nel_branch;
	bool nel_isLoaded;
	int	nmu_;
	TBranch *nmu_branch;
	bool nmu_isLoaded;
	int	st_;
	TBranch *st_branch;
	bool st_isLoaded;
	int	goodrun_;
	TBranch *goodrun_branch;
	bool goodrun_isLoaded;
	int	lumi_;
	TBranch *lumi_branch;
	bool lumi_isLoaded;
	int	event_;
	TBranch *event_branch;
	bool event_isLoaded;
	int	failjetid_;
	TBranch *failjetid_branch;
	bool failjetid_isLoaded;
	float	unc_;
	TBranch *unc_branch;
	bool unc_isLoaded;
	float	uncx_;
	TBranch *uncx_branch;
	bool uncx_isLoaded;
	float	uncy_;
	TBranch *uncy_branch;
	bool uncy_isLoaded;
	float	maxemf_;
	TBranch *maxemf_branch;
	bool maxemf_isLoaded;
	float	trgeff_;
	TBranch *trgeff_branch;
	bool trgeff_isLoaded;
	int	nvtx_;
	TBranch *nvtx_branch;
	bool nvtx_isLoaded;
	float	weight_;
	TBranch *weight_branch;
	bool weight_isLoaded;
	float	vtxweight_;
	TBranch *vtxweight_branch;
	bool vtxweight_isLoaded;
	float	pthat_;
	TBranch *pthat_branch;
	bool pthat_isLoaded;
	float	mllgen_;
	TBranch *mllgen_branch;
	bool mllgen_isLoaded;
	float	qscale_;
	TBranch *qscale_branch;
	bool qscale_isLoaded;
	float	mg_;
	TBranch *mg_branch;
	bool mg_isLoaded;
	float	ml_;
	TBranch *ml_branch;
	bool ml_isLoaded;
	float	x_;
	TBranch *x_branch;
	bool x_isLoaded;
	float	ptgen1_;
	TBranch *ptgen1_branch;
	bool ptgen1_isLoaded;
	float	ptgen2_;
	TBranch *ptgen2_branch;
	bool ptgen2_isLoaded;
	float	eff0_;
	TBranch *eff0_branch;
	bool eff0_isLoaded;
	float	eff100_;
	TBranch *eff100_branch;
	bool eff100_isLoaded;
	float	eff200_;
	TBranch *eff200_branch;
	bool eff200_isLoaded;
	float	eff300_;
	TBranch *eff300_branch;
	bool eff300_isLoaded;
	float	eveto1_;
	TBranch *eveto1_branch;
	bool eveto1_isLoaded;
	float	hveto1_;
	TBranch *hveto1_branch;
	bool hveto1_isLoaded;
	float	eveto2_;
	TBranch *eveto2_branch;
	bool eveto2_isLoaded;
	float	hveto2_;
	TBranch *hveto2_branch;
	bool hveto2_isLoaded;
	int	ngenels_;
	TBranch *ngenels_branch;
	bool ngenels_isLoaded;
	int	ngenmus_;
	TBranch *ngenmus_branch;
	bool ngenmus_isLoaded;
	int	ngentaus_;
	TBranch *ngentaus_branch;
	bool ngentaus_isLoaded;
	int	ngenleps_;
	TBranch *ngenleps_branch;
	bool ngenleps_isLoaded;
	int	jet1flav_;
	TBranch *jet1flav_branch;
	bool jet1flav_isLoaded;
	int	jet2flav_;
	TBranch *jet2flav_branch;
	bool jet2flav_isLoaded;
	int	jet3flav_;
	TBranch *jet3flav_branch;
	bool jet3flav_isLoaded;
	int	jet4flav_;
	TBranch *jet4flav_branch;
	bool jet4flav_isLoaded;
	int	ngenbs_;
	TBranch *ngenbs_branch;
	bool ngenbs_isLoaded;
	float	jet1drgen_;
	TBranch *jet1drgen_branch;
	bool jet1drgen_isLoaded;
	float	jet2drgen_;
	TBranch *jet2drgen_branch;
	bool jet2drgen_isLoaded;
	float	jet3drgen_;
	TBranch *jet3drgen_branch;
	bool jet3drgen_isLoaded;
	float	jet4drgen_;
	TBranch *jet4drgen_branch;
	bool jet4drgen_isLoaded;
	float	jet1beta1_01_;
	TBranch *jet1beta1_01_branch;
	bool jet1beta1_01_isLoaded;
	float	jet2beta1_01_;
	TBranch *jet2beta1_01_branch;
	bool jet2beta1_01_isLoaded;
	float	jet3beta1_01_;
	TBranch *jet3beta1_01_branch;
	bool jet3beta1_01_isLoaded;
	float	jet4beta1_01_;
	TBranch *jet4beta1_01_branch;
	bool jet4beta1_01_isLoaded;
	float	jet1beta2_01_;
	TBranch *jet1beta2_01_branch;
	bool jet1beta2_01_isLoaded;
	float	jet2beta2_01_;
	TBranch *jet2beta2_01_branch;
	bool jet2beta2_01_isLoaded;
	float	jet3beta2_01_;
	TBranch *jet3beta2_01_branch;
	bool jet3beta2_01_isLoaded;
	float	jet4beta2_01_;
	TBranch *jet4beta2_01_branch;
	bool jet4beta2_01_isLoaded;
	float	jet1beta1_05_;
	TBranch *jet1beta1_05_branch;
	bool jet1beta1_05_isLoaded;
	float	jet2beta1_05_;
	TBranch *jet2beta1_05_branch;
	bool jet2beta1_05_isLoaded;
	float	jet3beta1_05_;
	TBranch *jet3beta1_05_branch;
	bool jet3beta1_05_isLoaded;
	float	jet4beta1_05_;
	TBranch *jet4beta1_05_branch;
	bool jet4beta1_05_isLoaded;
	float	jet1beta2_05_;
	TBranch *jet1beta2_05_branch;
	bool jet1beta2_05_isLoaded;
	float	jet2beta2_05_;
	TBranch *jet2beta2_05_branch;
	bool jet2beta2_05_isLoaded;
	float	jet3beta2_05_;
	TBranch *jet3beta2_05_branch;
	bool jet3beta2_05_isLoaded;
	float	jet4beta2_05_;
	TBranch *jet4beta2_05_branch;
	bool jet4beta2_05_isLoaded;
	float	jet1beta1_10_;
	TBranch *jet1beta1_10_branch;
	bool jet1beta1_10_isLoaded;
	float	jet2beta1_10_;
	TBranch *jet2beta1_10_branch;
	bool jet2beta1_10_isLoaded;
	float	jet3beta1_10_;
	TBranch *jet3beta1_10_branch;
	bool jet3beta1_10_isLoaded;
	float	jet4beta1_10_;
	TBranch *jet4beta1_10_branch;
	bool jet4beta1_10_isLoaded;
	float	jet1beta2_10_;
	TBranch *jet1beta2_10_branch;
	bool jet1beta2_10_isLoaded;
	float	jet2beta2_10_;
	TBranch *jet2beta2_10_branch;
	bool jet2beta2_10_isLoaded;
	float	jet3beta2_10_;
	TBranch *jet3beta2_10_branch;
	bool jet3beta2_10_isLoaded;
	float	jet4beta2_10_;
	TBranch *jet4beta2_10_branch;
	bool jet4beta2_10_isLoaded;
	int	nwzpartons_;
	TBranch *nwzpartons_branch;
	bool nwzpartons_isLoaded;
	int	ngennue_;
	TBranch *ngennue_branch;
	bool ngennue_isLoaded;
	int	ngennum_;
	TBranch *ngennum_branch;
	bool ngennum_isLoaded;
	int	ngennut_;
	TBranch *ngennut_branch;
	bool ngennut_isLoaded;
	int	ngennu_;
	TBranch *ngennu_branch;
	bool ngennu_isLoaded;
	float	mlb1_;
	TBranch *mlb1_branch;
	bool mlb1_isLoaded;
	float	mlb2_;
	TBranch *mlb2_branch;
	bool mlb2_isLoaded;
	float	mlbt1_;
	TBranch *mlbt1_branch;
	bool mlbt1_isLoaded;
	float	mlbt2_;
	TBranch *mlbt2_branch;
	bool mlbt2_isLoaded;
	float	mlbmin_;
	TBranch *mlbmin_branch;
	bool mlbmin_isLoaded;
	float	mlbtmin_;
	TBranch *mlbtmin_branch;
	bool mlbtmin_isLoaded;
	float	mt2_;
	TBranch *mt2_branch;
	bool mt2_isLoaded;
	float	mt2j_;
	TBranch *mt2j_branch;
	bool mt2j_isLoaded;
	int	el27_;
	TBranch *el27_branch;
	bool el27_isLoaded;
	int	mm_;
	TBranch *mm_branch;
	bool mm_isLoaded;
	int	mmtk_;
	TBranch *mmtk_branch;
	bool mmtk_isLoaded;
	int	me_;
	TBranch *me_branch;
	bool me_isLoaded;
	int	em_;
	TBranch *em_branch;
	bool em_isLoaded;
	int	mu_;
	TBranch *mu_branch;
	bool mu_isLoaded;
	int	mu21_;
	TBranch *mu21_branch;
	bool mu21_isLoaded;
	int	ee_;
	TBranch *ee_branch;
	bool ee_isLoaded;
	float	m13_;
	TBranch *m13_branch;
	bool m13_isLoaded;
	float	m23_;
	TBranch *m23_branch;
	bool m23_isLoaded;
	float	m14_;
	TBranch *m14_branch;
	bool m14_isLoaded;
	float	m24_;
	TBranch *m24_branch;
	bool m24_isLoaded;
	float	m34_;
	TBranch *m34_branch;
	bool m34_isLoaded;
	float	drjetll_;
	TBranch *drjetll_branch;
	bool drjetll_isLoaded;
	float	jetptll_;
	TBranch *jetptll_branch;
	bool jetptll_isLoaded;
	int	pfjetidll_;
	TBranch *pfjetidll_branch;
	bool pfjetidll_isLoaded;
	float	drjetlt_;
	TBranch *drjetlt_branch;
	bool drjetlt_isLoaded;
	float	jetptlt_;
	TBranch *jetptlt_branch;
	bool jetptlt_isLoaded;
	int	pfjetidlt_;
	TBranch *pfjetidlt_branch;
	bool pfjetidlt_isLoaded;
	int	id1_;
	TBranch *id1_branch;
	bool id1_isLoaded;
	int	id2_;
	TBranch *id2_branch;
	bool id2_isLoaded;
	int	id3_;
	TBranch *id3_branch;
	bool id3_isLoaded;
	int	id4_;
	TBranch *id4_branch;
	bool id4_isLoaded;
	int	id5_;
	TBranch *id5_branch;
	bool id5_isLoaded;
	int	id6_;
	TBranch *id6_branch;
	bool id6_isLoaded;
	int	el1tv_;
	TBranch *el1tv_branch;
	bool el1tv_isLoaded;
	int	el2tv_;
	TBranch *el2tv_branch;
	bool el2tv_isLoaded;
	int	el1nomu_;
	TBranch *el1nomu_branch;
	bool el1nomu_isLoaded;
	int	el2nomu_;
	TBranch *el2nomu_branch;
	bool el2nomu_isLoaded;
	int	el1nomuss_;
	TBranch *el1nomuss_branch;
	bool el1nomuss_isLoaded;
	int	el2nomuss_;
	TBranch *el2nomuss_branch;
	bool el2nomuss_isLoaded;
	float	tche1_;
	TBranch *tche1_branch;
	bool tche1_isLoaded;
	float	tche2_;
	TBranch *tche2_branch;
	bool tche2_isLoaded;
	float	tche3_;
	TBranch *tche3_branch;
	bool tche3_isLoaded;
	float	tche4_;
	TBranch *tche4_branch;
	bool tche4_isLoaded;
	float	tche5_;
	TBranch *tche5_branch;
	bool tche5_isLoaded;
	float	tche6_;
	TBranch *tche6_branch;
	bool tche6_isLoaded;
	float	tche7_;
	TBranch *tche7_branch;
	bool tche7_isLoaded;
	float	tche8_;
	TBranch *tche8_branch;
	bool tche8_isLoaded;
	float	csv1_;
	TBranch *csv1_branch;
	bool csv1_isLoaded;
	float	csv2_;
	TBranch *csv2_branch;
	bool csv2_isLoaded;
	float	csv3_;
	TBranch *csv3_branch;
	bool csv3_isLoaded;
	float	csv4_;
	TBranch *csv4_branch;
	bool csv4_isLoaded;
	float	csv5_;
	TBranch *csv5_branch;
	bool csv5_isLoaded;
	float	csv6_;
	TBranch *csv6_branch;
	bool csv6_isLoaded;
	float	csv7_;
	TBranch *csv7_branch;
	bool csv7_isLoaded;
	float	csv8_;
	TBranch *csv8_branch;
	bool csv8_isLoaded;
	float	jetunc1_;
	TBranch *jetunc1_branch;
	bool jetunc1_isLoaded;
	float	jetunc2_;
	TBranch *jetunc2_branch;
	bool jetunc2_isLoaded;
	float	jetunc3_;
	TBranch *jetunc3_branch;
	bool jetunc3_isLoaded;
	float	jetunc4_;
	TBranch *jetunc4_branch;
	bool jetunc4_isLoaded;
	float	jetunc5_;
	TBranch *jetunc5_branch;
	bool jetunc5_isLoaded;
	float	jetunc6_;
	TBranch *jetunc6_branch;
	bool jetunc6_isLoaded;
	float	jetunc7_;
	TBranch *jetunc7_branch;
	bool jetunc7_isLoaded;
	float	jetunc8_;
	TBranch *jetunc8_branch;
	bool jetunc8_isLoaded;
	int	jetgenb1_;
	TBranch *jetgenb1_branch;
	bool jetgenb1_isLoaded;
	int	jetgenb2_;
	TBranch *jetgenb2_branch;
	bool jetgenb2_isLoaded;
	int	jetgenb3_;
	TBranch *jetgenb3_branch;
	bool jetgenb3_isLoaded;
	int	jetgenb4_;
	TBranch *jetgenb4_branch;
	bool jetgenb4_isLoaded;
	int	jetgenb5_;
	TBranch *jetgenb5_branch;
	bool jetgenb5_isLoaded;
	int	jetgenb6_;
	TBranch *jetgenb6_branch;
	bool jetgenb6_isLoaded;
	int	jetgenb7_;
	TBranch *jetgenb7_branch;
	bool jetgenb7_isLoaded;
	int	jetgenb8_;
	TBranch *jetgenb8_branch;
	bool jetgenb8_isLoaded;
	float	pfmett1new_;
	TBranch *pfmett1new_branch;
	bool pfmett1new_isLoaded;
	float	pfmett1newphi_;
	TBranch *pfmett1newphi_branch;
	bool pfmett1newphi_isLoaded;
	float	minmet_;
	TBranch *minmet_branch;
	bool minmet_isLoaded;
	float	trkmet_;
	TBranch *trkmet_branch;
	bool trkmet_isLoaded;
	float	trkmetphi_;
	TBranch *trkmetphi_branch;
	bool trkmetphi_isLoaded;
	float	trksumet_;
	TBranch *trksumet_branch;
	bool trksumet_isLoaded;
	float	pfmet_;
	TBranch *pfmet_branch;
	bool pfmet_isLoaded;
	float	pfmett1_;
	TBranch *pfmett1_branch;
	bool pfmett1_isLoaded;
	float	pfmett1phi_;
	TBranch *pfmett1phi_branch;
	bool pfmett1phi_isLoaded;
	float	pfmetup_;
	TBranch *pfmetup_branch;
	bool pfmetup_isLoaded;
	float	pfmetdn_;
	TBranch *pfmetdn_branch;
	bool pfmetdn_isLoaded;
	float	pfmetphi_;
	TBranch *pfmetphi_branch;
	bool pfmetphi_isLoaded;
	float	pfsumet_;
	TBranch *pfsumet_branch;
	bool pfsumet_isLoaded;
	float	met_;
	TBranch *met_branch;
	bool met_isLoaded;
	float	metphi_;
	TBranch *metphi_branch;
	bool metphi_isLoaded;
	float	sumet_;
	TBranch *sumet_branch;
	bool sumet_isLoaded;
	float	mumet_;
	TBranch *mumet_branch;
	bool mumet_isLoaded;
	float	mumetphi_;
	TBranch *mumetphi_branch;
	bool mumetphi_isLoaded;
	float	musumet_;
	TBranch *musumet_branch;
	bool musumet_isLoaded;
	float	mujesmet_;
	TBranch *mujesmet_branch;
	bool mujesmet_isLoaded;
	float	mujesmetphi_;
	TBranch *mujesmetphi_branch;
	bool mujesmetphi_isLoaded;
	float	mujessumet_;
	TBranch *mujessumet_branch;
	bool mujessumet_isLoaded;
	float	genmet_;
	TBranch *genmet_branch;
	bool genmet_isLoaded;
	float	genmetcustom_;
	TBranch *genmetcustom_branch;
	bool genmetcustom_isLoaded;
	float	genmetphi_;
	TBranch *genmetphi_branch;
	bool genmetphi_isLoaded;
	float	gensumet_;
	TBranch *gensumet_branch;
	bool gensumet_isLoaded;
	float	dphixmet_;
	TBranch *dphixmet_branch;
	bool dphixmet_isLoaded;
	float	metpar_;
	TBranch *metpar_branch;
	bool metpar_isLoaded;
	float	metperp_;
	TBranch *metperp_branch;
	bool metperp_isLoaded;
	float	tcmet_;
	TBranch *tcmet_branch;
	bool tcmet_isLoaded;
	float	tcmetphi_;
	TBranch *tcmetphi_branch;
	bool tcmetphi_isLoaded;
	float	tcsumet_;
	TBranch *tcsumet_branch;
	bool tcsumet_isLoaded;
	float	tcmetNew_;
	TBranch *tcmetNew_branch;
	bool tcmetNew_isLoaded;
	float	tcmetphiNew_;
	TBranch *tcmetphiNew_branch;
	bool tcmetphiNew_isLoaded;
	float	tcsumetNew_;
	TBranch *tcsumetNew_branch;
	bool tcsumetNew_isLoaded;
	float	tcmetcor_;
	TBranch *tcmetcor_branch;
	bool tcmetcor_isLoaded;
	float	pfmetcor_;
	TBranch *pfmetcor_branch;
	bool pfmetcor_isLoaded;
	int	njets_;
	TBranch *njets_branch;
	bool njets_isLoaded;
	int	njetsold_;
	TBranch *njetsold_branch;
	bool njetsold_isLoaded;
	int	njetsres_;
	TBranch *njetsres_branch;
	bool njetsres_isLoaded;
	int	njetsup_;
	TBranch *njetsup_branch;
	bool njetsup_isLoaded;
	int	njetsdn_;
	TBranch *njetsdn_branch;
	bool njetsdn_isLoaded;
	int	njpt_;
	TBranch *njpt_branch;
	bool njpt_isLoaded;
	int	njets40_;
	TBranch *njets40_branch;
	bool njets40_isLoaded;
	int	njets40up_;
	TBranch *njets40up_branch;
	bool njets40up_isLoaded;
	int	njets40dn_;
	TBranch *njets40dn_branch;
	bool njets40dn_isLoaded;
	float	sumjetpt_;
	TBranch *sumjetpt_branch;
	bool sumjetpt_isLoaded;
	float	sumjetpt10_;
	TBranch *sumjetpt10_branch;
	bool sumjetpt10_isLoaded;
	float	vecjetpt_;
	TBranch *vecjetpt_branch;
	bool vecjetpt_isLoaded;
	int	nbtags_;
	TBranch *nbtags_branch;
	bool nbtags_isLoaded;
	int	nbl_;
	TBranch *nbl_branch;
	bool nbl_isLoaded;
	int	nbm_;
	TBranch *nbm_branch;
	bool nbm_isLoaded;
	float	ndphijetmet_;
	TBranch *ndphijetmet_branch;
	bool ndphijetmet_isLoaded;
	float	maxjetpt_;
	TBranch *maxjetpt_branch;
	bool maxjetpt_isLoaded;
	float	maxjetdphimet_;
	TBranch *maxjetdphimet_branch;
	bool maxjetdphimet_isLoaded;
	int	leptype_;
	TBranch *leptype_branch;
	bool leptype_isLoaded;
	int	ecaltype_;
	TBranch *ecaltype_branch;
	bool ecaltype_isLoaded;
	int	passz_;
	TBranch *passz_branch;
	bool passz_isLoaded;
	int	pdgid_;
	TBranch *pdgid_branch;
	bool pdgid_isLoaded;
	float	dpdm_;
	TBranch *dpdm_branch;
	bool dpdm_isLoaded;
	float	meterror_;
	TBranch *meterror_branch;
	bool meterror_isLoaded;
	float	meterrorc_;
	TBranch *meterrorc_branch;
	bool meterrorc_isLoaded;
	float	ptll_;
	TBranch *ptll_branch;
	bool ptll_isLoaded;
	float	ptlt_;
	TBranch *ptlt_branch;
	bool ptlt_isLoaded;
	float	pterrll_;
	TBranch *pterrll_branch;
	bool pterrll_isLoaded;
	float	pterrlt_;
	TBranch *pterrlt_branch;
	bool pterrlt_isLoaded;
	float	ptlltrk_;
	TBranch *ptlltrk_branch;
	bool ptlltrk_isLoaded;
	float	ptlttrk_;
	TBranch *ptlttrk_branch;
	bool ptlttrk_isLoaded;
	float	ptllgfit_;
	TBranch *ptllgfit_branch;
	bool ptllgfit_isLoaded;
	float	ptltgfit_;
	TBranch *ptltgfit_branch;
	bool ptltgfit_isLoaded;
	float	ptllpf_;
	TBranch *ptllpf_branch;
	bool ptllpf_isLoaded;
	float	ptltpf_;
	TBranch *ptltpf_branch;
	bool ptltpf_isLoaded;
	float	ptllgen_;
	TBranch *ptllgen_branch;
	bool ptllgen_isLoaded;
	float	ptltgen_;
	TBranch *ptltgen_branch;
	bool ptltgen_isLoaded;
	int	npfmuons_;
	TBranch *npfmuons_branch;
	bool npfmuons_isLoaded;
	int	nmatchedpfmuons_;
	TBranch *nmatchedpfmuons_branch;
	bool nmatchedpfmuons_isLoaded;
	int	idll_;
	TBranch *idll_branch;
	bool idll_isLoaded;
	int	idlt_;
	TBranch *idlt_branch;
	bool idlt_isLoaded;
	float	etall_;
	TBranch *etall_branch;
	bool etall_isLoaded;
	float	etalt_;
	TBranch *etalt_branch;
	bool etalt_isLoaded;
	float	phill_;
	TBranch *phill_branch;
	bool phill_isLoaded;
	float	philt_;
	TBranch *philt_branch;
	bool philt_isLoaded;
	float	dilmass_;
	TBranch *dilmass_branch;
	bool dilmass_isLoaded;
	float	dilmasspf_;
	TBranch *dilmasspf_branch;
	bool dilmasspf_isLoaded;
	float	dilmasscor_;
	TBranch *dilmasscor_branch;
	bool dilmasscor_isLoaded;
	float	dilpt_;
	TBranch *dilpt_branch;
	bool dilpt_isLoaded;
	int	flagll_;
	TBranch *flagll_branch;
	bool flagll_isLoaded;
	int	flaglt_;
	TBranch *flaglt_branch;
	bool flaglt_isLoaded;
	int	isdata_;
	TBranch *isdata_branch;
	bool isdata_isLoaded;
	float	lljj_;
	TBranch *lljj_branch;
	bool lljj_isLoaded;
	float	jj_;
	TBranch *jj_branch;
	bool jj_isLoaded;
	float	l1jj_;
	TBranch *l1jj_branch;
	bool l1jj_isLoaded;
	float	l2jj_;
	TBranch *l2jj_branch;
	bool l2jj_isLoaded;
	float	j1ll_;
	TBranch *j1ll_branch;
	bool j1ll_isLoaded;
	float	j2ll_;
	TBranch *j2ll_branch;
	bool j2ll_isLoaded;
	float	l1j1_;
	TBranch *l1j1_branch;
	bool l1j1_isLoaded;
	float	l2j2_;
	TBranch *l2j2_branch;
	bool l2j2_isLoaded;
	float	l1j2_;
	TBranch *l1j2_branch;
	bool l1j2_isLoaded;
	float	l2j1_;
	TBranch *l2j1_branch;
	bool l2j1_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *dilep_;
	TBranch *dilep_branch;
	bool dilep_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *dileppf_;
	TBranch *dileppf_branch;
	bool dileppf_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *w_;
	TBranch *w_branch;
	bool w_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep1_;
	TBranch *lep1_branch;
	bool lep1_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep2_;
	TBranch *lep2_branch;
	bool lep2_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep3_;
	TBranch *lep3_branch;
	bool lep3_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep4_;
	TBranch *lep4_branch;
	bool lep4_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep5_;
	TBranch *lep5_branch;
	bool lep5_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep6_;
	TBranch *lep6_branch;
	bool lep6_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *pflep1_;
	TBranch *pflep1_branch;
	bool pflep1_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *pflep2_;
	TBranch *pflep2_branch;
	bool pflep2_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *genlep1_;
	TBranch *genlep1_branch;
	bool genlep1_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *genlep2_;
	TBranch *genlep2_branch;
	bool genlep2_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *gennu1_;
	TBranch *gennu1_branch;
	bool gennu1_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *gennu2_;
	TBranch *gennu2_branch;
	bool gennu2_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *pfTau_leadPtcand_;
	TBranch *pfTau_leadPtcand_branch;
	bool pfTau_leadPtcand_isLoaded;
	int	pfTau_leadPtcandID_;
	TBranch *pfTau_leadPtcandID_branch;
	bool pfTau_leadPtcandID_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *jet1_;
	TBranch *jet1_branch;
	bool jet1_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *jet2_;
	TBranch *jet2_branch;
	bool jet2_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *jet3_;
	TBranch *jet3_branch;
	bool jet3_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *jet4_;
	TBranch *jet4_branch;
	bool jet4_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *jet5_;
	TBranch *jet5_branch;
	bool jet5_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *jet6_;
	TBranch *jet6_branch;
	bool jet6_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *jet7_;
	TBranch *jet7_branch;
	bool jet7_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *jet8_;
	TBranch *jet8_branch;
	bool jet8_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *subthreshjetup1_;
	TBranch *subthreshjetup1_branch;
	bool subthreshjetup1_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *subthreshjetup2_;
	TBranch *subthreshjetup2_branch;
	bool subthreshjetup2_isLoaded;
	int	jet1mcfa_;
	TBranch *jet1mcfa_branch;
	bool jet1mcfa_isLoaded;
	int	jet2mcfa_;
	TBranch *jet2mcfa_branch;
	bool jet2mcfa_isLoaded;
	int	jet3mcfa_;
	TBranch *jet3mcfa_branch;
	bool jet3mcfa_isLoaded;
	int	jet4mcfa_;
	TBranch *jet4mcfa_branch;
	bool jet4mcfa_isLoaded;
	int	jet1mcfp_;
	TBranch *jet1mcfp_branch;
	bool jet1mcfp_isLoaded;
	int	jet2mcfp_;
	TBranch *jet2mcfp_branch;
	bool jet2mcfp_isLoaded;
	int	jet3mcfp_;
	TBranch *jet3mcfp_branch;
	bool jet3mcfp_isLoaded;
	int	jet4mcfp_;
	TBranch *jet4mcfp_branch;
	bool jet4mcfp_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *bjet1_;
	TBranch *bjet1_branch;
	bool bjet1_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *bjet2_;
	TBranch *bjet2_branch;
	bool bjet2_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *bjet3_;
	TBranch *bjet3_branch;
	bool bjet3_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *bjet4_;
	TBranch *bjet4_branch;
	bool bjet4_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *genbquark1_;
	TBranch *genbquark1_branch;
	bool genbquark1_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *genbquark2_;
	TBranch *genbquark2_branch;
	bool genbquark2_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *genbquark3_;
	TBranch *genbquark3_branch;
	bool genbquark3_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *genbquark4_;
	TBranch *genbquark4_branch;
	bool genbquark4_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *genz_;
	TBranch *genz_branch;
	bool genz_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *gent_;
	TBranch *gent_branch;
	bool gent_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *gentbar_;
	TBranch *gentbar_branch;
	bool gentbar_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *genttbar_;
	TBranch *genttbar_branch;
	bool genttbar_isLoaded;
	int	csc_;
	TBranch *csc_branch;
	bool csc_isLoaded;
	int	hbhe_;
	TBranch *hbhe_branch;
	bool hbhe_isLoaded;
	int	hbhenew_;
	TBranch *hbhenew_branch;
	bool hbhenew_isLoaded;
	int	hcallaser_;
	TBranch *hcallaser_branch;
	bool hcallaser_isLoaded;
	int	ecallaser_;
	TBranch *ecallaser_branch;
	bool ecallaser_isLoaded;
	int	ecaltp_;
	TBranch *ecaltp_branch;
	bool ecaltp_isLoaded;
	int	trkfail_;
	TBranch *trkfail_branch;
	bool trkfail_isLoaded;
	int	eebadsc_;
	TBranch *eebadsc_branch;
	bool eebadsc_isLoaded;
	float	drll_;
	TBranch *drll_branch;
	bool drll_isLoaded;
	float	dphill_;
	TBranch *dphill_branch;
	bool dphill_isLoaded;
	float	drblmin_;
	TBranch *drblmin_branch;
	bool drblmin_isLoaded;
	float	st30_;
	TBranch *st30_branch;
	bool st30_isLoaded;
	float	st40_;
	TBranch *st40_branch;
	bool st40_isLoaded;
	float	m1_;
	TBranch *m1_branch;
	bool m1_isLoaded;
	float	m2_;
	TBranch *m2_branch;
	bool m2_isLoaded;
	float	m3_;
	TBranch *m3_branch;
	bool m3_isLoaded;
	int	zveto_;
	TBranch *zveto_branch;
	bool zveto_isLoaded;
	int	nextramu_;
	TBranch *nextramu_branch;
	bool nextramu_isLoaded;
	int	nhyp_;
	TBranch *nhyp_branch;
	bool nhyp_isLoaded;
	int	nmuss_;
	TBranch *nmuss_branch;
	bool nmuss_isLoaded;
	int	extraz_;
	TBranch *extraz_branch;
	bool extraz_isLoaded;
	int	extrag_;
	TBranch *extrag_branch;
	bool extrag_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *pujets_;
	TBranch *pujets_branch;
	bool pujets_isLoaded;
	int	npujets_;
	TBranch *npujets_branch;
	bool npujets_isLoaded;
public: 
void Init(TTree *tree) {
	dilep_branch = 0;
	if (tree->GetBranch("dilep") != 0) {
		dilep_branch = tree->GetBranch("dilep");
		if (dilep_branch) {dilep_branch->SetAddress(&dilep_);}
	}
	dileppf_branch = 0;
	if (tree->GetBranch("dileppf") != 0) {
		dileppf_branch = tree->GetBranch("dileppf");
		if (dileppf_branch) {dileppf_branch->SetAddress(&dileppf_);}
	}
	w_branch = 0;
	if (tree->GetBranch("w") != 0) {
		w_branch = tree->GetBranch("w");
		if (w_branch) {w_branch->SetAddress(&w_);}
	}
	lep1_branch = 0;
	if (tree->GetBranch("lep1") != 0) {
		lep1_branch = tree->GetBranch("lep1");
		if (lep1_branch) {lep1_branch->SetAddress(&lep1_);}
	}
	lep2_branch = 0;
	if (tree->GetBranch("lep2") != 0) {
		lep2_branch = tree->GetBranch("lep2");
		if (lep2_branch) {lep2_branch->SetAddress(&lep2_);}
	}
	lep3_branch = 0;
	if (tree->GetBranch("lep3") != 0) {
		lep3_branch = tree->GetBranch("lep3");
		if (lep3_branch) {lep3_branch->SetAddress(&lep3_);}
	}
	lep4_branch = 0;
	if (tree->GetBranch("lep4") != 0) {
		lep4_branch = tree->GetBranch("lep4");
		if (lep4_branch) {lep4_branch->SetAddress(&lep4_);}
	}
	lep5_branch = 0;
	if (tree->GetBranch("lep5") != 0) {
		lep5_branch = tree->GetBranch("lep5");
		if (lep5_branch) {lep5_branch->SetAddress(&lep5_);}
	}
	lep6_branch = 0;
	if (tree->GetBranch("lep6") != 0) {
		lep6_branch = tree->GetBranch("lep6");
		if (lep6_branch) {lep6_branch->SetAddress(&lep6_);}
	}
	pflep1_branch = 0;
	if (tree->GetBranch("pflep1") != 0) {
		pflep1_branch = tree->GetBranch("pflep1");
		if (pflep1_branch) {pflep1_branch->SetAddress(&pflep1_);}
	}
	pflep2_branch = 0;
	if (tree->GetBranch("pflep2") != 0) {
		pflep2_branch = tree->GetBranch("pflep2");
		if (pflep2_branch) {pflep2_branch->SetAddress(&pflep2_);}
	}
	genlep1_branch = 0;
	if (tree->GetBranch("genlep1") != 0) {
		genlep1_branch = tree->GetBranch("genlep1");
		if (genlep1_branch) {genlep1_branch->SetAddress(&genlep1_);}
	}
	genlep2_branch = 0;
	if (tree->GetBranch("genlep2") != 0) {
		genlep2_branch = tree->GetBranch("genlep2");
		if (genlep2_branch) {genlep2_branch->SetAddress(&genlep2_);}
	}
	gennu1_branch = 0;
	if (tree->GetBranch("gennu1") != 0) {
		gennu1_branch = tree->GetBranch("gennu1");
		if (gennu1_branch) {gennu1_branch->SetAddress(&gennu1_);}
	}
	gennu2_branch = 0;
	if (tree->GetBranch("gennu2") != 0) {
		gennu2_branch = tree->GetBranch("gennu2");
		if (gennu2_branch) {gennu2_branch->SetAddress(&gennu2_);}
	}
	pfTau_leadPtcand_branch = 0;
	if (tree->GetBranch("pfTau_leadPtcand") != 0) {
		pfTau_leadPtcand_branch = tree->GetBranch("pfTau_leadPtcand");
		if (pfTau_leadPtcand_branch) {pfTau_leadPtcand_branch->SetAddress(&pfTau_leadPtcand_);}
	}
	jet1_branch = 0;
	if (tree->GetBranch("jet1") != 0) {
		jet1_branch = tree->GetBranch("jet1");
		if (jet1_branch) {jet1_branch->SetAddress(&jet1_);}
	}
	jet2_branch = 0;
	if (tree->GetBranch("jet2") != 0) {
		jet2_branch = tree->GetBranch("jet2");
		if (jet2_branch) {jet2_branch->SetAddress(&jet2_);}
	}
	jet3_branch = 0;
	if (tree->GetBranch("jet3") != 0) {
		jet3_branch = tree->GetBranch("jet3");
		if (jet3_branch) {jet3_branch->SetAddress(&jet3_);}
	}
	jet4_branch = 0;
	if (tree->GetBranch("jet4") != 0) {
		jet4_branch = tree->GetBranch("jet4");
		if (jet4_branch) {jet4_branch->SetAddress(&jet4_);}
	}
	jet5_branch = 0;
	if (tree->GetBranch("jet5") != 0) {
		jet5_branch = tree->GetBranch("jet5");
		if (jet5_branch) {jet5_branch->SetAddress(&jet5_);}
	}
	jet6_branch = 0;
	if (tree->GetBranch("jet6") != 0) {
		jet6_branch = tree->GetBranch("jet6");
		if (jet6_branch) {jet6_branch->SetAddress(&jet6_);}
	}
	jet7_branch = 0;
	if (tree->GetBranch("jet7") != 0) {
		jet7_branch = tree->GetBranch("jet7");
		if (jet7_branch) {jet7_branch->SetAddress(&jet7_);}
	}
	jet8_branch = 0;
	if (tree->GetBranch("jet8") != 0) {
		jet8_branch = tree->GetBranch("jet8");
		if (jet8_branch) {jet8_branch->SetAddress(&jet8_);}
	}
	subthreshjetup1_branch = 0;
	if (tree->GetBranch("subthreshjetup1") != 0) {
		subthreshjetup1_branch = tree->GetBranch("subthreshjetup1");
		if (subthreshjetup1_branch) {subthreshjetup1_branch->SetAddress(&subthreshjetup1_);}
	}
	subthreshjetup2_branch = 0;
	if (tree->GetBranch("subthreshjetup2") != 0) {
		subthreshjetup2_branch = tree->GetBranch("subthreshjetup2");
		if (subthreshjetup2_branch) {subthreshjetup2_branch->SetAddress(&subthreshjetup2_);}
	}
	bjet1_branch = 0;
	if (tree->GetBranch("bjet1") != 0) {
		bjet1_branch = tree->GetBranch("bjet1");
		if (bjet1_branch) {bjet1_branch->SetAddress(&bjet1_);}
	}
	bjet2_branch = 0;
	if (tree->GetBranch("bjet2") != 0) {
		bjet2_branch = tree->GetBranch("bjet2");
		if (bjet2_branch) {bjet2_branch->SetAddress(&bjet2_);}
	}
	bjet3_branch = 0;
	if (tree->GetBranch("bjet3") != 0) {
		bjet3_branch = tree->GetBranch("bjet3");
		if (bjet3_branch) {bjet3_branch->SetAddress(&bjet3_);}
	}
	bjet4_branch = 0;
	if (tree->GetBranch("bjet4") != 0) {
		bjet4_branch = tree->GetBranch("bjet4");
		if (bjet4_branch) {bjet4_branch->SetAddress(&bjet4_);}
	}
	genbquark1_branch = 0;
	if (tree->GetBranch("genbquark1") != 0) {
		genbquark1_branch = tree->GetBranch("genbquark1");
		if (genbquark1_branch) {genbquark1_branch->SetAddress(&genbquark1_);}
	}
	genbquark2_branch = 0;
	if (tree->GetBranch("genbquark2") != 0) {
		genbquark2_branch = tree->GetBranch("genbquark2");
		if (genbquark2_branch) {genbquark2_branch->SetAddress(&genbquark2_);}
	}
	genbquark3_branch = 0;
	if (tree->GetBranch("genbquark3") != 0) {
		genbquark3_branch = tree->GetBranch("genbquark3");
		if (genbquark3_branch) {genbquark3_branch->SetAddress(&genbquark3_);}
	}
	genbquark4_branch = 0;
	if (tree->GetBranch("genbquark4") != 0) {
		genbquark4_branch = tree->GetBranch("genbquark4");
		if (genbquark4_branch) {genbquark4_branch->SetAddress(&genbquark4_);}
	}
	genz_branch = 0;
	if (tree->GetBranch("genz") != 0) {
		genz_branch = tree->GetBranch("genz");
		if (genz_branch) {genz_branch->SetAddress(&genz_);}
	}
	gent_branch = 0;
	if (tree->GetBranch("gent") != 0) {
		gent_branch = tree->GetBranch("gent");
		if (gent_branch) {gent_branch->SetAddress(&gent_);}
	}
	gentbar_branch = 0;
	if (tree->GetBranch("gentbar") != 0) {
		gentbar_branch = tree->GetBranch("gentbar");
		if (gentbar_branch) {gentbar_branch->SetAddress(&gentbar_);}
	}
	genttbar_branch = 0;
	if (tree->GetBranch("genttbar") != 0) {
		genttbar_branch = tree->GetBranch("genttbar");
		if (genttbar_branch) {genttbar_branch->SetAddress(&genttbar_);}
	}
	pujets_branch = 0;
	if (tree->GetBranch("pujets") != 0) {
		pujets_branch = tree->GetBranch("pujets");
		if (pujets_branch) {pujets_branch->SetAddress(&pujets_);}
	}
  tree->SetMakeClass(1);
	rho_branch = 0;
	if (tree->GetBranch("rho") != 0) {
		rho_branch = tree->GetBranch("rho");
		if (rho_branch) {rho_branch->SetAddress(&rho_);}
	}
	vtxidx_branch = 0;
	if (tree->GetBranch("vtxidx") != 0) {
		vtxidx_branch = tree->GetBranch("vtxidx");
		if (vtxidx_branch) {vtxidx_branch->SetAddress(&vtxidx_);}
	}
	zdilep_branch = 0;
	if (tree->GetBranch("zdilep") != 0) {
		zdilep_branch = tree->GetBranch("zdilep");
		if (zdilep_branch) {zdilep_branch->SetAddress(&zdilep_);}
	}
	run_branch = 0;
	if (tree->GetBranch("run") != 0) {
		run_branch = tree->GetBranch("run");
		if (run_branch) {run_branch->SetAddress(&run_);}
	}
	xsec_branch = 0;
	if (tree->GetBranch("xsec") != 0) {
		xsec_branch = tree->GetBranch("xsec");
		if (xsec_branch) {xsec_branch->SetAddress(&xsec_);}
	}
	ssmu1_branch = 0;
	if (tree->GetBranch("ssmu1") != 0) {
		ssmu1_branch = tree->GetBranch("ssmu1");
		if (ssmu1_branch) {ssmu1_branch->SetAddress(&ssmu1_);}
	}
	ssmu2_branch = 0;
	if (tree->GetBranch("ssmu2") != 0) {
		ssmu2_branch = tree->GetBranch("ssmu2");
		if (ssmu2_branch) {ssmu2_branch->SetAddress(&ssmu2_);}
	}
	eldup_branch = 0;
	if (tree->GetBranch("eldup") != 0) {
		eldup_branch = tree->GetBranch("eldup");
		if (eldup_branch) {eldup_branch->SetAddress(&eldup_);}
	}
	btagweight_branch = 0;
	if (tree->GetBranch("btagweight") != 0) {
		btagweight_branch = tree->GetBranch("btagweight");
		if (btagweight_branch) {btagweight_branch->SetAddress(&btagweight_);}
	}
	btagweightup_branch = 0;
	if (tree->GetBranch("btagweightup") != 0) {
		btagweightup_branch = tree->GetBranch("btagweightup");
		if (btagweightup_branch) {btagweightup_branch->SetAddress(&btagweightup_);}
	}
	ht30_branch = 0;
	if (tree->GetBranch("ht30") != 0) {
		ht30_branch = tree->GetBranch("ht30");
		if (ht30_branch) {ht30_branch->SetAddress(&ht30_);}
	}
	ht40_branch = 0;
	if (tree->GetBranch("ht40") != 0) {
		ht40_branch = tree->GetBranch("ht40");
		if (ht40_branch) {ht40_branch->SetAddress(&ht40_);}
	}
	ht40up_branch = 0;
	if (tree->GetBranch("ht40up") != 0) {
		ht40up_branch = tree->GetBranch("ht40up");
		if (ht40up_branch) {ht40up_branch->SetAddress(&ht40up_);}
	}
	ht40dn_branch = 0;
	if (tree->GetBranch("ht40dn") != 0) {
		ht40dn_branch = tree->GetBranch("ht40dn");
		if (ht40dn_branch) {ht40dn_branch->SetAddress(&ht40dn_);}
	}
	nbcsvl_branch = 0;
	if (tree->GetBranch("nbcsvl") != 0) {
		nbcsvl_branch = tree->GetBranch("nbcsvl");
		if (nbcsvl_branch) {nbcsvl_branch->SetAddress(&nbcsvl_);}
	}
	nbcsvlm_branch = 0;
	if (tree->GetBranch("nbcsvlm") != 0) {
		nbcsvlm_branch = tree->GetBranch("nbcsvlm");
		if (nbcsvlm_branch) {nbcsvlm_branch->SetAddress(&nbcsvlm_);}
	}
	nbcsvm_branch = 0;
	if (tree->GetBranch("nbcsvm") != 0) {
		nbcsvm_branch = tree->GetBranch("nbcsvm");
		if (nbcsvm_branch) {nbcsvm_branch->SetAddress(&nbcsvm_);}
	}
	nbcsvt_branch = 0;
	if (tree->GetBranch("nbcsvt") != 0) {
		nbcsvt_branch = tree->GetBranch("nbcsvt");
		if (nbcsvt_branch) {nbcsvt_branch->SetAddress(&nbcsvt_);}
	}
	nbvz_branch = 0;
	if (tree->GetBranch("nbvz") != 0) {
		nbvz_branch = tree->GetBranch("nbvz");
		if (nbvz_branch) {nbvz_branch->SetAddress(&nbvz_);}
	}
	nbvzres_branch = 0;
	if (tree->GetBranch("nbvzres") != 0) {
		nbvzres_branch = tree->GetBranch("nbvzres");
		if (nbvzres_branch) {nbvzres_branch->SetAddress(&nbvzres_);}
	}
	jzb_branch = 0;
	if (tree->GetBranch("jzb") != 0) {
		jzb_branch = tree->GetBranch("jzb");
		if (jzb_branch) {jzb_branch->SetAddress(&jzb_);}
	}
	mjj_branch = 0;
	if (tree->GetBranch("mjj") != 0) {
		mjj_branch = tree->GetBranch("mjj");
		if (mjj_branch) {mjj_branch->SetAddress(&mjj_);}
	}
	mbb_branch = 0;
	if (tree->GetBranch("mbb") != 0) {
		mbb_branch = tree->GetBranch("mbb");
		if (mbb_branch) {mbb_branch->SetAddress(&mbb_);}
	}
	mjjup_branch = 0;
	if (tree->GetBranch("mjjup") != 0) {
		mjjup_branch = tree->GetBranch("mjjup");
		if (mjjup_branch) {mjjup_branch->SetAddress(&mjjup_);}
	}
	mjjdn_branch = 0;
	if (tree->GetBranch("mjjdn") != 0) {
		mjjdn_branch = tree->GetBranch("mjjdn");
		if (mjjdn_branch) {mjjdn_branch->SetAddress(&mjjdn_);}
	}
	nlep_branch = 0;
	if (tree->GetBranch("nlep") != 0) {
		nlep_branch = tree->GetBranch("nlep");
		if (nlep_branch) {nlep_branch->SetAddress(&nlep_);}
	}
	nel_branch = 0;
	if (tree->GetBranch("nel") != 0) {
		nel_branch = tree->GetBranch("nel");
		if (nel_branch) {nel_branch->SetAddress(&nel_);}
	}
	nmu_branch = 0;
	if (tree->GetBranch("nmu") != 0) {
		nmu_branch = tree->GetBranch("nmu");
		if (nmu_branch) {nmu_branch->SetAddress(&nmu_);}
	}
	st_branch = 0;
	if (tree->GetBranch("st") != 0) {
		st_branch = tree->GetBranch("st");
		if (st_branch) {st_branch->SetAddress(&st_);}
	}
	goodrun_branch = 0;
	if (tree->GetBranch("goodrun") != 0) {
		goodrun_branch = tree->GetBranch("goodrun");
		if (goodrun_branch) {goodrun_branch->SetAddress(&goodrun_);}
	}
	lumi_branch = 0;
	if (tree->GetBranch("lumi") != 0) {
		lumi_branch = tree->GetBranch("lumi");
		if (lumi_branch) {lumi_branch->SetAddress(&lumi_);}
	}
	event_branch = 0;
	if (tree->GetBranch("event") != 0) {
		event_branch = tree->GetBranch("event");
		if (event_branch) {event_branch->SetAddress(&event_);}
	}
	failjetid_branch = 0;
	if (tree->GetBranch("failjetid") != 0) {
		failjetid_branch = tree->GetBranch("failjetid");
		if (failjetid_branch) {failjetid_branch->SetAddress(&failjetid_);}
	}
	unc_branch = 0;
	if (tree->GetBranch("unc") != 0) {
		unc_branch = tree->GetBranch("unc");
		if (unc_branch) {unc_branch->SetAddress(&unc_);}
	}
	uncx_branch = 0;
	if (tree->GetBranch("uncx") != 0) {
		uncx_branch = tree->GetBranch("uncx");
		if (uncx_branch) {uncx_branch->SetAddress(&uncx_);}
	}
	uncy_branch = 0;
	if (tree->GetBranch("uncy") != 0) {
		uncy_branch = tree->GetBranch("uncy");
		if (uncy_branch) {uncy_branch->SetAddress(&uncy_);}
	}
	maxemf_branch = 0;
	if (tree->GetBranch("maxemf") != 0) {
		maxemf_branch = tree->GetBranch("maxemf");
		if (maxemf_branch) {maxemf_branch->SetAddress(&maxemf_);}
	}
	trgeff_branch = 0;
	if (tree->GetBranch("trgeff") != 0) {
		trgeff_branch = tree->GetBranch("trgeff");
		if (trgeff_branch) {trgeff_branch->SetAddress(&trgeff_);}
	}
	nvtx_branch = 0;
	if (tree->GetBranch("nvtx") != 0) {
		nvtx_branch = tree->GetBranch("nvtx");
		if (nvtx_branch) {nvtx_branch->SetAddress(&nvtx_);}
	}
	weight_branch = 0;
	if (tree->GetBranch("weight") != 0) {
		weight_branch = tree->GetBranch("weight");
		if (weight_branch) {weight_branch->SetAddress(&weight_);}
	}
	vtxweight_branch = 0;
	if (tree->GetBranch("vtxweight") != 0) {
		vtxweight_branch = tree->GetBranch("vtxweight");
		if (vtxweight_branch) {vtxweight_branch->SetAddress(&vtxweight_);}
	}
	pthat_branch = 0;
	if (tree->GetBranch("pthat") != 0) {
		pthat_branch = tree->GetBranch("pthat");
		if (pthat_branch) {pthat_branch->SetAddress(&pthat_);}
	}
	mllgen_branch = 0;
	if (tree->GetBranch("mllgen") != 0) {
		mllgen_branch = tree->GetBranch("mllgen");
		if (mllgen_branch) {mllgen_branch->SetAddress(&mllgen_);}
	}
	qscale_branch = 0;
	if (tree->GetBranch("qscale") != 0) {
		qscale_branch = tree->GetBranch("qscale");
		if (qscale_branch) {qscale_branch->SetAddress(&qscale_);}
	}
	mg_branch = 0;
	if (tree->GetBranch("mg") != 0) {
		mg_branch = tree->GetBranch("mg");
		if (mg_branch) {mg_branch->SetAddress(&mg_);}
	}
	ml_branch = 0;
	if (tree->GetBranch("ml") != 0) {
		ml_branch = tree->GetBranch("ml");
		if (ml_branch) {ml_branch->SetAddress(&ml_);}
	}
	x_branch = 0;
	if (tree->GetBranch("x") != 0) {
		x_branch = tree->GetBranch("x");
		if (x_branch) {x_branch->SetAddress(&x_);}
	}
	ptgen1_branch = 0;
	if (tree->GetBranch("ptgen1") != 0) {
		ptgen1_branch = tree->GetBranch("ptgen1");
		if (ptgen1_branch) {ptgen1_branch->SetAddress(&ptgen1_);}
	}
	ptgen2_branch = 0;
	if (tree->GetBranch("ptgen2") != 0) {
		ptgen2_branch = tree->GetBranch("ptgen2");
		if (ptgen2_branch) {ptgen2_branch->SetAddress(&ptgen2_);}
	}
	eff0_branch = 0;
	if (tree->GetBranch("eff0") != 0) {
		eff0_branch = tree->GetBranch("eff0");
		if (eff0_branch) {eff0_branch->SetAddress(&eff0_);}
	}
	eff100_branch = 0;
	if (tree->GetBranch("eff100") != 0) {
		eff100_branch = tree->GetBranch("eff100");
		if (eff100_branch) {eff100_branch->SetAddress(&eff100_);}
	}
	eff200_branch = 0;
	if (tree->GetBranch("eff200") != 0) {
		eff200_branch = tree->GetBranch("eff200");
		if (eff200_branch) {eff200_branch->SetAddress(&eff200_);}
	}
	eff300_branch = 0;
	if (tree->GetBranch("eff300") != 0) {
		eff300_branch = tree->GetBranch("eff300");
		if (eff300_branch) {eff300_branch->SetAddress(&eff300_);}
	}
	eveto1_branch = 0;
	if (tree->GetBranch("eveto1") != 0) {
		eveto1_branch = tree->GetBranch("eveto1");
		if (eveto1_branch) {eveto1_branch->SetAddress(&eveto1_);}
	}
	hveto1_branch = 0;
	if (tree->GetBranch("hveto1") != 0) {
		hveto1_branch = tree->GetBranch("hveto1");
		if (hveto1_branch) {hveto1_branch->SetAddress(&hveto1_);}
	}
	eveto2_branch = 0;
	if (tree->GetBranch("eveto2") != 0) {
		eveto2_branch = tree->GetBranch("eveto2");
		if (eveto2_branch) {eveto2_branch->SetAddress(&eveto2_);}
	}
	hveto2_branch = 0;
	if (tree->GetBranch("hveto2") != 0) {
		hveto2_branch = tree->GetBranch("hveto2");
		if (hveto2_branch) {hveto2_branch->SetAddress(&hveto2_);}
	}
	ngenels_branch = 0;
	if (tree->GetBranch("ngenels") != 0) {
		ngenels_branch = tree->GetBranch("ngenels");
		if (ngenels_branch) {ngenels_branch->SetAddress(&ngenels_);}
	}
	ngenmus_branch = 0;
	if (tree->GetBranch("ngenmus") != 0) {
		ngenmus_branch = tree->GetBranch("ngenmus");
		if (ngenmus_branch) {ngenmus_branch->SetAddress(&ngenmus_);}
	}
	ngentaus_branch = 0;
	if (tree->GetBranch("ngentaus") != 0) {
		ngentaus_branch = tree->GetBranch("ngentaus");
		if (ngentaus_branch) {ngentaus_branch->SetAddress(&ngentaus_);}
	}
	ngenleps_branch = 0;
	if (tree->GetBranch("ngenleps") != 0) {
		ngenleps_branch = tree->GetBranch("ngenleps");
		if (ngenleps_branch) {ngenleps_branch->SetAddress(&ngenleps_);}
	}
	jet1flav_branch = 0;
	if (tree->GetBranch("jet1flav") != 0) {
		jet1flav_branch = tree->GetBranch("jet1flav");
		if (jet1flav_branch) {jet1flav_branch->SetAddress(&jet1flav_);}
	}
	jet2flav_branch = 0;
	if (tree->GetBranch("jet2flav") != 0) {
		jet2flav_branch = tree->GetBranch("jet2flav");
		if (jet2flav_branch) {jet2flav_branch->SetAddress(&jet2flav_);}
	}
	jet3flav_branch = 0;
	if (tree->GetBranch("jet3flav") != 0) {
		jet3flav_branch = tree->GetBranch("jet3flav");
		if (jet3flav_branch) {jet3flav_branch->SetAddress(&jet3flav_);}
	}
	jet4flav_branch = 0;
	if (tree->GetBranch("jet4flav") != 0) {
		jet4flav_branch = tree->GetBranch("jet4flav");
		if (jet4flav_branch) {jet4flav_branch->SetAddress(&jet4flav_);}
	}
	ngenbs_branch = 0;
	if (tree->GetBranch("ngenbs") != 0) {
		ngenbs_branch = tree->GetBranch("ngenbs");
		if (ngenbs_branch) {ngenbs_branch->SetAddress(&ngenbs_);}
	}
	jet1drgen_branch = 0;
	if (tree->GetBranch("jet1drgen") != 0) {
		jet1drgen_branch = tree->GetBranch("jet1drgen");
		if (jet1drgen_branch) {jet1drgen_branch->SetAddress(&jet1drgen_);}
	}
	jet2drgen_branch = 0;
	if (tree->GetBranch("jet2drgen") != 0) {
		jet2drgen_branch = tree->GetBranch("jet2drgen");
		if (jet2drgen_branch) {jet2drgen_branch->SetAddress(&jet2drgen_);}
	}
	jet3drgen_branch = 0;
	if (tree->GetBranch("jet3drgen") != 0) {
		jet3drgen_branch = tree->GetBranch("jet3drgen");
		if (jet3drgen_branch) {jet3drgen_branch->SetAddress(&jet3drgen_);}
	}
	jet4drgen_branch = 0;
	if (tree->GetBranch("jet4drgen") != 0) {
		jet4drgen_branch = tree->GetBranch("jet4drgen");
		if (jet4drgen_branch) {jet4drgen_branch->SetAddress(&jet4drgen_);}
	}
	jet1beta1_01_branch = 0;
	if (tree->GetBranch("jet1beta1_01") != 0) {
		jet1beta1_01_branch = tree->GetBranch("jet1beta1_01");
		if (jet1beta1_01_branch) {jet1beta1_01_branch->SetAddress(&jet1beta1_01_);}
	}
	jet2beta1_01_branch = 0;
	if (tree->GetBranch("jet2beta1_01") != 0) {
		jet2beta1_01_branch = tree->GetBranch("jet2beta1_01");
		if (jet2beta1_01_branch) {jet2beta1_01_branch->SetAddress(&jet2beta1_01_);}
	}
	jet3beta1_01_branch = 0;
	if (tree->GetBranch("jet3beta1_01") != 0) {
		jet3beta1_01_branch = tree->GetBranch("jet3beta1_01");
		if (jet3beta1_01_branch) {jet3beta1_01_branch->SetAddress(&jet3beta1_01_);}
	}
	jet4beta1_01_branch = 0;
	if (tree->GetBranch("jet4beta1_01") != 0) {
		jet4beta1_01_branch = tree->GetBranch("jet4beta1_01");
		if (jet4beta1_01_branch) {jet4beta1_01_branch->SetAddress(&jet4beta1_01_);}
	}
	jet1beta2_01_branch = 0;
	if (tree->GetBranch("jet1beta2_01") != 0) {
		jet1beta2_01_branch = tree->GetBranch("jet1beta2_01");
		if (jet1beta2_01_branch) {jet1beta2_01_branch->SetAddress(&jet1beta2_01_);}
	}
	jet2beta2_01_branch = 0;
	if (tree->GetBranch("jet2beta2_01") != 0) {
		jet2beta2_01_branch = tree->GetBranch("jet2beta2_01");
		if (jet2beta2_01_branch) {jet2beta2_01_branch->SetAddress(&jet2beta2_01_);}
	}
	jet3beta2_01_branch = 0;
	if (tree->GetBranch("jet3beta2_01") != 0) {
		jet3beta2_01_branch = tree->GetBranch("jet3beta2_01");
		if (jet3beta2_01_branch) {jet3beta2_01_branch->SetAddress(&jet3beta2_01_);}
	}
	jet4beta2_01_branch = 0;
	if (tree->GetBranch("jet4beta2_01") != 0) {
		jet4beta2_01_branch = tree->GetBranch("jet4beta2_01");
		if (jet4beta2_01_branch) {jet4beta2_01_branch->SetAddress(&jet4beta2_01_);}
	}
	jet1beta1_05_branch = 0;
	if (tree->GetBranch("jet1beta1_05") != 0) {
		jet1beta1_05_branch = tree->GetBranch("jet1beta1_05");
		if (jet1beta1_05_branch) {jet1beta1_05_branch->SetAddress(&jet1beta1_05_);}
	}
	jet2beta1_05_branch = 0;
	if (tree->GetBranch("jet2beta1_05") != 0) {
		jet2beta1_05_branch = tree->GetBranch("jet2beta1_05");
		if (jet2beta1_05_branch) {jet2beta1_05_branch->SetAddress(&jet2beta1_05_);}
	}
	jet3beta1_05_branch = 0;
	if (tree->GetBranch("jet3beta1_05") != 0) {
		jet3beta1_05_branch = tree->GetBranch("jet3beta1_05");
		if (jet3beta1_05_branch) {jet3beta1_05_branch->SetAddress(&jet3beta1_05_);}
	}
	jet4beta1_05_branch = 0;
	if (tree->GetBranch("jet4beta1_05") != 0) {
		jet4beta1_05_branch = tree->GetBranch("jet4beta1_05");
		if (jet4beta1_05_branch) {jet4beta1_05_branch->SetAddress(&jet4beta1_05_);}
	}
	jet1beta2_05_branch = 0;
	if (tree->GetBranch("jet1beta2_05") != 0) {
		jet1beta2_05_branch = tree->GetBranch("jet1beta2_05");
		if (jet1beta2_05_branch) {jet1beta2_05_branch->SetAddress(&jet1beta2_05_);}
	}
	jet2beta2_05_branch = 0;
	if (tree->GetBranch("jet2beta2_05") != 0) {
		jet2beta2_05_branch = tree->GetBranch("jet2beta2_05");
		if (jet2beta2_05_branch) {jet2beta2_05_branch->SetAddress(&jet2beta2_05_);}
	}
	jet3beta2_05_branch = 0;
	if (tree->GetBranch("jet3beta2_05") != 0) {
		jet3beta2_05_branch = tree->GetBranch("jet3beta2_05");
		if (jet3beta2_05_branch) {jet3beta2_05_branch->SetAddress(&jet3beta2_05_);}
	}
	jet4beta2_05_branch = 0;
	if (tree->GetBranch("jet4beta2_05") != 0) {
		jet4beta2_05_branch = tree->GetBranch("jet4beta2_05");
		if (jet4beta2_05_branch) {jet4beta2_05_branch->SetAddress(&jet4beta2_05_);}
	}
	jet1beta1_10_branch = 0;
	if (tree->GetBranch("jet1beta1_10") != 0) {
		jet1beta1_10_branch = tree->GetBranch("jet1beta1_10");
		if (jet1beta1_10_branch) {jet1beta1_10_branch->SetAddress(&jet1beta1_10_);}
	}
	jet2beta1_10_branch = 0;
	if (tree->GetBranch("jet2beta1_10") != 0) {
		jet2beta1_10_branch = tree->GetBranch("jet2beta1_10");
		if (jet2beta1_10_branch) {jet2beta1_10_branch->SetAddress(&jet2beta1_10_);}
	}
	jet3beta1_10_branch = 0;
	if (tree->GetBranch("jet3beta1_10") != 0) {
		jet3beta1_10_branch = tree->GetBranch("jet3beta1_10");
		if (jet3beta1_10_branch) {jet3beta1_10_branch->SetAddress(&jet3beta1_10_);}
	}
	jet4beta1_10_branch = 0;
	if (tree->GetBranch("jet4beta1_10") != 0) {
		jet4beta1_10_branch = tree->GetBranch("jet4beta1_10");
		if (jet4beta1_10_branch) {jet4beta1_10_branch->SetAddress(&jet4beta1_10_);}
	}
	jet1beta2_10_branch = 0;
	if (tree->GetBranch("jet1beta2_10") != 0) {
		jet1beta2_10_branch = tree->GetBranch("jet1beta2_10");
		if (jet1beta2_10_branch) {jet1beta2_10_branch->SetAddress(&jet1beta2_10_);}
	}
	jet2beta2_10_branch = 0;
	if (tree->GetBranch("jet2beta2_10") != 0) {
		jet2beta2_10_branch = tree->GetBranch("jet2beta2_10");
		if (jet2beta2_10_branch) {jet2beta2_10_branch->SetAddress(&jet2beta2_10_);}
	}
	jet3beta2_10_branch = 0;
	if (tree->GetBranch("jet3beta2_10") != 0) {
		jet3beta2_10_branch = tree->GetBranch("jet3beta2_10");
		if (jet3beta2_10_branch) {jet3beta2_10_branch->SetAddress(&jet3beta2_10_);}
	}
	jet4beta2_10_branch = 0;
	if (tree->GetBranch("jet4beta2_10") != 0) {
		jet4beta2_10_branch = tree->GetBranch("jet4beta2_10");
		if (jet4beta2_10_branch) {jet4beta2_10_branch->SetAddress(&jet4beta2_10_);}
	}
	nwzpartons_branch = 0;
	if (tree->GetBranch("nwzpartons") != 0) {
		nwzpartons_branch = tree->GetBranch("nwzpartons");
		if (nwzpartons_branch) {nwzpartons_branch->SetAddress(&nwzpartons_);}
	}
	ngennue_branch = 0;
	if (tree->GetBranch("ngennue") != 0) {
		ngennue_branch = tree->GetBranch("ngennue");
		if (ngennue_branch) {ngennue_branch->SetAddress(&ngennue_);}
	}
	ngennum_branch = 0;
	if (tree->GetBranch("ngennum") != 0) {
		ngennum_branch = tree->GetBranch("ngennum");
		if (ngennum_branch) {ngennum_branch->SetAddress(&ngennum_);}
	}
	ngennut_branch = 0;
	if (tree->GetBranch("ngennut") != 0) {
		ngennut_branch = tree->GetBranch("ngennut");
		if (ngennut_branch) {ngennut_branch->SetAddress(&ngennut_);}
	}
	ngennu_branch = 0;
	if (tree->GetBranch("ngennu") != 0) {
		ngennu_branch = tree->GetBranch("ngennu");
		if (ngennu_branch) {ngennu_branch->SetAddress(&ngennu_);}
	}
	mlb1_branch = 0;
	if (tree->GetBranch("mlb1") != 0) {
		mlb1_branch = tree->GetBranch("mlb1");
		if (mlb1_branch) {mlb1_branch->SetAddress(&mlb1_);}
	}
	mlb2_branch = 0;
	if (tree->GetBranch("mlb2") != 0) {
		mlb2_branch = tree->GetBranch("mlb2");
		if (mlb2_branch) {mlb2_branch->SetAddress(&mlb2_);}
	}
	mlbt1_branch = 0;
	if (tree->GetBranch("mlbt1") != 0) {
		mlbt1_branch = tree->GetBranch("mlbt1");
		if (mlbt1_branch) {mlbt1_branch->SetAddress(&mlbt1_);}
	}
	mlbt2_branch = 0;
	if (tree->GetBranch("mlbt2") != 0) {
		mlbt2_branch = tree->GetBranch("mlbt2");
		if (mlbt2_branch) {mlbt2_branch->SetAddress(&mlbt2_);}
	}
	mlbmin_branch = 0;
	if (tree->GetBranch("mlbmin") != 0) {
		mlbmin_branch = tree->GetBranch("mlbmin");
		if (mlbmin_branch) {mlbmin_branch->SetAddress(&mlbmin_);}
	}
	mlbtmin_branch = 0;
	if (tree->GetBranch("mlbtmin") != 0) {
		mlbtmin_branch = tree->GetBranch("mlbtmin");
		if (mlbtmin_branch) {mlbtmin_branch->SetAddress(&mlbtmin_);}
	}
	mt2_branch = 0;
	if (tree->GetBranch("mt2") != 0) {
		mt2_branch = tree->GetBranch("mt2");
		if (mt2_branch) {mt2_branch->SetAddress(&mt2_);}
	}
	mt2j_branch = 0;
	if (tree->GetBranch("mt2j") != 0) {
		mt2j_branch = tree->GetBranch("mt2j");
		if (mt2j_branch) {mt2j_branch->SetAddress(&mt2j_);}
	}
	el27_branch = 0;
	if (tree->GetBranch("el27") != 0) {
		el27_branch = tree->GetBranch("el27");
		if (el27_branch) {el27_branch->SetAddress(&el27_);}
	}
	mm_branch = 0;
	if (tree->GetBranch("mm") != 0) {
		mm_branch = tree->GetBranch("mm");
		if (mm_branch) {mm_branch->SetAddress(&mm_);}
	}
	mmtk_branch = 0;
	if (tree->GetBranch("mmtk") != 0) {
		mmtk_branch = tree->GetBranch("mmtk");
		if (mmtk_branch) {mmtk_branch->SetAddress(&mmtk_);}
	}
	me_branch = 0;
	if (tree->GetBranch("me") != 0) {
		me_branch = tree->GetBranch("me");
		if (me_branch) {me_branch->SetAddress(&me_);}
	}
	em_branch = 0;
	if (tree->GetBranch("em") != 0) {
		em_branch = tree->GetBranch("em");
		if (em_branch) {em_branch->SetAddress(&em_);}
	}
	mu_branch = 0;
	if (tree->GetBranch("mu") != 0) {
		mu_branch = tree->GetBranch("mu");
		if (mu_branch) {mu_branch->SetAddress(&mu_);}
	}
	mu21_branch = 0;
	if (tree->GetBranch("mu21") != 0) {
		mu21_branch = tree->GetBranch("mu21");
		if (mu21_branch) {mu21_branch->SetAddress(&mu21_);}
	}
	ee_branch = 0;
	if (tree->GetBranch("ee") != 0) {
		ee_branch = tree->GetBranch("ee");
		if (ee_branch) {ee_branch->SetAddress(&ee_);}
	}
	m13_branch = 0;
	if (tree->GetBranch("m13") != 0) {
		m13_branch = tree->GetBranch("m13");
		if (m13_branch) {m13_branch->SetAddress(&m13_);}
	}
	m23_branch = 0;
	if (tree->GetBranch("m23") != 0) {
		m23_branch = tree->GetBranch("m23");
		if (m23_branch) {m23_branch->SetAddress(&m23_);}
	}
	m14_branch = 0;
	if (tree->GetBranch("m14") != 0) {
		m14_branch = tree->GetBranch("m14");
		if (m14_branch) {m14_branch->SetAddress(&m14_);}
	}
	m24_branch = 0;
	if (tree->GetBranch("m24") != 0) {
		m24_branch = tree->GetBranch("m24");
		if (m24_branch) {m24_branch->SetAddress(&m24_);}
	}
	m34_branch = 0;
	if (tree->GetBranch("m34") != 0) {
		m34_branch = tree->GetBranch("m34");
		if (m34_branch) {m34_branch->SetAddress(&m34_);}
	}
	drjetll_branch = 0;
	if (tree->GetBranch("drjetll") != 0) {
		drjetll_branch = tree->GetBranch("drjetll");
		if (drjetll_branch) {drjetll_branch->SetAddress(&drjetll_);}
	}
	jetptll_branch = 0;
	if (tree->GetBranch("jetptll") != 0) {
		jetptll_branch = tree->GetBranch("jetptll");
		if (jetptll_branch) {jetptll_branch->SetAddress(&jetptll_);}
	}
	pfjetidll_branch = 0;
	if (tree->GetBranch("pfjetidll") != 0) {
		pfjetidll_branch = tree->GetBranch("pfjetidll");
		if (pfjetidll_branch) {pfjetidll_branch->SetAddress(&pfjetidll_);}
	}
	drjetlt_branch = 0;
	if (tree->GetBranch("drjetlt") != 0) {
		drjetlt_branch = tree->GetBranch("drjetlt");
		if (drjetlt_branch) {drjetlt_branch->SetAddress(&drjetlt_);}
	}
	jetptlt_branch = 0;
	if (tree->GetBranch("jetptlt") != 0) {
		jetptlt_branch = tree->GetBranch("jetptlt");
		if (jetptlt_branch) {jetptlt_branch->SetAddress(&jetptlt_);}
	}
	pfjetidlt_branch = 0;
	if (tree->GetBranch("pfjetidlt") != 0) {
		pfjetidlt_branch = tree->GetBranch("pfjetidlt");
		if (pfjetidlt_branch) {pfjetidlt_branch->SetAddress(&pfjetidlt_);}
	}
	id1_branch = 0;
	if (tree->GetBranch("id1") != 0) {
		id1_branch = tree->GetBranch("id1");
		if (id1_branch) {id1_branch->SetAddress(&id1_);}
	}
	id2_branch = 0;
	if (tree->GetBranch("id2") != 0) {
		id2_branch = tree->GetBranch("id2");
		if (id2_branch) {id2_branch->SetAddress(&id2_);}
	}
	id3_branch = 0;
	if (tree->GetBranch("id3") != 0) {
		id3_branch = tree->GetBranch("id3");
		if (id3_branch) {id3_branch->SetAddress(&id3_);}
	}
	id4_branch = 0;
	if (tree->GetBranch("id4") != 0) {
		id4_branch = tree->GetBranch("id4");
		if (id4_branch) {id4_branch->SetAddress(&id4_);}
	}
	id5_branch = 0;
	if (tree->GetBranch("id5") != 0) {
		id5_branch = tree->GetBranch("id5");
		if (id5_branch) {id5_branch->SetAddress(&id5_);}
	}
	id6_branch = 0;
	if (tree->GetBranch("id6") != 0) {
		id6_branch = tree->GetBranch("id6");
		if (id6_branch) {id6_branch->SetAddress(&id6_);}
	}
	el1tv_branch = 0;
	if (tree->GetBranch("el1tv") != 0) {
		el1tv_branch = tree->GetBranch("el1tv");
		if (el1tv_branch) {el1tv_branch->SetAddress(&el1tv_);}
	}
	el2tv_branch = 0;
	if (tree->GetBranch("el2tv") != 0) {
		el2tv_branch = tree->GetBranch("el2tv");
		if (el2tv_branch) {el2tv_branch->SetAddress(&el2tv_);}
	}
	el1nomu_branch = 0;
	if (tree->GetBranch("el1nomu") != 0) {
		el1nomu_branch = tree->GetBranch("el1nomu");
		if (el1nomu_branch) {el1nomu_branch->SetAddress(&el1nomu_);}
	}
	el2nomu_branch = 0;
	if (tree->GetBranch("el2nomu") != 0) {
		el2nomu_branch = tree->GetBranch("el2nomu");
		if (el2nomu_branch) {el2nomu_branch->SetAddress(&el2nomu_);}
	}
	el1nomuss_branch = 0;
	if (tree->GetBranch("el1nomuss") != 0) {
		el1nomuss_branch = tree->GetBranch("el1nomuss");
		if (el1nomuss_branch) {el1nomuss_branch->SetAddress(&el1nomuss_);}
	}
	el2nomuss_branch = 0;
	if (tree->GetBranch("el2nomuss") != 0) {
		el2nomuss_branch = tree->GetBranch("el2nomuss");
		if (el2nomuss_branch) {el2nomuss_branch->SetAddress(&el2nomuss_);}
	}
	tche1_branch = 0;
	if (tree->GetBranch("tche1") != 0) {
		tche1_branch = tree->GetBranch("tche1");
		if (tche1_branch) {tche1_branch->SetAddress(&tche1_);}
	}
	tche2_branch = 0;
	if (tree->GetBranch("tche2") != 0) {
		tche2_branch = tree->GetBranch("tche2");
		if (tche2_branch) {tche2_branch->SetAddress(&tche2_);}
	}
	tche3_branch = 0;
	if (tree->GetBranch("tche3") != 0) {
		tche3_branch = tree->GetBranch("tche3");
		if (tche3_branch) {tche3_branch->SetAddress(&tche3_);}
	}
	tche4_branch = 0;
	if (tree->GetBranch("tche4") != 0) {
		tche4_branch = tree->GetBranch("tche4");
		if (tche4_branch) {tche4_branch->SetAddress(&tche4_);}
	}
	tche5_branch = 0;
	if (tree->GetBranch("tche5") != 0) {
		tche5_branch = tree->GetBranch("tche5");
		if (tche5_branch) {tche5_branch->SetAddress(&tche5_);}
	}
	tche6_branch = 0;
	if (tree->GetBranch("tche6") != 0) {
		tche6_branch = tree->GetBranch("tche6");
		if (tche6_branch) {tche6_branch->SetAddress(&tche6_);}
	}
	tche7_branch = 0;
	if (tree->GetBranch("tche7") != 0) {
		tche7_branch = tree->GetBranch("tche7");
		if (tche7_branch) {tche7_branch->SetAddress(&tche7_);}
	}
	tche8_branch = 0;
	if (tree->GetBranch("tche8") != 0) {
		tche8_branch = tree->GetBranch("tche8");
		if (tche8_branch) {tche8_branch->SetAddress(&tche8_);}
	}
	csv1_branch = 0;
	if (tree->GetBranch("csv1") != 0) {
		csv1_branch = tree->GetBranch("csv1");
		if (csv1_branch) {csv1_branch->SetAddress(&csv1_);}
	}
	csv2_branch = 0;
	if (tree->GetBranch("csv2") != 0) {
		csv2_branch = tree->GetBranch("csv2");
		if (csv2_branch) {csv2_branch->SetAddress(&csv2_);}
	}
	csv3_branch = 0;
	if (tree->GetBranch("csv3") != 0) {
		csv3_branch = tree->GetBranch("csv3");
		if (csv3_branch) {csv3_branch->SetAddress(&csv3_);}
	}
	csv4_branch = 0;
	if (tree->GetBranch("csv4") != 0) {
		csv4_branch = tree->GetBranch("csv4");
		if (csv4_branch) {csv4_branch->SetAddress(&csv4_);}
	}
	csv5_branch = 0;
	if (tree->GetBranch("csv5") != 0) {
		csv5_branch = tree->GetBranch("csv5");
		if (csv5_branch) {csv5_branch->SetAddress(&csv5_);}
	}
	csv6_branch = 0;
	if (tree->GetBranch("csv6") != 0) {
		csv6_branch = tree->GetBranch("csv6");
		if (csv6_branch) {csv6_branch->SetAddress(&csv6_);}
	}
	csv7_branch = 0;
	if (tree->GetBranch("csv7") != 0) {
		csv7_branch = tree->GetBranch("csv7");
		if (csv7_branch) {csv7_branch->SetAddress(&csv7_);}
	}
	csv8_branch = 0;
	if (tree->GetBranch("csv8") != 0) {
		csv8_branch = tree->GetBranch("csv8");
		if (csv8_branch) {csv8_branch->SetAddress(&csv8_);}
	}
	jetunc1_branch = 0;
	if (tree->GetBranch("jetunc1") != 0) {
		jetunc1_branch = tree->GetBranch("jetunc1");
		if (jetunc1_branch) {jetunc1_branch->SetAddress(&jetunc1_);}
	}
	jetunc2_branch = 0;
	if (tree->GetBranch("jetunc2") != 0) {
		jetunc2_branch = tree->GetBranch("jetunc2");
		if (jetunc2_branch) {jetunc2_branch->SetAddress(&jetunc2_);}
	}
	jetunc3_branch = 0;
	if (tree->GetBranch("jetunc3") != 0) {
		jetunc3_branch = tree->GetBranch("jetunc3");
		if (jetunc3_branch) {jetunc3_branch->SetAddress(&jetunc3_);}
	}
	jetunc4_branch = 0;
	if (tree->GetBranch("jetunc4") != 0) {
		jetunc4_branch = tree->GetBranch("jetunc4");
		if (jetunc4_branch) {jetunc4_branch->SetAddress(&jetunc4_);}
	}
	jetunc5_branch = 0;
	if (tree->GetBranch("jetunc5") != 0) {
		jetunc5_branch = tree->GetBranch("jetunc5");
		if (jetunc5_branch) {jetunc5_branch->SetAddress(&jetunc5_);}
	}
	jetunc6_branch = 0;
	if (tree->GetBranch("jetunc6") != 0) {
		jetunc6_branch = tree->GetBranch("jetunc6");
		if (jetunc6_branch) {jetunc6_branch->SetAddress(&jetunc6_);}
	}
	jetunc7_branch = 0;
	if (tree->GetBranch("jetunc7") != 0) {
		jetunc7_branch = tree->GetBranch("jetunc7");
		if (jetunc7_branch) {jetunc7_branch->SetAddress(&jetunc7_);}
	}
	jetunc8_branch = 0;
	if (tree->GetBranch("jetunc8") != 0) {
		jetunc8_branch = tree->GetBranch("jetunc8");
		if (jetunc8_branch) {jetunc8_branch->SetAddress(&jetunc8_);}
	}
	jetgenb1_branch = 0;
	if (tree->GetBranch("jetgenb1") != 0) {
		jetgenb1_branch = tree->GetBranch("jetgenb1");
		if (jetgenb1_branch) {jetgenb1_branch->SetAddress(&jetgenb1_);}
	}
	jetgenb2_branch = 0;
	if (tree->GetBranch("jetgenb2") != 0) {
		jetgenb2_branch = tree->GetBranch("jetgenb2");
		if (jetgenb2_branch) {jetgenb2_branch->SetAddress(&jetgenb2_);}
	}
	jetgenb3_branch = 0;
	if (tree->GetBranch("jetgenb3") != 0) {
		jetgenb3_branch = tree->GetBranch("jetgenb3");
		if (jetgenb3_branch) {jetgenb3_branch->SetAddress(&jetgenb3_);}
	}
	jetgenb4_branch = 0;
	if (tree->GetBranch("jetgenb4") != 0) {
		jetgenb4_branch = tree->GetBranch("jetgenb4");
		if (jetgenb4_branch) {jetgenb4_branch->SetAddress(&jetgenb4_);}
	}
	jetgenb5_branch = 0;
	if (tree->GetBranch("jetgenb5") != 0) {
		jetgenb5_branch = tree->GetBranch("jetgenb5");
		if (jetgenb5_branch) {jetgenb5_branch->SetAddress(&jetgenb5_);}
	}
	jetgenb6_branch = 0;
	if (tree->GetBranch("jetgenb6") != 0) {
		jetgenb6_branch = tree->GetBranch("jetgenb6");
		if (jetgenb6_branch) {jetgenb6_branch->SetAddress(&jetgenb6_);}
	}
	jetgenb7_branch = 0;
	if (tree->GetBranch("jetgenb7") != 0) {
		jetgenb7_branch = tree->GetBranch("jetgenb7");
		if (jetgenb7_branch) {jetgenb7_branch->SetAddress(&jetgenb7_);}
	}
	jetgenb8_branch = 0;
	if (tree->GetBranch("jetgenb8") != 0) {
		jetgenb8_branch = tree->GetBranch("jetgenb8");
		if (jetgenb8_branch) {jetgenb8_branch->SetAddress(&jetgenb8_);}
	}
	pfmett1new_branch = 0;
	if (tree->GetBranch("pfmett1new") != 0) {
		pfmett1new_branch = tree->GetBranch("pfmett1new");
		if (pfmett1new_branch) {pfmett1new_branch->SetAddress(&pfmett1new_);}
	}
	pfmett1newphi_branch = 0;
	if (tree->GetBranch("pfmett1newphi") != 0) {
		pfmett1newphi_branch = tree->GetBranch("pfmett1newphi");
		if (pfmett1newphi_branch) {pfmett1newphi_branch->SetAddress(&pfmett1newphi_);}
	}
	minmet_branch = 0;
	if (tree->GetBranch("minmet") != 0) {
		minmet_branch = tree->GetBranch("minmet");
		if (minmet_branch) {minmet_branch->SetAddress(&minmet_);}
	}
	trkmet_branch = 0;
	if (tree->GetBranch("trkmet") != 0) {
		trkmet_branch = tree->GetBranch("trkmet");
		if (trkmet_branch) {trkmet_branch->SetAddress(&trkmet_);}
	}
	trkmetphi_branch = 0;
	if (tree->GetBranch("trkmetphi") != 0) {
		trkmetphi_branch = tree->GetBranch("trkmetphi");
		if (trkmetphi_branch) {trkmetphi_branch->SetAddress(&trkmetphi_);}
	}
	trksumet_branch = 0;
	if (tree->GetBranch("trksumet") != 0) {
		trksumet_branch = tree->GetBranch("trksumet");
		if (trksumet_branch) {trksumet_branch->SetAddress(&trksumet_);}
	}
	pfmet_branch = 0;
	if (tree->GetBranch("pfmet") != 0) {
		pfmet_branch = tree->GetBranch("pfmet");
		if (pfmet_branch) {pfmet_branch->SetAddress(&pfmet_);}
	}
	pfmett1_branch = 0;
	if (tree->GetBranch("pfmett1") != 0) {
		pfmett1_branch = tree->GetBranch("pfmett1");
		if (pfmett1_branch) {pfmett1_branch->SetAddress(&pfmett1_);}
	}
	pfmett1phi_branch = 0;
	if (tree->GetBranch("pfmett1phi") != 0) {
		pfmett1phi_branch = tree->GetBranch("pfmett1phi");
		if (pfmett1phi_branch) {pfmett1phi_branch->SetAddress(&pfmett1phi_);}
	}
	pfmetup_branch = 0;
	if (tree->GetBranch("pfmetup") != 0) {
		pfmetup_branch = tree->GetBranch("pfmetup");
		if (pfmetup_branch) {pfmetup_branch->SetAddress(&pfmetup_);}
	}
	pfmetdn_branch = 0;
	if (tree->GetBranch("pfmetdn") != 0) {
		pfmetdn_branch = tree->GetBranch("pfmetdn");
		if (pfmetdn_branch) {pfmetdn_branch->SetAddress(&pfmetdn_);}
	}
	pfmetphi_branch = 0;
	if (tree->GetBranch("pfmetphi") != 0) {
		pfmetphi_branch = tree->GetBranch("pfmetphi");
		if (pfmetphi_branch) {pfmetphi_branch->SetAddress(&pfmetphi_);}
	}
	pfsumet_branch = 0;
	if (tree->GetBranch("pfsumet") != 0) {
		pfsumet_branch = tree->GetBranch("pfsumet");
		if (pfsumet_branch) {pfsumet_branch->SetAddress(&pfsumet_);}
	}
	met_branch = 0;
	if (tree->GetBranch("met") != 0) {
		met_branch = tree->GetBranch("met");
		if (met_branch) {met_branch->SetAddress(&met_);}
	}
	metphi_branch = 0;
	if (tree->GetBranch("metphi") != 0) {
		metphi_branch = tree->GetBranch("metphi");
		if (metphi_branch) {metphi_branch->SetAddress(&metphi_);}
	}
	sumet_branch = 0;
	if (tree->GetBranch("sumet") != 0) {
		sumet_branch = tree->GetBranch("sumet");
		if (sumet_branch) {sumet_branch->SetAddress(&sumet_);}
	}
	mumet_branch = 0;
	if (tree->GetBranch("mumet") != 0) {
		mumet_branch = tree->GetBranch("mumet");
		if (mumet_branch) {mumet_branch->SetAddress(&mumet_);}
	}
	mumetphi_branch = 0;
	if (tree->GetBranch("mumetphi") != 0) {
		mumetphi_branch = tree->GetBranch("mumetphi");
		if (mumetphi_branch) {mumetphi_branch->SetAddress(&mumetphi_);}
	}
	musumet_branch = 0;
	if (tree->GetBranch("musumet") != 0) {
		musumet_branch = tree->GetBranch("musumet");
		if (musumet_branch) {musumet_branch->SetAddress(&musumet_);}
	}
	mujesmet_branch = 0;
	if (tree->GetBranch("mujesmet") != 0) {
		mujesmet_branch = tree->GetBranch("mujesmet");
		if (mujesmet_branch) {mujesmet_branch->SetAddress(&mujesmet_);}
	}
	mujesmetphi_branch = 0;
	if (tree->GetBranch("mujesmetphi") != 0) {
		mujesmetphi_branch = tree->GetBranch("mujesmetphi");
		if (mujesmetphi_branch) {mujesmetphi_branch->SetAddress(&mujesmetphi_);}
	}
	mujessumet_branch = 0;
	if (tree->GetBranch("mujessumet") != 0) {
		mujessumet_branch = tree->GetBranch("mujessumet");
		if (mujessumet_branch) {mujessumet_branch->SetAddress(&mujessumet_);}
	}
	genmet_branch = 0;
	if (tree->GetBranch("genmet") != 0) {
		genmet_branch = tree->GetBranch("genmet");
		if (genmet_branch) {genmet_branch->SetAddress(&genmet_);}
	}
	genmetcustom_branch = 0;
	if (tree->GetBranch("genmetcustom") != 0) {
		genmetcustom_branch = tree->GetBranch("genmetcustom");
		if (genmetcustom_branch) {genmetcustom_branch->SetAddress(&genmetcustom_);}
	}
	genmetphi_branch = 0;
	if (tree->GetBranch("genmetphi") != 0) {
		genmetphi_branch = tree->GetBranch("genmetphi");
		if (genmetphi_branch) {genmetphi_branch->SetAddress(&genmetphi_);}
	}
	gensumet_branch = 0;
	if (tree->GetBranch("gensumet") != 0) {
		gensumet_branch = tree->GetBranch("gensumet");
		if (gensumet_branch) {gensumet_branch->SetAddress(&gensumet_);}
	}
	dphixmet_branch = 0;
	if (tree->GetBranch("dphixmet") != 0) {
		dphixmet_branch = tree->GetBranch("dphixmet");
		if (dphixmet_branch) {dphixmet_branch->SetAddress(&dphixmet_);}
	}
	metpar_branch = 0;
	if (tree->GetBranch("metpar") != 0) {
		metpar_branch = tree->GetBranch("metpar");
		if (metpar_branch) {metpar_branch->SetAddress(&metpar_);}
	}
	metperp_branch = 0;
	if (tree->GetBranch("metperp") != 0) {
		metperp_branch = tree->GetBranch("metperp");
		if (metperp_branch) {metperp_branch->SetAddress(&metperp_);}
	}
	tcmet_branch = 0;
	if (tree->GetBranch("tcmet") != 0) {
		tcmet_branch = tree->GetBranch("tcmet");
		if (tcmet_branch) {tcmet_branch->SetAddress(&tcmet_);}
	}
	tcmetphi_branch = 0;
	if (tree->GetBranch("tcmetphi") != 0) {
		tcmetphi_branch = tree->GetBranch("tcmetphi");
		if (tcmetphi_branch) {tcmetphi_branch->SetAddress(&tcmetphi_);}
	}
	tcsumet_branch = 0;
	if (tree->GetBranch("tcsumet") != 0) {
		tcsumet_branch = tree->GetBranch("tcsumet");
		if (tcsumet_branch) {tcsumet_branch->SetAddress(&tcsumet_);}
	}
	tcmetNew_branch = 0;
	if (tree->GetBranch("tcmetNew") != 0) {
		tcmetNew_branch = tree->GetBranch("tcmetNew");
		if (tcmetNew_branch) {tcmetNew_branch->SetAddress(&tcmetNew_);}
	}
	tcmetphiNew_branch = 0;
	if (tree->GetBranch("tcmetphiNew") != 0) {
		tcmetphiNew_branch = tree->GetBranch("tcmetphiNew");
		if (tcmetphiNew_branch) {tcmetphiNew_branch->SetAddress(&tcmetphiNew_);}
	}
	tcsumetNew_branch = 0;
	if (tree->GetBranch("tcsumetNew") != 0) {
		tcsumetNew_branch = tree->GetBranch("tcsumetNew");
		if (tcsumetNew_branch) {tcsumetNew_branch->SetAddress(&tcsumetNew_);}
	}
	tcmetcor_branch = 0;
	if (tree->GetBranch("tcmetcor") != 0) {
		tcmetcor_branch = tree->GetBranch("tcmetcor");
		if (tcmetcor_branch) {tcmetcor_branch->SetAddress(&tcmetcor_);}
	}
	pfmetcor_branch = 0;
	if (tree->GetBranch("pfmetcor") != 0) {
		pfmetcor_branch = tree->GetBranch("pfmetcor");
		if (pfmetcor_branch) {pfmetcor_branch->SetAddress(&pfmetcor_);}
	}
	njets_branch = 0;
	if (tree->GetBranch("njets") != 0) {
		njets_branch = tree->GetBranch("njets");
		if (njets_branch) {njets_branch->SetAddress(&njets_);}
	}
	njetsold_branch = 0;
	if (tree->GetBranch("njetsold") != 0) {
		njetsold_branch = tree->GetBranch("njetsold");
		if (njetsold_branch) {njetsold_branch->SetAddress(&njetsold_);}
	}
	njetsres_branch = 0;
	if (tree->GetBranch("njetsres") != 0) {
		njetsres_branch = tree->GetBranch("njetsres");
		if (njetsres_branch) {njetsres_branch->SetAddress(&njetsres_);}
	}
	njetsup_branch = 0;
	if (tree->GetBranch("njetsup") != 0) {
		njetsup_branch = tree->GetBranch("njetsup");
		if (njetsup_branch) {njetsup_branch->SetAddress(&njetsup_);}
	}
	njetsdn_branch = 0;
	if (tree->GetBranch("njetsdn") != 0) {
		njetsdn_branch = tree->GetBranch("njetsdn");
		if (njetsdn_branch) {njetsdn_branch->SetAddress(&njetsdn_);}
	}
	njpt_branch = 0;
	if (tree->GetBranch("njpt") != 0) {
		njpt_branch = tree->GetBranch("njpt");
		if (njpt_branch) {njpt_branch->SetAddress(&njpt_);}
	}
	njets40_branch = 0;
	if (tree->GetBranch("njets40") != 0) {
		njets40_branch = tree->GetBranch("njets40");
		if (njets40_branch) {njets40_branch->SetAddress(&njets40_);}
	}
	njets40up_branch = 0;
	if (tree->GetBranch("njets40up") != 0) {
		njets40up_branch = tree->GetBranch("njets40up");
		if (njets40up_branch) {njets40up_branch->SetAddress(&njets40up_);}
	}
	njets40dn_branch = 0;
	if (tree->GetBranch("njets40dn") != 0) {
		njets40dn_branch = tree->GetBranch("njets40dn");
		if (njets40dn_branch) {njets40dn_branch->SetAddress(&njets40dn_);}
	}
	sumjetpt_branch = 0;
	if (tree->GetBranch("sumjetpt") != 0) {
		sumjetpt_branch = tree->GetBranch("sumjetpt");
		if (sumjetpt_branch) {sumjetpt_branch->SetAddress(&sumjetpt_);}
	}
	sumjetpt10_branch = 0;
	if (tree->GetBranch("sumjetpt10") != 0) {
		sumjetpt10_branch = tree->GetBranch("sumjetpt10");
		if (sumjetpt10_branch) {sumjetpt10_branch->SetAddress(&sumjetpt10_);}
	}
	vecjetpt_branch = 0;
	if (tree->GetBranch("vecjetpt") != 0) {
		vecjetpt_branch = tree->GetBranch("vecjetpt");
		if (vecjetpt_branch) {vecjetpt_branch->SetAddress(&vecjetpt_);}
	}
	nbtags_branch = 0;
	if (tree->GetBranch("nbtags") != 0) {
		nbtags_branch = tree->GetBranch("nbtags");
		if (nbtags_branch) {nbtags_branch->SetAddress(&nbtags_);}
	}
	nbl_branch = 0;
	if (tree->GetBranch("nbl") != 0) {
		nbl_branch = tree->GetBranch("nbl");
		if (nbl_branch) {nbl_branch->SetAddress(&nbl_);}
	}
	nbm_branch = 0;
	if (tree->GetBranch("nbm") != 0) {
		nbm_branch = tree->GetBranch("nbm");
		if (nbm_branch) {nbm_branch->SetAddress(&nbm_);}
	}
	ndphijetmet_branch = 0;
	if (tree->GetBranch("ndphijetmet") != 0) {
		ndphijetmet_branch = tree->GetBranch("ndphijetmet");
		if (ndphijetmet_branch) {ndphijetmet_branch->SetAddress(&ndphijetmet_);}
	}
	maxjetpt_branch = 0;
	if (tree->GetBranch("maxjetpt") != 0) {
		maxjetpt_branch = tree->GetBranch("maxjetpt");
		if (maxjetpt_branch) {maxjetpt_branch->SetAddress(&maxjetpt_);}
	}
	maxjetdphimet_branch = 0;
	if (tree->GetBranch("maxjetdphimet") != 0) {
		maxjetdphimet_branch = tree->GetBranch("maxjetdphimet");
		if (maxjetdphimet_branch) {maxjetdphimet_branch->SetAddress(&maxjetdphimet_);}
	}
	leptype_branch = 0;
	if (tree->GetBranch("leptype") != 0) {
		leptype_branch = tree->GetBranch("leptype");
		if (leptype_branch) {leptype_branch->SetAddress(&leptype_);}
	}
	ecaltype_branch = 0;
	if (tree->GetBranch("ecaltype") != 0) {
		ecaltype_branch = tree->GetBranch("ecaltype");
		if (ecaltype_branch) {ecaltype_branch->SetAddress(&ecaltype_);}
	}
	passz_branch = 0;
	if (tree->GetBranch("passz") != 0) {
		passz_branch = tree->GetBranch("passz");
		if (passz_branch) {passz_branch->SetAddress(&passz_);}
	}
	pdgid_branch = 0;
	if (tree->GetBranch("pdgid") != 0) {
		pdgid_branch = tree->GetBranch("pdgid");
		if (pdgid_branch) {pdgid_branch->SetAddress(&pdgid_);}
	}
	dpdm_branch = 0;
	if (tree->GetBranch("dpdm") != 0) {
		dpdm_branch = tree->GetBranch("dpdm");
		if (dpdm_branch) {dpdm_branch->SetAddress(&dpdm_);}
	}
	meterror_branch = 0;
	if (tree->GetBranch("meterror") != 0) {
		meterror_branch = tree->GetBranch("meterror");
		if (meterror_branch) {meterror_branch->SetAddress(&meterror_);}
	}
	meterrorc_branch = 0;
	if (tree->GetBranch("meterrorc") != 0) {
		meterrorc_branch = tree->GetBranch("meterrorc");
		if (meterrorc_branch) {meterrorc_branch->SetAddress(&meterrorc_);}
	}
	ptll_branch = 0;
	if (tree->GetBranch("ptll") != 0) {
		ptll_branch = tree->GetBranch("ptll");
		if (ptll_branch) {ptll_branch->SetAddress(&ptll_);}
	}
	ptlt_branch = 0;
	if (tree->GetBranch("ptlt") != 0) {
		ptlt_branch = tree->GetBranch("ptlt");
		if (ptlt_branch) {ptlt_branch->SetAddress(&ptlt_);}
	}
	pterrll_branch = 0;
	if (tree->GetBranch("pterrll") != 0) {
		pterrll_branch = tree->GetBranch("pterrll");
		if (pterrll_branch) {pterrll_branch->SetAddress(&pterrll_);}
	}
	pterrlt_branch = 0;
	if (tree->GetBranch("pterrlt") != 0) {
		pterrlt_branch = tree->GetBranch("pterrlt");
		if (pterrlt_branch) {pterrlt_branch->SetAddress(&pterrlt_);}
	}
	ptlltrk_branch = 0;
	if (tree->GetBranch("ptlltrk") != 0) {
		ptlltrk_branch = tree->GetBranch("ptlltrk");
		if (ptlltrk_branch) {ptlltrk_branch->SetAddress(&ptlltrk_);}
	}
	ptlttrk_branch = 0;
	if (tree->GetBranch("ptlttrk") != 0) {
		ptlttrk_branch = tree->GetBranch("ptlttrk");
		if (ptlttrk_branch) {ptlttrk_branch->SetAddress(&ptlttrk_);}
	}
	ptllgfit_branch = 0;
	if (tree->GetBranch("ptllgfit") != 0) {
		ptllgfit_branch = tree->GetBranch("ptllgfit");
		if (ptllgfit_branch) {ptllgfit_branch->SetAddress(&ptllgfit_);}
	}
	ptltgfit_branch = 0;
	if (tree->GetBranch("ptltgfit") != 0) {
		ptltgfit_branch = tree->GetBranch("ptltgfit");
		if (ptltgfit_branch) {ptltgfit_branch->SetAddress(&ptltgfit_);}
	}
	ptllpf_branch = 0;
	if (tree->GetBranch("ptllpf") != 0) {
		ptllpf_branch = tree->GetBranch("ptllpf");
		if (ptllpf_branch) {ptllpf_branch->SetAddress(&ptllpf_);}
	}
	ptltpf_branch = 0;
	if (tree->GetBranch("ptltpf") != 0) {
		ptltpf_branch = tree->GetBranch("ptltpf");
		if (ptltpf_branch) {ptltpf_branch->SetAddress(&ptltpf_);}
	}
	ptllgen_branch = 0;
	if (tree->GetBranch("ptllgen") != 0) {
		ptllgen_branch = tree->GetBranch("ptllgen");
		if (ptllgen_branch) {ptllgen_branch->SetAddress(&ptllgen_);}
	}
	ptltgen_branch = 0;
	if (tree->GetBranch("ptltgen") != 0) {
		ptltgen_branch = tree->GetBranch("ptltgen");
		if (ptltgen_branch) {ptltgen_branch->SetAddress(&ptltgen_);}
	}
	npfmuons_branch = 0;
	if (tree->GetBranch("npfmuons") != 0) {
		npfmuons_branch = tree->GetBranch("npfmuons");
		if (npfmuons_branch) {npfmuons_branch->SetAddress(&npfmuons_);}
	}
	nmatchedpfmuons_branch = 0;
	if (tree->GetBranch("nmatchedpfmuons") != 0) {
		nmatchedpfmuons_branch = tree->GetBranch("nmatchedpfmuons");
		if (nmatchedpfmuons_branch) {nmatchedpfmuons_branch->SetAddress(&nmatchedpfmuons_);}
	}
	idll_branch = 0;
	if (tree->GetBranch("idll") != 0) {
		idll_branch = tree->GetBranch("idll");
		if (idll_branch) {idll_branch->SetAddress(&idll_);}
	}
	idlt_branch = 0;
	if (tree->GetBranch("idlt") != 0) {
		idlt_branch = tree->GetBranch("idlt");
		if (idlt_branch) {idlt_branch->SetAddress(&idlt_);}
	}
	etall_branch = 0;
	if (tree->GetBranch("etall") != 0) {
		etall_branch = tree->GetBranch("etall");
		if (etall_branch) {etall_branch->SetAddress(&etall_);}
	}
	etalt_branch = 0;
	if (tree->GetBranch("etalt") != 0) {
		etalt_branch = tree->GetBranch("etalt");
		if (etalt_branch) {etalt_branch->SetAddress(&etalt_);}
	}
	phill_branch = 0;
	if (tree->GetBranch("phill") != 0) {
		phill_branch = tree->GetBranch("phill");
		if (phill_branch) {phill_branch->SetAddress(&phill_);}
	}
	philt_branch = 0;
	if (tree->GetBranch("philt") != 0) {
		philt_branch = tree->GetBranch("philt");
		if (philt_branch) {philt_branch->SetAddress(&philt_);}
	}
	dilmass_branch = 0;
	if (tree->GetBranch("dilmass") != 0) {
		dilmass_branch = tree->GetBranch("dilmass");
		if (dilmass_branch) {dilmass_branch->SetAddress(&dilmass_);}
	}
	dilmasspf_branch = 0;
	if (tree->GetBranch("dilmasspf") != 0) {
		dilmasspf_branch = tree->GetBranch("dilmasspf");
		if (dilmasspf_branch) {dilmasspf_branch->SetAddress(&dilmasspf_);}
	}
	dilmasscor_branch = 0;
	if (tree->GetBranch("dilmasscor") != 0) {
		dilmasscor_branch = tree->GetBranch("dilmasscor");
		if (dilmasscor_branch) {dilmasscor_branch->SetAddress(&dilmasscor_);}
	}
	dilpt_branch = 0;
	if (tree->GetBranch("dilpt") != 0) {
		dilpt_branch = tree->GetBranch("dilpt");
		if (dilpt_branch) {dilpt_branch->SetAddress(&dilpt_);}
	}
	flagll_branch = 0;
	if (tree->GetBranch("flagll") != 0) {
		flagll_branch = tree->GetBranch("flagll");
		if (flagll_branch) {flagll_branch->SetAddress(&flagll_);}
	}
	flaglt_branch = 0;
	if (tree->GetBranch("flaglt") != 0) {
		flaglt_branch = tree->GetBranch("flaglt");
		if (flaglt_branch) {flaglt_branch->SetAddress(&flaglt_);}
	}
	isdata_branch = 0;
	if (tree->GetBranch("isdata") != 0) {
		isdata_branch = tree->GetBranch("isdata");
		if (isdata_branch) {isdata_branch->SetAddress(&isdata_);}
	}
	lljj_branch = 0;
	if (tree->GetBranch("lljj") != 0) {
		lljj_branch = tree->GetBranch("lljj");
		if (lljj_branch) {lljj_branch->SetAddress(&lljj_);}
	}
	jj_branch = 0;
	if (tree->GetBranch("jj") != 0) {
		jj_branch = tree->GetBranch("jj");
		if (jj_branch) {jj_branch->SetAddress(&jj_);}
	}
	l1jj_branch = 0;
	if (tree->GetBranch("l1jj") != 0) {
		l1jj_branch = tree->GetBranch("l1jj");
		if (l1jj_branch) {l1jj_branch->SetAddress(&l1jj_);}
	}
	l2jj_branch = 0;
	if (tree->GetBranch("l2jj") != 0) {
		l2jj_branch = tree->GetBranch("l2jj");
		if (l2jj_branch) {l2jj_branch->SetAddress(&l2jj_);}
	}
	j1ll_branch = 0;
	if (tree->GetBranch("j1ll") != 0) {
		j1ll_branch = tree->GetBranch("j1ll");
		if (j1ll_branch) {j1ll_branch->SetAddress(&j1ll_);}
	}
	j2ll_branch = 0;
	if (tree->GetBranch("j2ll") != 0) {
		j2ll_branch = tree->GetBranch("j2ll");
		if (j2ll_branch) {j2ll_branch->SetAddress(&j2ll_);}
	}
	l1j1_branch = 0;
	if (tree->GetBranch("l1j1") != 0) {
		l1j1_branch = tree->GetBranch("l1j1");
		if (l1j1_branch) {l1j1_branch->SetAddress(&l1j1_);}
	}
	l2j2_branch = 0;
	if (tree->GetBranch("l2j2") != 0) {
		l2j2_branch = tree->GetBranch("l2j2");
		if (l2j2_branch) {l2j2_branch->SetAddress(&l2j2_);}
	}
	l1j2_branch = 0;
	if (tree->GetBranch("l1j2") != 0) {
		l1j2_branch = tree->GetBranch("l1j2");
		if (l1j2_branch) {l1j2_branch->SetAddress(&l1j2_);}
	}
	l2j1_branch = 0;
	if (tree->GetBranch("l2j1") != 0) {
		l2j1_branch = tree->GetBranch("l2j1");
		if (l2j1_branch) {l2j1_branch->SetAddress(&l2j1_);}
	}
	pfTau_leadPtcandID_branch = 0;
	if (tree->GetBranch("pfTau_leadPtcandID") != 0) {
		pfTau_leadPtcandID_branch = tree->GetBranch("pfTau_leadPtcandID");
		if (pfTau_leadPtcandID_branch) {pfTau_leadPtcandID_branch->SetAddress(&pfTau_leadPtcandID_);}
	}
	jet1mcfa_branch = 0;
	if (tree->GetBranch("jet1mcfa") != 0) {
		jet1mcfa_branch = tree->GetBranch("jet1mcfa");
		if (jet1mcfa_branch) {jet1mcfa_branch->SetAddress(&jet1mcfa_);}
	}
	jet2mcfa_branch = 0;
	if (tree->GetBranch("jet2mcfa") != 0) {
		jet2mcfa_branch = tree->GetBranch("jet2mcfa");
		if (jet2mcfa_branch) {jet2mcfa_branch->SetAddress(&jet2mcfa_);}
	}
	jet3mcfa_branch = 0;
	if (tree->GetBranch("jet3mcfa") != 0) {
		jet3mcfa_branch = tree->GetBranch("jet3mcfa");
		if (jet3mcfa_branch) {jet3mcfa_branch->SetAddress(&jet3mcfa_);}
	}
	jet4mcfa_branch = 0;
	if (tree->GetBranch("jet4mcfa") != 0) {
		jet4mcfa_branch = tree->GetBranch("jet4mcfa");
		if (jet4mcfa_branch) {jet4mcfa_branch->SetAddress(&jet4mcfa_);}
	}
	jet1mcfp_branch = 0;
	if (tree->GetBranch("jet1mcfp") != 0) {
		jet1mcfp_branch = tree->GetBranch("jet1mcfp");
		if (jet1mcfp_branch) {jet1mcfp_branch->SetAddress(&jet1mcfp_);}
	}
	jet2mcfp_branch = 0;
	if (tree->GetBranch("jet2mcfp") != 0) {
		jet2mcfp_branch = tree->GetBranch("jet2mcfp");
		if (jet2mcfp_branch) {jet2mcfp_branch->SetAddress(&jet2mcfp_);}
	}
	jet3mcfp_branch = 0;
	if (tree->GetBranch("jet3mcfp") != 0) {
		jet3mcfp_branch = tree->GetBranch("jet3mcfp");
		if (jet3mcfp_branch) {jet3mcfp_branch->SetAddress(&jet3mcfp_);}
	}
	jet4mcfp_branch = 0;
	if (tree->GetBranch("jet4mcfp") != 0) {
		jet4mcfp_branch = tree->GetBranch("jet4mcfp");
		if (jet4mcfp_branch) {jet4mcfp_branch->SetAddress(&jet4mcfp_);}
	}
	csc_branch = 0;
	if (tree->GetBranch("csc") != 0) {
		csc_branch = tree->GetBranch("csc");
		if (csc_branch) {csc_branch->SetAddress(&csc_);}
	}
	hbhe_branch = 0;
	if (tree->GetBranch("hbhe") != 0) {
		hbhe_branch = tree->GetBranch("hbhe");
		if (hbhe_branch) {hbhe_branch->SetAddress(&hbhe_);}
	}
	hbhenew_branch = 0;
	if (tree->GetBranch("hbhenew") != 0) {
		hbhenew_branch = tree->GetBranch("hbhenew");
		if (hbhenew_branch) {hbhenew_branch->SetAddress(&hbhenew_);}
	}
	hcallaser_branch = 0;
	if (tree->GetBranch("hcallaser") != 0) {
		hcallaser_branch = tree->GetBranch("hcallaser");
		if (hcallaser_branch) {hcallaser_branch->SetAddress(&hcallaser_);}
	}
	ecallaser_branch = 0;
	if (tree->GetBranch("ecallaser") != 0) {
		ecallaser_branch = tree->GetBranch("ecallaser");
		if (ecallaser_branch) {ecallaser_branch->SetAddress(&ecallaser_);}
	}
	ecaltp_branch = 0;
	if (tree->GetBranch("ecaltp") != 0) {
		ecaltp_branch = tree->GetBranch("ecaltp");
		if (ecaltp_branch) {ecaltp_branch->SetAddress(&ecaltp_);}
	}
	trkfail_branch = 0;
	if (tree->GetBranch("trkfail") != 0) {
		trkfail_branch = tree->GetBranch("trkfail");
		if (trkfail_branch) {trkfail_branch->SetAddress(&trkfail_);}
	}
	eebadsc_branch = 0;
	if (tree->GetBranch("eebadsc") != 0) {
		eebadsc_branch = tree->GetBranch("eebadsc");
		if (eebadsc_branch) {eebadsc_branch->SetAddress(&eebadsc_);}
	}
	drll_branch = 0;
	if (tree->GetBranch("drll") != 0) {
		drll_branch = tree->GetBranch("drll");
		if (drll_branch) {drll_branch->SetAddress(&drll_);}
	}
	dphill_branch = 0;
	if (tree->GetBranch("dphill") != 0) {
		dphill_branch = tree->GetBranch("dphill");
		if (dphill_branch) {dphill_branch->SetAddress(&dphill_);}
	}
	drblmin_branch = 0;
	if (tree->GetBranch("drblmin") != 0) {
		drblmin_branch = tree->GetBranch("drblmin");
		if (drblmin_branch) {drblmin_branch->SetAddress(&drblmin_);}
	}
	st30_branch = 0;
	if (tree->GetBranch("st30") != 0) {
		st30_branch = tree->GetBranch("st30");
		if (st30_branch) {st30_branch->SetAddress(&st30_);}
	}
	st40_branch = 0;
	if (tree->GetBranch("st40") != 0) {
		st40_branch = tree->GetBranch("st40");
		if (st40_branch) {st40_branch->SetAddress(&st40_);}
	}
	m1_branch = 0;
	if (tree->GetBranch("m1") != 0) {
		m1_branch = tree->GetBranch("m1");
		if (m1_branch) {m1_branch->SetAddress(&m1_);}
	}
	m2_branch = 0;
	if (tree->GetBranch("m2") != 0) {
		m2_branch = tree->GetBranch("m2");
		if (m2_branch) {m2_branch->SetAddress(&m2_);}
	}
	m3_branch = 0;
	if (tree->GetBranch("m3") != 0) {
		m3_branch = tree->GetBranch("m3");
		if (m3_branch) {m3_branch->SetAddress(&m3_);}
	}
	zveto_branch = 0;
	if (tree->GetBranch("zveto") != 0) {
		zveto_branch = tree->GetBranch("zveto");
		if (zveto_branch) {zveto_branch->SetAddress(&zveto_);}
	}
	nextramu_branch = 0;
	if (tree->GetBranch("nextramu") != 0) {
		nextramu_branch = tree->GetBranch("nextramu");
		if (nextramu_branch) {nextramu_branch->SetAddress(&nextramu_);}
	}
	nhyp_branch = 0;
	if (tree->GetBranch("nhyp") != 0) {
		nhyp_branch = tree->GetBranch("nhyp");
		if (nhyp_branch) {nhyp_branch->SetAddress(&nhyp_);}
	}
	nmuss_branch = 0;
	if (tree->GetBranch("nmuss") != 0) {
		nmuss_branch = tree->GetBranch("nmuss");
		if (nmuss_branch) {nmuss_branch->SetAddress(&nmuss_);}
	}
	extraz_branch = 0;
	if (tree->GetBranch("extraz") != 0) {
		extraz_branch = tree->GetBranch("extraz");
		if (extraz_branch) {extraz_branch->SetAddress(&extraz_);}
	}
	extrag_branch = 0;
	if (tree->GetBranch("extrag") != 0) {
		extrag_branch = tree->GetBranch("extrag");
		if (extrag_branch) {extrag_branch->SetAddress(&extrag_);}
	}
	npujets_branch = 0;
	if (tree->GetBranch("npujets") != 0) {
		npujets_branch = tree->GetBranch("npujets");
		if (npujets_branch) {npujets_branch->SetAddress(&npujets_);}
	}
  tree->SetMakeClass(0);
}
void GetEntry(unsigned int idx) 
	// this only marks branches as not loaded, saving a lot of time
	{
		index = idx;
		rho_isLoaded = false;
		vtxidx_isLoaded = false;
		zdilep_isLoaded = false;
		run_isLoaded = false;
		xsec_isLoaded = false;
		ssmu1_isLoaded = false;
		ssmu2_isLoaded = false;
		eldup_isLoaded = false;
		btagweight_isLoaded = false;
		btagweightup_isLoaded = false;
		ht30_isLoaded = false;
		ht40_isLoaded = false;
		ht40up_isLoaded = false;
		ht40dn_isLoaded = false;
		nbcsvl_isLoaded = false;
		nbcsvlm_isLoaded = false;
		nbcsvm_isLoaded = false;
		nbcsvt_isLoaded = false;
		nbvz_isLoaded = false;
		nbvzres_isLoaded = false;
		jzb_isLoaded = false;
		mjj_isLoaded = false;
		mbb_isLoaded = false;
		mjjup_isLoaded = false;
		mjjdn_isLoaded = false;
		nlep_isLoaded = false;
		nel_isLoaded = false;
		nmu_isLoaded = false;
		st_isLoaded = false;
		goodrun_isLoaded = false;
		lumi_isLoaded = false;
		event_isLoaded = false;
		failjetid_isLoaded = false;
		unc_isLoaded = false;
		uncx_isLoaded = false;
		uncy_isLoaded = false;
		maxemf_isLoaded = false;
		trgeff_isLoaded = false;
		nvtx_isLoaded = false;
		weight_isLoaded = false;
		vtxweight_isLoaded = false;
		pthat_isLoaded = false;
		mllgen_isLoaded = false;
		qscale_isLoaded = false;
		mg_isLoaded = false;
		ml_isLoaded = false;
		x_isLoaded = false;
		ptgen1_isLoaded = false;
		ptgen2_isLoaded = false;
		eff0_isLoaded = false;
		eff100_isLoaded = false;
		eff200_isLoaded = false;
		eff300_isLoaded = false;
		eveto1_isLoaded = false;
		hveto1_isLoaded = false;
		eveto2_isLoaded = false;
		hveto2_isLoaded = false;
		ngenels_isLoaded = false;
		ngenmus_isLoaded = false;
		ngentaus_isLoaded = false;
		ngenleps_isLoaded = false;
		jet1flav_isLoaded = false;
		jet2flav_isLoaded = false;
		jet3flav_isLoaded = false;
		jet4flav_isLoaded = false;
		ngenbs_isLoaded = false;
		jet1drgen_isLoaded = false;
		jet2drgen_isLoaded = false;
		jet3drgen_isLoaded = false;
		jet4drgen_isLoaded = false;
		jet1beta1_01_isLoaded = false;
		jet2beta1_01_isLoaded = false;
		jet3beta1_01_isLoaded = false;
		jet4beta1_01_isLoaded = false;
		jet1beta2_01_isLoaded = false;
		jet2beta2_01_isLoaded = false;
		jet3beta2_01_isLoaded = false;
		jet4beta2_01_isLoaded = false;
		jet1beta1_05_isLoaded = false;
		jet2beta1_05_isLoaded = false;
		jet3beta1_05_isLoaded = false;
		jet4beta1_05_isLoaded = false;
		jet1beta2_05_isLoaded = false;
		jet2beta2_05_isLoaded = false;
		jet3beta2_05_isLoaded = false;
		jet4beta2_05_isLoaded = false;
		jet1beta1_10_isLoaded = false;
		jet2beta1_10_isLoaded = false;
		jet3beta1_10_isLoaded = false;
		jet4beta1_10_isLoaded = false;
		jet1beta2_10_isLoaded = false;
		jet2beta2_10_isLoaded = false;
		jet3beta2_10_isLoaded = false;
		jet4beta2_10_isLoaded = false;
		nwzpartons_isLoaded = false;
		ngennue_isLoaded = false;
		ngennum_isLoaded = false;
		ngennut_isLoaded = false;
		ngennu_isLoaded = false;
		mlb1_isLoaded = false;
		mlb2_isLoaded = false;
		mlbt1_isLoaded = false;
		mlbt2_isLoaded = false;
		mlbmin_isLoaded = false;
		mlbtmin_isLoaded = false;
		mt2_isLoaded = false;
		mt2j_isLoaded = false;
		el27_isLoaded = false;
		mm_isLoaded = false;
		mmtk_isLoaded = false;
		me_isLoaded = false;
		em_isLoaded = false;
		mu_isLoaded = false;
		mu21_isLoaded = false;
		ee_isLoaded = false;
		m13_isLoaded = false;
		m23_isLoaded = false;
		m14_isLoaded = false;
		m24_isLoaded = false;
		m34_isLoaded = false;
		drjetll_isLoaded = false;
		jetptll_isLoaded = false;
		pfjetidll_isLoaded = false;
		drjetlt_isLoaded = false;
		jetptlt_isLoaded = false;
		pfjetidlt_isLoaded = false;
		id1_isLoaded = false;
		id2_isLoaded = false;
		id3_isLoaded = false;
		id4_isLoaded = false;
		id5_isLoaded = false;
		id6_isLoaded = false;
		el1tv_isLoaded = false;
		el2tv_isLoaded = false;
		el1nomu_isLoaded = false;
		el2nomu_isLoaded = false;
		el1nomuss_isLoaded = false;
		el2nomuss_isLoaded = false;
		tche1_isLoaded = false;
		tche2_isLoaded = false;
		tche3_isLoaded = false;
		tche4_isLoaded = false;
		tche5_isLoaded = false;
		tche6_isLoaded = false;
		tche7_isLoaded = false;
		tche8_isLoaded = false;
		csv1_isLoaded = false;
		csv2_isLoaded = false;
		csv3_isLoaded = false;
		csv4_isLoaded = false;
		csv5_isLoaded = false;
		csv6_isLoaded = false;
		csv7_isLoaded = false;
		csv8_isLoaded = false;
		jetunc1_isLoaded = false;
		jetunc2_isLoaded = false;
		jetunc3_isLoaded = false;
		jetunc4_isLoaded = false;
		jetunc5_isLoaded = false;
		jetunc6_isLoaded = false;
		jetunc7_isLoaded = false;
		jetunc8_isLoaded = false;
		jetgenb1_isLoaded = false;
		jetgenb2_isLoaded = false;
		jetgenb3_isLoaded = false;
		jetgenb4_isLoaded = false;
		jetgenb5_isLoaded = false;
		jetgenb6_isLoaded = false;
		jetgenb7_isLoaded = false;
		jetgenb8_isLoaded = false;
		pfmett1new_isLoaded = false;
		pfmett1newphi_isLoaded = false;
		minmet_isLoaded = false;
		trkmet_isLoaded = false;
		trkmetphi_isLoaded = false;
		trksumet_isLoaded = false;
		pfmet_isLoaded = false;
		pfmett1_isLoaded = false;
		pfmett1phi_isLoaded = false;
		pfmetup_isLoaded = false;
		pfmetdn_isLoaded = false;
		pfmetphi_isLoaded = false;
		pfsumet_isLoaded = false;
		met_isLoaded = false;
		metphi_isLoaded = false;
		sumet_isLoaded = false;
		mumet_isLoaded = false;
		mumetphi_isLoaded = false;
		musumet_isLoaded = false;
		mujesmet_isLoaded = false;
		mujesmetphi_isLoaded = false;
		mujessumet_isLoaded = false;
		genmet_isLoaded = false;
		genmetcustom_isLoaded = false;
		genmetphi_isLoaded = false;
		gensumet_isLoaded = false;
		dphixmet_isLoaded = false;
		metpar_isLoaded = false;
		metperp_isLoaded = false;
		tcmet_isLoaded = false;
		tcmetphi_isLoaded = false;
		tcsumet_isLoaded = false;
		tcmetNew_isLoaded = false;
		tcmetphiNew_isLoaded = false;
		tcsumetNew_isLoaded = false;
		tcmetcor_isLoaded = false;
		pfmetcor_isLoaded = false;
		njets_isLoaded = false;
		njetsold_isLoaded = false;
		njetsres_isLoaded = false;
		njetsup_isLoaded = false;
		njetsdn_isLoaded = false;
		njpt_isLoaded = false;
		njets40_isLoaded = false;
		njets40up_isLoaded = false;
		njets40dn_isLoaded = false;
		sumjetpt_isLoaded = false;
		sumjetpt10_isLoaded = false;
		vecjetpt_isLoaded = false;
		nbtags_isLoaded = false;
		nbl_isLoaded = false;
		nbm_isLoaded = false;
		ndphijetmet_isLoaded = false;
		maxjetpt_isLoaded = false;
		maxjetdphimet_isLoaded = false;
		leptype_isLoaded = false;
		ecaltype_isLoaded = false;
		passz_isLoaded = false;
		pdgid_isLoaded = false;
		dpdm_isLoaded = false;
		meterror_isLoaded = false;
		meterrorc_isLoaded = false;
		ptll_isLoaded = false;
		ptlt_isLoaded = false;
		pterrll_isLoaded = false;
		pterrlt_isLoaded = false;
		ptlltrk_isLoaded = false;
		ptlttrk_isLoaded = false;
		ptllgfit_isLoaded = false;
		ptltgfit_isLoaded = false;
		ptllpf_isLoaded = false;
		ptltpf_isLoaded = false;
		ptllgen_isLoaded = false;
		ptltgen_isLoaded = false;
		npfmuons_isLoaded = false;
		nmatchedpfmuons_isLoaded = false;
		idll_isLoaded = false;
		idlt_isLoaded = false;
		etall_isLoaded = false;
		etalt_isLoaded = false;
		phill_isLoaded = false;
		philt_isLoaded = false;
		dilmass_isLoaded = false;
		dilmasspf_isLoaded = false;
		dilmasscor_isLoaded = false;
		dilpt_isLoaded = false;
		flagll_isLoaded = false;
		flaglt_isLoaded = false;
		isdata_isLoaded = false;
		lljj_isLoaded = false;
		jj_isLoaded = false;
		l1jj_isLoaded = false;
		l2jj_isLoaded = false;
		j1ll_isLoaded = false;
		j2ll_isLoaded = false;
		l1j1_isLoaded = false;
		l2j2_isLoaded = false;
		l1j2_isLoaded = false;
		l2j1_isLoaded = false;
		dilep_isLoaded = false;
		dileppf_isLoaded = false;
		w_isLoaded = false;
		lep1_isLoaded = false;
		lep2_isLoaded = false;
		lep3_isLoaded = false;
		lep4_isLoaded = false;
		lep5_isLoaded = false;
		lep6_isLoaded = false;
		pflep1_isLoaded = false;
		pflep2_isLoaded = false;
		genlep1_isLoaded = false;
		genlep2_isLoaded = false;
		gennu1_isLoaded = false;
		gennu2_isLoaded = false;
		pfTau_leadPtcand_isLoaded = false;
		pfTau_leadPtcandID_isLoaded = false;
		jet1_isLoaded = false;
		jet2_isLoaded = false;
		jet3_isLoaded = false;
		jet4_isLoaded = false;
		jet5_isLoaded = false;
		jet6_isLoaded = false;
		jet7_isLoaded = false;
		jet8_isLoaded = false;
		subthreshjetup1_isLoaded = false;
		subthreshjetup2_isLoaded = false;
		jet1mcfa_isLoaded = false;
		jet2mcfa_isLoaded = false;
		jet3mcfa_isLoaded = false;
		jet4mcfa_isLoaded = false;
		jet1mcfp_isLoaded = false;
		jet2mcfp_isLoaded = false;
		jet3mcfp_isLoaded = false;
		jet4mcfp_isLoaded = false;
		bjet1_isLoaded = false;
		bjet2_isLoaded = false;
		bjet3_isLoaded = false;
		bjet4_isLoaded = false;
		genbquark1_isLoaded = false;
		genbquark2_isLoaded = false;
		genbquark3_isLoaded = false;
		genbquark4_isLoaded = false;
		genz_isLoaded = false;
		gent_isLoaded = false;
		gentbar_isLoaded = false;
		genttbar_isLoaded = false;
		csc_isLoaded = false;
		hbhe_isLoaded = false;
		hbhenew_isLoaded = false;
		hcallaser_isLoaded = false;
		ecallaser_isLoaded = false;
		ecaltp_isLoaded = false;
		trkfail_isLoaded = false;
		eebadsc_isLoaded = false;
		drll_isLoaded = false;
		dphill_isLoaded = false;
		drblmin_isLoaded = false;
		st30_isLoaded = false;
		st40_isLoaded = false;
		m1_isLoaded = false;
		m2_isLoaded = false;
		m3_isLoaded = false;
		zveto_isLoaded = false;
		nextramu_isLoaded = false;
		nhyp_isLoaded = false;
		nmuss_isLoaded = false;
		extraz_isLoaded = false;
		extrag_isLoaded = false;
		pujets_isLoaded = false;
		npujets_isLoaded = false;
	}

void LoadAllBranches() 
	// load all branches
{
	if (rho_branch != 0) rho();
	if (vtxidx_branch != 0) vtxidx();
	if (zdilep_branch != 0) zdilep();
	if (run_branch != 0) run();
	if (xsec_branch != 0) xsec();
	if (ssmu1_branch != 0) ssmu1();
	if (ssmu2_branch != 0) ssmu2();
	if (eldup_branch != 0) eldup();
	if (btagweight_branch != 0) btagweight();
	if (btagweightup_branch != 0) btagweightup();
	if (ht30_branch != 0) ht30();
	if (ht40_branch != 0) ht40();
	if (ht40up_branch != 0) ht40up();
	if (ht40dn_branch != 0) ht40dn();
	if (nbcsvl_branch != 0) nbcsvl();
	if (nbcsvlm_branch != 0) nbcsvlm();
	if (nbcsvm_branch != 0) nbcsvm();
	if (nbcsvt_branch != 0) nbcsvt();
	if (nbvz_branch != 0) nbvz();
	if (nbvzres_branch != 0) nbvzres();
	if (jzb_branch != 0) jzb();
	if (mjj_branch != 0) mjj();
	if (mbb_branch != 0) mbb();
	if (mjjup_branch != 0) mjjup();
	if (mjjdn_branch != 0) mjjdn();
	if (nlep_branch != 0) nlep();
	if (nel_branch != 0) nel();
	if (nmu_branch != 0) nmu();
	if (st_branch != 0) st();
	if (goodrun_branch != 0) goodrun();
	if (lumi_branch != 0) lumi();
	if (event_branch != 0) event();
	if (failjetid_branch != 0) failjetid();
	if (unc_branch != 0) unc();
	if (uncx_branch != 0) uncx();
	if (uncy_branch != 0) uncy();
	if (maxemf_branch != 0) maxemf();
	if (trgeff_branch != 0) trgeff();
	if (nvtx_branch != 0) nvtx();
	if (weight_branch != 0) weight();
	if (vtxweight_branch != 0) vtxweight();
	if (pthat_branch != 0) pthat();
	if (mllgen_branch != 0) mllgen();
	if (qscale_branch != 0) qscale();
	if (mg_branch != 0) mg();
	if (ml_branch != 0) ml();
	if (x_branch != 0) x();
	if (ptgen1_branch != 0) ptgen1();
	if (ptgen2_branch != 0) ptgen2();
	if (eff0_branch != 0) eff0();
	if (eff100_branch != 0) eff100();
	if (eff200_branch != 0) eff200();
	if (eff300_branch != 0) eff300();
	if (eveto1_branch != 0) eveto1();
	if (hveto1_branch != 0) hveto1();
	if (eveto2_branch != 0) eveto2();
	if (hveto2_branch != 0) hveto2();
	if (ngenels_branch != 0) ngenels();
	if (ngenmus_branch != 0) ngenmus();
	if (ngentaus_branch != 0) ngentaus();
	if (ngenleps_branch != 0) ngenleps();
	if (jet1flav_branch != 0) jet1flav();
	if (jet2flav_branch != 0) jet2flav();
	if (jet3flav_branch != 0) jet3flav();
	if (jet4flav_branch != 0) jet4flav();
	if (ngenbs_branch != 0) ngenbs();
	if (jet1drgen_branch != 0) jet1drgen();
	if (jet2drgen_branch != 0) jet2drgen();
	if (jet3drgen_branch != 0) jet3drgen();
	if (jet4drgen_branch != 0) jet4drgen();
	if (jet1beta1_01_branch != 0) jet1beta1_01();
	if (jet2beta1_01_branch != 0) jet2beta1_01();
	if (jet3beta1_01_branch != 0) jet3beta1_01();
	if (jet4beta1_01_branch != 0) jet4beta1_01();
	if (jet1beta2_01_branch != 0) jet1beta2_01();
	if (jet2beta2_01_branch != 0) jet2beta2_01();
	if (jet3beta2_01_branch != 0) jet3beta2_01();
	if (jet4beta2_01_branch != 0) jet4beta2_01();
	if (jet1beta1_05_branch != 0) jet1beta1_05();
	if (jet2beta1_05_branch != 0) jet2beta1_05();
	if (jet3beta1_05_branch != 0) jet3beta1_05();
	if (jet4beta1_05_branch != 0) jet4beta1_05();
	if (jet1beta2_05_branch != 0) jet1beta2_05();
	if (jet2beta2_05_branch != 0) jet2beta2_05();
	if (jet3beta2_05_branch != 0) jet3beta2_05();
	if (jet4beta2_05_branch != 0) jet4beta2_05();
	if (jet1beta1_10_branch != 0) jet1beta1_10();
	if (jet2beta1_10_branch != 0) jet2beta1_10();
	if (jet3beta1_10_branch != 0) jet3beta1_10();
	if (jet4beta1_10_branch != 0) jet4beta1_10();
	if (jet1beta2_10_branch != 0) jet1beta2_10();
	if (jet2beta2_10_branch != 0) jet2beta2_10();
	if (jet3beta2_10_branch != 0) jet3beta2_10();
	if (jet4beta2_10_branch != 0) jet4beta2_10();
	if (nwzpartons_branch != 0) nwzpartons();
	if (ngennue_branch != 0) ngennue();
	if (ngennum_branch != 0) ngennum();
	if (ngennut_branch != 0) ngennut();
	if (ngennu_branch != 0) ngennu();
	if (mlb1_branch != 0) mlb1();
	if (mlb2_branch != 0) mlb2();
	if (mlbt1_branch != 0) mlbt1();
	if (mlbt2_branch != 0) mlbt2();
	if (mlbmin_branch != 0) mlbmin();
	if (mlbtmin_branch != 0) mlbtmin();
	if (mt2_branch != 0) mt2();
	if (mt2j_branch != 0) mt2j();
	if (el27_branch != 0) el27();
	if (mm_branch != 0) mm();
	if (mmtk_branch != 0) mmtk();
	if (me_branch != 0) me();
	if (em_branch != 0) em();
	if (mu_branch != 0) mu();
	if (mu21_branch != 0) mu21();
	if (ee_branch != 0) ee();
	if (m13_branch != 0) m13();
	if (m23_branch != 0) m23();
	if (m14_branch != 0) m14();
	if (m24_branch != 0) m24();
	if (m34_branch != 0) m34();
	if (drjetll_branch != 0) drjetll();
	if (jetptll_branch != 0) jetptll();
	if (pfjetidll_branch != 0) pfjetidll();
	if (drjetlt_branch != 0) drjetlt();
	if (jetptlt_branch != 0) jetptlt();
	if (pfjetidlt_branch != 0) pfjetidlt();
	if (id1_branch != 0) id1();
	if (id2_branch != 0) id2();
	if (id3_branch != 0) id3();
	if (id4_branch != 0) id4();
	if (id5_branch != 0) id5();
	if (id6_branch != 0) id6();
	if (el1tv_branch != 0) el1tv();
	if (el2tv_branch != 0) el2tv();
	if (el1nomu_branch != 0) el1nomu();
	if (el2nomu_branch != 0) el2nomu();
	if (el1nomuss_branch != 0) el1nomuss();
	if (el2nomuss_branch != 0) el2nomuss();
	if (tche1_branch != 0) tche1();
	if (tche2_branch != 0) tche2();
	if (tche3_branch != 0) tche3();
	if (tche4_branch != 0) tche4();
	if (tche5_branch != 0) tche5();
	if (tche6_branch != 0) tche6();
	if (tche7_branch != 0) tche7();
	if (tche8_branch != 0) tche8();
	if (csv1_branch != 0) csv1();
	if (csv2_branch != 0) csv2();
	if (csv3_branch != 0) csv3();
	if (csv4_branch != 0) csv4();
	if (csv5_branch != 0) csv5();
	if (csv6_branch != 0) csv6();
	if (csv7_branch != 0) csv7();
	if (csv8_branch != 0) csv8();
	if (jetunc1_branch != 0) jetunc1();
	if (jetunc2_branch != 0) jetunc2();
	if (jetunc3_branch != 0) jetunc3();
	if (jetunc4_branch != 0) jetunc4();
	if (jetunc5_branch != 0) jetunc5();
	if (jetunc6_branch != 0) jetunc6();
	if (jetunc7_branch != 0) jetunc7();
	if (jetunc8_branch != 0) jetunc8();
	if (jetgenb1_branch != 0) jetgenb1();
	if (jetgenb2_branch != 0) jetgenb2();
	if (jetgenb3_branch != 0) jetgenb3();
	if (jetgenb4_branch != 0) jetgenb4();
	if (jetgenb5_branch != 0) jetgenb5();
	if (jetgenb6_branch != 0) jetgenb6();
	if (jetgenb7_branch != 0) jetgenb7();
	if (jetgenb8_branch != 0) jetgenb8();
	if (pfmett1new_branch != 0) pfmett1new();
	if (pfmett1newphi_branch != 0) pfmett1newphi();
	if (minmet_branch != 0) minmet();
	if (trkmet_branch != 0) trkmet();
	if (trkmetphi_branch != 0) trkmetphi();
	if (trksumet_branch != 0) trksumet();
	if (pfmet_branch != 0) pfmet();
	if (pfmett1_branch != 0) pfmett1();
	if (pfmett1phi_branch != 0) pfmett1phi();
	if (pfmetup_branch != 0) pfmetup();
	if (pfmetdn_branch != 0) pfmetdn();
	if (pfmetphi_branch != 0) pfmetphi();
	if (pfsumet_branch != 0) pfsumet();
	if (met_branch != 0) met();
	if (metphi_branch != 0) metphi();
	if (sumet_branch != 0) sumet();
	if (mumet_branch != 0) mumet();
	if (mumetphi_branch != 0) mumetphi();
	if (musumet_branch != 0) musumet();
	if (mujesmet_branch != 0) mujesmet();
	if (mujesmetphi_branch != 0) mujesmetphi();
	if (mujessumet_branch != 0) mujessumet();
	if (genmet_branch != 0) genmet();
	if (genmetcustom_branch != 0) genmetcustom();
	if (genmetphi_branch != 0) genmetphi();
	if (gensumet_branch != 0) gensumet();
	if (dphixmet_branch != 0) dphixmet();
	if (metpar_branch != 0) metpar();
	if (metperp_branch != 0) metperp();
	if (tcmet_branch != 0) tcmet();
	if (tcmetphi_branch != 0) tcmetphi();
	if (tcsumet_branch != 0) tcsumet();
	if (tcmetNew_branch != 0) tcmetNew();
	if (tcmetphiNew_branch != 0) tcmetphiNew();
	if (tcsumetNew_branch != 0) tcsumetNew();
	if (tcmetcor_branch != 0) tcmetcor();
	if (pfmetcor_branch != 0) pfmetcor();
	if (njets_branch != 0) njets();
	if (njetsold_branch != 0) njetsold();
	if (njetsres_branch != 0) njetsres();
	if (njetsup_branch != 0) njetsup();
	if (njetsdn_branch != 0) njetsdn();
	if (njpt_branch != 0) njpt();
	if (njets40_branch != 0) njets40();
	if (njets40up_branch != 0) njets40up();
	if (njets40dn_branch != 0) njets40dn();
	if (sumjetpt_branch != 0) sumjetpt();
	if (sumjetpt10_branch != 0) sumjetpt10();
	if (vecjetpt_branch != 0) vecjetpt();
	if (nbtags_branch != 0) nbtags();
	if (nbl_branch != 0) nbl();
	if (nbm_branch != 0) nbm();
	if (ndphijetmet_branch != 0) ndphijetmet();
	if (maxjetpt_branch != 0) maxjetpt();
	if (maxjetdphimet_branch != 0) maxjetdphimet();
	if (leptype_branch != 0) leptype();
	if (ecaltype_branch != 0) ecaltype();
	if (passz_branch != 0) passz();
	if (pdgid_branch != 0) pdgid();
	if (dpdm_branch != 0) dpdm();
	if (meterror_branch != 0) meterror();
	if (meterrorc_branch != 0) meterrorc();
	if (ptll_branch != 0) ptll();
	if (ptlt_branch != 0) ptlt();
	if (pterrll_branch != 0) pterrll();
	if (pterrlt_branch != 0) pterrlt();
	if (ptlltrk_branch != 0) ptlltrk();
	if (ptlttrk_branch != 0) ptlttrk();
	if (ptllgfit_branch != 0) ptllgfit();
	if (ptltgfit_branch != 0) ptltgfit();
	if (ptllpf_branch != 0) ptllpf();
	if (ptltpf_branch != 0) ptltpf();
	if (ptllgen_branch != 0) ptllgen();
	if (ptltgen_branch != 0) ptltgen();
	if (npfmuons_branch != 0) npfmuons();
	if (nmatchedpfmuons_branch != 0) nmatchedpfmuons();
	if (idll_branch != 0) idll();
	if (idlt_branch != 0) idlt();
	if (etall_branch != 0) etall();
	if (etalt_branch != 0) etalt();
	if (phill_branch != 0) phill();
	if (philt_branch != 0) philt();
	if (dilmass_branch != 0) dilmass();
	if (dilmasspf_branch != 0) dilmasspf();
	if (dilmasscor_branch != 0) dilmasscor();
	if (dilpt_branch != 0) dilpt();
	if (flagll_branch != 0) flagll();
	if (flaglt_branch != 0) flaglt();
	if (isdata_branch != 0) isdata();
	if (lljj_branch != 0) lljj();
	if (jj_branch != 0) jj();
	if (l1jj_branch != 0) l1jj();
	if (l2jj_branch != 0) l2jj();
	if (j1ll_branch != 0) j1ll();
	if (j2ll_branch != 0) j2ll();
	if (l1j1_branch != 0) l1j1();
	if (l2j2_branch != 0) l2j2();
	if (l1j2_branch != 0) l1j2();
	if (l2j1_branch != 0) l2j1();
	if (dilep_branch != 0) dilep();
	if (dileppf_branch != 0) dileppf();
	if (w_branch != 0) w();
	if (lep1_branch != 0) lep1();
	if (lep2_branch != 0) lep2();
	if (lep3_branch != 0) lep3();
	if (lep4_branch != 0) lep4();
	if (lep5_branch != 0) lep5();
	if (lep6_branch != 0) lep6();
	if (pflep1_branch != 0) pflep1();
	if (pflep2_branch != 0) pflep2();
	if (genlep1_branch != 0) genlep1();
	if (genlep2_branch != 0) genlep2();
	if (gennu1_branch != 0) gennu1();
	if (gennu2_branch != 0) gennu2();
	if (pfTau_leadPtcand_branch != 0) pfTau_leadPtcand();
	if (pfTau_leadPtcandID_branch != 0) pfTau_leadPtcandID();
	if (jet1_branch != 0) jet1();
	if (jet2_branch != 0) jet2();
	if (jet3_branch != 0) jet3();
	if (jet4_branch != 0) jet4();
	if (jet5_branch != 0) jet5();
	if (jet6_branch != 0) jet6();
	if (jet7_branch != 0) jet7();
	if (jet8_branch != 0) jet8();
	if (subthreshjetup1_branch != 0) subthreshjetup1();
	if (subthreshjetup2_branch != 0) subthreshjetup2();
	if (jet1mcfa_branch != 0) jet1mcfa();
	if (jet2mcfa_branch != 0) jet2mcfa();
	if (jet3mcfa_branch != 0) jet3mcfa();
	if (jet4mcfa_branch != 0) jet4mcfa();
	if (jet1mcfp_branch != 0) jet1mcfp();
	if (jet2mcfp_branch != 0) jet2mcfp();
	if (jet3mcfp_branch != 0) jet3mcfp();
	if (jet4mcfp_branch != 0) jet4mcfp();
	if (bjet1_branch != 0) bjet1();
	if (bjet2_branch != 0) bjet2();
	if (bjet3_branch != 0) bjet3();
	if (bjet4_branch != 0) bjet4();
	if (genbquark1_branch != 0) genbquark1();
	if (genbquark2_branch != 0) genbquark2();
	if (genbquark3_branch != 0) genbquark3();
	if (genbquark4_branch != 0) genbquark4();
	if (genz_branch != 0) genz();
	if (gent_branch != 0) gent();
	if (gentbar_branch != 0) gentbar();
	if (genttbar_branch != 0) genttbar();
	if (csc_branch != 0) csc();
	if (hbhe_branch != 0) hbhe();
	if (hbhenew_branch != 0) hbhenew();
	if (hcallaser_branch != 0) hcallaser();
	if (ecallaser_branch != 0) ecallaser();
	if (ecaltp_branch != 0) ecaltp();
	if (trkfail_branch != 0) trkfail();
	if (eebadsc_branch != 0) eebadsc();
	if (drll_branch != 0) drll();
	if (dphill_branch != 0) dphill();
	if (drblmin_branch != 0) drblmin();
	if (st30_branch != 0) st30();
	if (st40_branch != 0) st40();
	if (m1_branch != 0) m1();
	if (m2_branch != 0) m2();
	if (m3_branch != 0) m3();
	if (zveto_branch != 0) zveto();
	if (nextramu_branch != 0) nextramu();
	if (nhyp_branch != 0) nhyp();
	if (nmuss_branch != 0) nmuss();
	if (extraz_branch != 0) extraz();
	if (extrag_branch != 0) extrag();
	if (pujets_branch != 0) pujets();
	if (npujets_branch != 0) npujets();
}

	float &rho()
	{
		if (not rho_isLoaded) {
			if (rho_branch != 0) {
				rho_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch rho_branch does not exist!\n");
				exit(1);
			}
			rho_isLoaded = true;
		}
		return rho_;
	}
	int &vtxidx()
	{
		if (not vtxidx_isLoaded) {
			if (vtxidx_branch != 0) {
				vtxidx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxidx_branch does not exist!\n");
				exit(1);
			}
			vtxidx_isLoaded = true;
		}
		return vtxidx_;
	}
	int &zdilep()
	{
		if (not zdilep_isLoaded) {
			if (zdilep_branch != 0) {
				zdilep_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch zdilep_branch does not exist!\n");
				exit(1);
			}
			zdilep_isLoaded = true;
		}
		return zdilep_;
	}
	int &run()
	{
		if (not run_isLoaded) {
			if (run_branch != 0) {
				run_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch run_branch does not exist!\n");
				exit(1);
			}
			run_isLoaded = true;
		}
		return run_;
	}
	float &xsec()
	{
		if (not xsec_isLoaded) {
			if (xsec_branch != 0) {
				xsec_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch xsec_branch does not exist!\n");
				exit(1);
			}
			xsec_isLoaded = true;
		}
		return xsec_;
	}
	int &ssmu1()
	{
		if (not ssmu1_isLoaded) {
			if (ssmu1_branch != 0) {
				ssmu1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ssmu1_branch does not exist!\n");
				exit(1);
			}
			ssmu1_isLoaded = true;
		}
		return ssmu1_;
	}
	int &ssmu2()
	{
		if (not ssmu2_isLoaded) {
			if (ssmu2_branch != 0) {
				ssmu2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ssmu2_branch does not exist!\n");
				exit(1);
			}
			ssmu2_isLoaded = true;
		}
		return ssmu2_;
	}
	int &eldup()
	{
		if (not eldup_isLoaded) {
			if (eldup_branch != 0) {
				eldup_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch eldup_branch does not exist!\n");
				exit(1);
			}
			eldup_isLoaded = true;
		}
		return eldup_;
	}
	float &btagweight()
	{
		if (not btagweight_isLoaded) {
			if (btagweight_branch != 0) {
				btagweight_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch btagweight_branch does not exist!\n");
				exit(1);
			}
			btagweight_isLoaded = true;
		}
		return btagweight_;
	}
	float &btagweightup()
	{
		if (not btagweightup_isLoaded) {
			if (btagweightup_branch != 0) {
				btagweightup_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch btagweightup_branch does not exist!\n");
				exit(1);
			}
			btagweightup_isLoaded = true;
		}
		return btagweightup_;
	}
	float &ht30()
	{
		if (not ht30_isLoaded) {
			if (ht30_branch != 0) {
				ht30_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ht30_branch does not exist!\n");
				exit(1);
			}
			ht30_isLoaded = true;
		}
		return ht30_;
	}
	float &ht40()
	{
		if (not ht40_isLoaded) {
			if (ht40_branch != 0) {
				ht40_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ht40_branch does not exist!\n");
				exit(1);
			}
			ht40_isLoaded = true;
		}
		return ht40_;
	}
	float &ht40up()
	{
		if (not ht40up_isLoaded) {
			if (ht40up_branch != 0) {
				ht40up_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ht40up_branch does not exist!\n");
				exit(1);
			}
			ht40up_isLoaded = true;
		}
		return ht40up_;
	}
	float &ht40dn()
	{
		if (not ht40dn_isLoaded) {
			if (ht40dn_branch != 0) {
				ht40dn_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ht40dn_branch does not exist!\n");
				exit(1);
			}
			ht40dn_isLoaded = true;
		}
		return ht40dn_;
	}
	int &nbcsvl()
	{
		if (not nbcsvl_isLoaded) {
			if (nbcsvl_branch != 0) {
				nbcsvl_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nbcsvl_branch does not exist!\n");
				exit(1);
			}
			nbcsvl_isLoaded = true;
		}
		return nbcsvl_;
	}
	int &nbcsvlm()
	{
		if (not nbcsvlm_isLoaded) {
			if (nbcsvlm_branch != 0) {
				nbcsvlm_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nbcsvlm_branch does not exist!\n");
				exit(1);
			}
			nbcsvlm_isLoaded = true;
		}
		return nbcsvlm_;
	}
	int &nbcsvm()
	{
		if (not nbcsvm_isLoaded) {
			if (nbcsvm_branch != 0) {
				nbcsvm_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nbcsvm_branch does not exist!\n");
				exit(1);
			}
			nbcsvm_isLoaded = true;
		}
		return nbcsvm_;
	}
	int &nbcsvt()
	{
		if (not nbcsvt_isLoaded) {
			if (nbcsvt_branch != 0) {
				nbcsvt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nbcsvt_branch does not exist!\n");
				exit(1);
			}
			nbcsvt_isLoaded = true;
		}
		return nbcsvt_;
	}
	int &nbvz()
	{
		if (not nbvz_isLoaded) {
			if (nbvz_branch != 0) {
				nbvz_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nbvz_branch does not exist!\n");
				exit(1);
			}
			nbvz_isLoaded = true;
		}
		return nbvz_;
	}
	int &nbvzres()
	{
		if (not nbvzres_isLoaded) {
			if (nbvzres_branch != 0) {
				nbvzres_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nbvzres_branch does not exist!\n");
				exit(1);
			}
			nbvzres_isLoaded = true;
		}
		return nbvzres_;
	}
	float &jzb()
	{
		if (not jzb_isLoaded) {
			if (jzb_branch != 0) {
				jzb_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jzb_branch does not exist!\n");
				exit(1);
			}
			jzb_isLoaded = true;
		}
		return jzb_;
	}
	float &mjj()
	{
		if (not mjj_isLoaded) {
			if (mjj_branch != 0) {
				mjj_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mjj_branch does not exist!\n");
				exit(1);
			}
			mjj_isLoaded = true;
		}
		return mjj_;
	}
	float &mbb()
	{
		if (not mbb_isLoaded) {
			if (mbb_branch != 0) {
				mbb_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mbb_branch does not exist!\n");
				exit(1);
			}
			mbb_isLoaded = true;
		}
		return mbb_;
	}
	float &mjjup()
	{
		if (not mjjup_isLoaded) {
			if (mjjup_branch != 0) {
				mjjup_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mjjup_branch does not exist!\n");
				exit(1);
			}
			mjjup_isLoaded = true;
		}
		return mjjup_;
	}
	float &mjjdn()
	{
		if (not mjjdn_isLoaded) {
			if (mjjdn_branch != 0) {
				mjjdn_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mjjdn_branch does not exist!\n");
				exit(1);
			}
			mjjdn_isLoaded = true;
		}
		return mjjdn_;
	}
	int &nlep()
	{
		if (not nlep_isLoaded) {
			if (nlep_branch != 0) {
				nlep_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nlep_branch does not exist!\n");
				exit(1);
			}
			nlep_isLoaded = true;
		}
		return nlep_;
	}
	int &nel()
	{
		if (not nel_isLoaded) {
			if (nel_branch != 0) {
				nel_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nel_branch does not exist!\n");
				exit(1);
			}
			nel_isLoaded = true;
		}
		return nel_;
	}
	int &nmu()
	{
		if (not nmu_isLoaded) {
			if (nmu_branch != 0) {
				nmu_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nmu_branch does not exist!\n");
				exit(1);
			}
			nmu_isLoaded = true;
		}
		return nmu_;
	}
	int &st()
	{
		if (not st_isLoaded) {
			if (st_branch != 0) {
				st_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch st_branch does not exist!\n");
				exit(1);
			}
			st_isLoaded = true;
		}
		return st_;
	}
	int &goodrun()
	{
		if (not goodrun_isLoaded) {
			if (goodrun_branch != 0) {
				goodrun_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch goodrun_branch does not exist!\n");
				exit(1);
			}
			goodrun_isLoaded = true;
		}
		return goodrun_;
	}
	int &lumi()
	{
		if (not lumi_isLoaded) {
			if (lumi_branch != 0) {
				lumi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch lumi_branch does not exist!\n");
				exit(1);
			}
			lumi_isLoaded = true;
		}
		return lumi_;
	}
	int &event()
	{
		if (not event_isLoaded) {
			if (event_branch != 0) {
				event_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch event_branch does not exist!\n");
				exit(1);
			}
			event_isLoaded = true;
		}
		return event_;
	}
	int &failjetid()
	{
		if (not failjetid_isLoaded) {
			if (failjetid_branch != 0) {
				failjetid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch failjetid_branch does not exist!\n");
				exit(1);
			}
			failjetid_isLoaded = true;
		}
		return failjetid_;
	}
	float &unc()
	{
		if (not unc_isLoaded) {
			if (unc_branch != 0) {
				unc_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch unc_branch does not exist!\n");
				exit(1);
			}
			unc_isLoaded = true;
		}
		return unc_;
	}
	float &uncx()
	{
		if (not uncx_isLoaded) {
			if (uncx_branch != 0) {
				uncx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch uncx_branch does not exist!\n");
				exit(1);
			}
			uncx_isLoaded = true;
		}
		return uncx_;
	}
	float &uncy()
	{
		if (not uncy_isLoaded) {
			if (uncy_branch != 0) {
				uncy_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch uncy_branch does not exist!\n");
				exit(1);
			}
			uncy_isLoaded = true;
		}
		return uncy_;
	}
	float &maxemf()
	{
		if (not maxemf_isLoaded) {
			if (maxemf_branch != 0) {
				maxemf_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch maxemf_branch does not exist!\n");
				exit(1);
			}
			maxemf_isLoaded = true;
		}
		return maxemf_;
	}
	float &trgeff()
	{
		if (not trgeff_isLoaded) {
			if (trgeff_branch != 0) {
				trgeff_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trgeff_branch does not exist!\n");
				exit(1);
			}
			trgeff_isLoaded = true;
		}
		return trgeff_;
	}
	int &nvtx()
	{
		if (not nvtx_isLoaded) {
			if (nvtx_branch != 0) {
				nvtx_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nvtx_branch does not exist!\n");
				exit(1);
			}
			nvtx_isLoaded = true;
		}
		return nvtx_;
	}
	float &weight()
	{
		if (not weight_isLoaded) {
			if (weight_branch != 0) {
				weight_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch weight_branch does not exist!\n");
				exit(1);
			}
			weight_isLoaded = true;
		}
		return weight_;
	}
	float &vtxweight()
	{
		if (not vtxweight_isLoaded) {
			if (vtxweight_branch != 0) {
				vtxweight_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vtxweight_branch does not exist!\n");
				exit(1);
			}
			vtxweight_isLoaded = true;
		}
		return vtxweight_;
	}
	float &pthat()
	{
		if (not pthat_isLoaded) {
			if (pthat_branch != 0) {
				pthat_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pthat_branch does not exist!\n");
				exit(1);
			}
			pthat_isLoaded = true;
		}
		return pthat_;
	}
	float &mllgen()
	{
		if (not mllgen_isLoaded) {
			if (mllgen_branch != 0) {
				mllgen_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mllgen_branch does not exist!\n");
				exit(1);
			}
			mllgen_isLoaded = true;
		}
		return mllgen_;
	}
	float &qscale()
	{
		if (not qscale_isLoaded) {
			if (qscale_branch != 0) {
				qscale_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch qscale_branch does not exist!\n");
				exit(1);
			}
			qscale_isLoaded = true;
		}
		return qscale_;
	}
	float &mg()
	{
		if (not mg_isLoaded) {
			if (mg_branch != 0) {
				mg_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mg_branch does not exist!\n");
				exit(1);
			}
			mg_isLoaded = true;
		}
		return mg_;
	}
	float &ml()
	{
		if (not ml_isLoaded) {
			if (ml_branch != 0) {
				ml_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ml_branch does not exist!\n");
				exit(1);
			}
			ml_isLoaded = true;
		}
		return ml_;
	}
	float &x()
	{
		if (not x_isLoaded) {
			if (x_branch != 0) {
				x_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch x_branch does not exist!\n");
				exit(1);
			}
			x_isLoaded = true;
		}
		return x_;
	}
	float &ptgen1()
	{
		if (not ptgen1_isLoaded) {
			if (ptgen1_branch != 0) {
				ptgen1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptgen1_branch does not exist!\n");
				exit(1);
			}
			ptgen1_isLoaded = true;
		}
		return ptgen1_;
	}
	float &ptgen2()
	{
		if (not ptgen2_isLoaded) {
			if (ptgen2_branch != 0) {
				ptgen2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptgen2_branch does not exist!\n");
				exit(1);
			}
			ptgen2_isLoaded = true;
		}
		return ptgen2_;
	}
	float &eff0()
	{
		if (not eff0_isLoaded) {
			if (eff0_branch != 0) {
				eff0_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch eff0_branch does not exist!\n");
				exit(1);
			}
			eff0_isLoaded = true;
		}
		return eff0_;
	}
	float &eff100()
	{
		if (not eff100_isLoaded) {
			if (eff100_branch != 0) {
				eff100_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch eff100_branch does not exist!\n");
				exit(1);
			}
			eff100_isLoaded = true;
		}
		return eff100_;
	}
	float &eff200()
	{
		if (not eff200_isLoaded) {
			if (eff200_branch != 0) {
				eff200_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch eff200_branch does not exist!\n");
				exit(1);
			}
			eff200_isLoaded = true;
		}
		return eff200_;
	}
	float &eff300()
	{
		if (not eff300_isLoaded) {
			if (eff300_branch != 0) {
				eff300_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch eff300_branch does not exist!\n");
				exit(1);
			}
			eff300_isLoaded = true;
		}
		return eff300_;
	}
	float &eveto1()
	{
		if (not eveto1_isLoaded) {
			if (eveto1_branch != 0) {
				eveto1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch eveto1_branch does not exist!\n");
				exit(1);
			}
			eveto1_isLoaded = true;
		}
		return eveto1_;
	}
	float &hveto1()
	{
		if (not hveto1_isLoaded) {
			if (hveto1_branch != 0) {
				hveto1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hveto1_branch does not exist!\n");
				exit(1);
			}
			hveto1_isLoaded = true;
		}
		return hveto1_;
	}
	float &eveto2()
	{
		if (not eveto2_isLoaded) {
			if (eveto2_branch != 0) {
				eveto2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch eveto2_branch does not exist!\n");
				exit(1);
			}
			eveto2_isLoaded = true;
		}
		return eveto2_;
	}
	float &hveto2()
	{
		if (not hveto2_isLoaded) {
			if (hveto2_branch != 0) {
				hveto2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hveto2_branch does not exist!\n");
				exit(1);
			}
			hveto2_isLoaded = true;
		}
		return hveto2_;
	}
	int &ngenels()
	{
		if (not ngenels_isLoaded) {
			if (ngenels_branch != 0) {
				ngenels_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ngenels_branch does not exist!\n");
				exit(1);
			}
			ngenels_isLoaded = true;
		}
		return ngenels_;
	}
	int &ngenmus()
	{
		if (not ngenmus_isLoaded) {
			if (ngenmus_branch != 0) {
				ngenmus_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ngenmus_branch does not exist!\n");
				exit(1);
			}
			ngenmus_isLoaded = true;
		}
		return ngenmus_;
	}
	int &ngentaus()
	{
		if (not ngentaus_isLoaded) {
			if (ngentaus_branch != 0) {
				ngentaus_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ngentaus_branch does not exist!\n");
				exit(1);
			}
			ngentaus_isLoaded = true;
		}
		return ngentaus_;
	}
	int &ngenleps()
	{
		if (not ngenleps_isLoaded) {
			if (ngenleps_branch != 0) {
				ngenleps_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ngenleps_branch does not exist!\n");
				exit(1);
			}
			ngenleps_isLoaded = true;
		}
		return ngenleps_;
	}
	int &jet1flav()
	{
		if (not jet1flav_isLoaded) {
			if (jet1flav_branch != 0) {
				jet1flav_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1flav_branch does not exist!\n");
				exit(1);
			}
			jet1flav_isLoaded = true;
		}
		return jet1flav_;
	}
	int &jet2flav()
	{
		if (not jet2flav_isLoaded) {
			if (jet2flav_branch != 0) {
				jet2flav_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2flav_branch does not exist!\n");
				exit(1);
			}
			jet2flav_isLoaded = true;
		}
		return jet2flav_;
	}
	int &jet3flav()
	{
		if (not jet3flav_isLoaded) {
			if (jet3flav_branch != 0) {
				jet3flav_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3flav_branch does not exist!\n");
				exit(1);
			}
			jet3flav_isLoaded = true;
		}
		return jet3flav_;
	}
	int &jet4flav()
	{
		if (not jet4flav_isLoaded) {
			if (jet4flav_branch != 0) {
				jet4flav_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4flav_branch does not exist!\n");
				exit(1);
			}
			jet4flav_isLoaded = true;
		}
		return jet4flav_;
	}
	int &ngenbs()
	{
		if (not ngenbs_isLoaded) {
			if (ngenbs_branch != 0) {
				ngenbs_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ngenbs_branch does not exist!\n");
				exit(1);
			}
			ngenbs_isLoaded = true;
		}
		return ngenbs_;
	}
	float &jet1drgen()
	{
		if (not jet1drgen_isLoaded) {
			if (jet1drgen_branch != 0) {
				jet1drgen_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1drgen_branch does not exist!\n");
				exit(1);
			}
			jet1drgen_isLoaded = true;
		}
		return jet1drgen_;
	}
	float &jet2drgen()
	{
		if (not jet2drgen_isLoaded) {
			if (jet2drgen_branch != 0) {
				jet2drgen_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2drgen_branch does not exist!\n");
				exit(1);
			}
			jet2drgen_isLoaded = true;
		}
		return jet2drgen_;
	}
	float &jet3drgen()
	{
		if (not jet3drgen_isLoaded) {
			if (jet3drgen_branch != 0) {
				jet3drgen_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3drgen_branch does not exist!\n");
				exit(1);
			}
			jet3drgen_isLoaded = true;
		}
		return jet3drgen_;
	}
	float &jet4drgen()
	{
		if (not jet4drgen_isLoaded) {
			if (jet4drgen_branch != 0) {
				jet4drgen_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4drgen_branch does not exist!\n");
				exit(1);
			}
			jet4drgen_isLoaded = true;
		}
		return jet4drgen_;
	}
	float &jet1beta1_01()
	{
		if (not jet1beta1_01_isLoaded) {
			if (jet1beta1_01_branch != 0) {
				jet1beta1_01_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1beta1_01_branch does not exist!\n");
				exit(1);
			}
			jet1beta1_01_isLoaded = true;
		}
		return jet1beta1_01_;
	}
	float &jet2beta1_01()
	{
		if (not jet2beta1_01_isLoaded) {
			if (jet2beta1_01_branch != 0) {
				jet2beta1_01_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2beta1_01_branch does not exist!\n");
				exit(1);
			}
			jet2beta1_01_isLoaded = true;
		}
		return jet2beta1_01_;
	}
	float &jet3beta1_01()
	{
		if (not jet3beta1_01_isLoaded) {
			if (jet3beta1_01_branch != 0) {
				jet3beta1_01_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3beta1_01_branch does not exist!\n");
				exit(1);
			}
			jet3beta1_01_isLoaded = true;
		}
		return jet3beta1_01_;
	}
	float &jet4beta1_01()
	{
		if (not jet4beta1_01_isLoaded) {
			if (jet4beta1_01_branch != 0) {
				jet4beta1_01_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4beta1_01_branch does not exist!\n");
				exit(1);
			}
			jet4beta1_01_isLoaded = true;
		}
		return jet4beta1_01_;
	}
	float &jet1beta2_01()
	{
		if (not jet1beta2_01_isLoaded) {
			if (jet1beta2_01_branch != 0) {
				jet1beta2_01_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1beta2_01_branch does not exist!\n");
				exit(1);
			}
			jet1beta2_01_isLoaded = true;
		}
		return jet1beta2_01_;
	}
	float &jet2beta2_01()
	{
		if (not jet2beta2_01_isLoaded) {
			if (jet2beta2_01_branch != 0) {
				jet2beta2_01_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2beta2_01_branch does not exist!\n");
				exit(1);
			}
			jet2beta2_01_isLoaded = true;
		}
		return jet2beta2_01_;
	}
	float &jet3beta2_01()
	{
		if (not jet3beta2_01_isLoaded) {
			if (jet3beta2_01_branch != 0) {
				jet3beta2_01_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3beta2_01_branch does not exist!\n");
				exit(1);
			}
			jet3beta2_01_isLoaded = true;
		}
		return jet3beta2_01_;
	}
	float &jet4beta2_01()
	{
		if (not jet4beta2_01_isLoaded) {
			if (jet4beta2_01_branch != 0) {
				jet4beta2_01_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4beta2_01_branch does not exist!\n");
				exit(1);
			}
			jet4beta2_01_isLoaded = true;
		}
		return jet4beta2_01_;
	}
	float &jet1beta1_05()
	{
		if (not jet1beta1_05_isLoaded) {
			if (jet1beta1_05_branch != 0) {
				jet1beta1_05_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1beta1_05_branch does not exist!\n");
				exit(1);
			}
			jet1beta1_05_isLoaded = true;
		}
		return jet1beta1_05_;
	}
	float &jet2beta1_05()
	{
		if (not jet2beta1_05_isLoaded) {
			if (jet2beta1_05_branch != 0) {
				jet2beta1_05_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2beta1_05_branch does not exist!\n");
				exit(1);
			}
			jet2beta1_05_isLoaded = true;
		}
		return jet2beta1_05_;
	}
	float &jet3beta1_05()
	{
		if (not jet3beta1_05_isLoaded) {
			if (jet3beta1_05_branch != 0) {
				jet3beta1_05_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3beta1_05_branch does not exist!\n");
				exit(1);
			}
			jet3beta1_05_isLoaded = true;
		}
		return jet3beta1_05_;
	}
	float &jet4beta1_05()
	{
		if (not jet4beta1_05_isLoaded) {
			if (jet4beta1_05_branch != 0) {
				jet4beta1_05_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4beta1_05_branch does not exist!\n");
				exit(1);
			}
			jet4beta1_05_isLoaded = true;
		}
		return jet4beta1_05_;
	}
	float &jet1beta2_05()
	{
		if (not jet1beta2_05_isLoaded) {
			if (jet1beta2_05_branch != 0) {
				jet1beta2_05_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1beta2_05_branch does not exist!\n");
				exit(1);
			}
			jet1beta2_05_isLoaded = true;
		}
		return jet1beta2_05_;
	}
	float &jet2beta2_05()
	{
		if (not jet2beta2_05_isLoaded) {
			if (jet2beta2_05_branch != 0) {
				jet2beta2_05_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2beta2_05_branch does not exist!\n");
				exit(1);
			}
			jet2beta2_05_isLoaded = true;
		}
		return jet2beta2_05_;
	}
	float &jet3beta2_05()
	{
		if (not jet3beta2_05_isLoaded) {
			if (jet3beta2_05_branch != 0) {
				jet3beta2_05_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3beta2_05_branch does not exist!\n");
				exit(1);
			}
			jet3beta2_05_isLoaded = true;
		}
		return jet3beta2_05_;
	}
	float &jet4beta2_05()
	{
		if (not jet4beta2_05_isLoaded) {
			if (jet4beta2_05_branch != 0) {
				jet4beta2_05_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4beta2_05_branch does not exist!\n");
				exit(1);
			}
			jet4beta2_05_isLoaded = true;
		}
		return jet4beta2_05_;
	}
	float &jet1beta1_10()
	{
		if (not jet1beta1_10_isLoaded) {
			if (jet1beta1_10_branch != 0) {
				jet1beta1_10_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1beta1_10_branch does not exist!\n");
				exit(1);
			}
			jet1beta1_10_isLoaded = true;
		}
		return jet1beta1_10_;
	}
	float &jet2beta1_10()
	{
		if (not jet2beta1_10_isLoaded) {
			if (jet2beta1_10_branch != 0) {
				jet2beta1_10_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2beta1_10_branch does not exist!\n");
				exit(1);
			}
			jet2beta1_10_isLoaded = true;
		}
		return jet2beta1_10_;
	}
	float &jet3beta1_10()
	{
		if (not jet3beta1_10_isLoaded) {
			if (jet3beta1_10_branch != 0) {
				jet3beta1_10_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3beta1_10_branch does not exist!\n");
				exit(1);
			}
			jet3beta1_10_isLoaded = true;
		}
		return jet3beta1_10_;
	}
	float &jet4beta1_10()
	{
		if (not jet4beta1_10_isLoaded) {
			if (jet4beta1_10_branch != 0) {
				jet4beta1_10_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4beta1_10_branch does not exist!\n");
				exit(1);
			}
			jet4beta1_10_isLoaded = true;
		}
		return jet4beta1_10_;
	}
	float &jet1beta2_10()
	{
		if (not jet1beta2_10_isLoaded) {
			if (jet1beta2_10_branch != 0) {
				jet1beta2_10_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1beta2_10_branch does not exist!\n");
				exit(1);
			}
			jet1beta2_10_isLoaded = true;
		}
		return jet1beta2_10_;
	}
	float &jet2beta2_10()
	{
		if (not jet2beta2_10_isLoaded) {
			if (jet2beta2_10_branch != 0) {
				jet2beta2_10_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2beta2_10_branch does not exist!\n");
				exit(1);
			}
			jet2beta2_10_isLoaded = true;
		}
		return jet2beta2_10_;
	}
	float &jet3beta2_10()
	{
		if (not jet3beta2_10_isLoaded) {
			if (jet3beta2_10_branch != 0) {
				jet3beta2_10_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3beta2_10_branch does not exist!\n");
				exit(1);
			}
			jet3beta2_10_isLoaded = true;
		}
		return jet3beta2_10_;
	}
	float &jet4beta2_10()
	{
		if (not jet4beta2_10_isLoaded) {
			if (jet4beta2_10_branch != 0) {
				jet4beta2_10_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4beta2_10_branch does not exist!\n");
				exit(1);
			}
			jet4beta2_10_isLoaded = true;
		}
		return jet4beta2_10_;
	}
	int &nwzpartons()
	{
		if (not nwzpartons_isLoaded) {
			if (nwzpartons_branch != 0) {
				nwzpartons_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nwzpartons_branch does not exist!\n");
				exit(1);
			}
			nwzpartons_isLoaded = true;
		}
		return nwzpartons_;
	}
	int &ngennue()
	{
		if (not ngennue_isLoaded) {
			if (ngennue_branch != 0) {
				ngennue_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ngennue_branch does not exist!\n");
				exit(1);
			}
			ngennue_isLoaded = true;
		}
		return ngennue_;
	}
	int &ngennum()
	{
		if (not ngennum_isLoaded) {
			if (ngennum_branch != 0) {
				ngennum_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ngennum_branch does not exist!\n");
				exit(1);
			}
			ngennum_isLoaded = true;
		}
		return ngennum_;
	}
	int &ngennut()
	{
		if (not ngennut_isLoaded) {
			if (ngennut_branch != 0) {
				ngennut_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ngennut_branch does not exist!\n");
				exit(1);
			}
			ngennut_isLoaded = true;
		}
		return ngennut_;
	}
	int &ngennu()
	{
		if (not ngennu_isLoaded) {
			if (ngennu_branch != 0) {
				ngennu_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ngennu_branch does not exist!\n");
				exit(1);
			}
			ngennu_isLoaded = true;
		}
		return ngennu_;
	}
	float &mlb1()
	{
		if (not mlb1_isLoaded) {
			if (mlb1_branch != 0) {
				mlb1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mlb1_branch does not exist!\n");
				exit(1);
			}
			mlb1_isLoaded = true;
		}
		return mlb1_;
	}
	float &mlb2()
	{
		if (not mlb2_isLoaded) {
			if (mlb2_branch != 0) {
				mlb2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mlb2_branch does not exist!\n");
				exit(1);
			}
			mlb2_isLoaded = true;
		}
		return mlb2_;
	}
	float &mlbt1()
	{
		if (not mlbt1_isLoaded) {
			if (mlbt1_branch != 0) {
				mlbt1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mlbt1_branch does not exist!\n");
				exit(1);
			}
			mlbt1_isLoaded = true;
		}
		return mlbt1_;
	}
	float &mlbt2()
	{
		if (not mlbt2_isLoaded) {
			if (mlbt2_branch != 0) {
				mlbt2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mlbt2_branch does not exist!\n");
				exit(1);
			}
			mlbt2_isLoaded = true;
		}
		return mlbt2_;
	}
	float &mlbmin()
	{
		if (not mlbmin_isLoaded) {
			if (mlbmin_branch != 0) {
				mlbmin_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mlbmin_branch does not exist!\n");
				exit(1);
			}
			mlbmin_isLoaded = true;
		}
		return mlbmin_;
	}
	float &mlbtmin()
	{
		if (not mlbtmin_isLoaded) {
			if (mlbtmin_branch != 0) {
				mlbtmin_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mlbtmin_branch does not exist!\n");
				exit(1);
			}
			mlbtmin_isLoaded = true;
		}
		return mlbtmin_;
	}
	float &mt2()
	{
		if (not mt2_isLoaded) {
			if (mt2_branch != 0) {
				mt2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mt2_branch does not exist!\n");
				exit(1);
			}
			mt2_isLoaded = true;
		}
		return mt2_;
	}
	float &mt2j()
	{
		if (not mt2j_isLoaded) {
			if (mt2j_branch != 0) {
				mt2j_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mt2j_branch does not exist!\n");
				exit(1);
			}
			mt2j_isLoaded = true;
		}
		return mt2j_;
	}
	int &el27()
	{
		if (not el27_isLoaded) {
			if (el27_branch != 0) {
				el27_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch el27_branch does not exist!\n");
				exit(1);
			}
			el27_isLoaded = true;
		}
		return el27_;
	}
	int &mm()
	{
		if (not mm_isLoaded) {
			if (mm_branch != 0) {
				mm_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mm_branch does not exist!\n");
				exit(1);
			}
			mm_isLoaded = true;
		}
		return mm_;
	}
	int &mmtk()
	{
		if (not mmtk_isLoaded) {
			if (mmtk_branch != 0) {
				mmtk_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mmtk_branch does not exist!\n");
				exit(1);
			}
			mmtk_isLoaded = true;
		}
		return mmtk_;
	}
	int &me()
	{
		if (not me_isLoaded) {
			if (me_branch != 0) {
				me_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch me_branch does not exist!\n");
				exit(1);
			}
			me_isLoaded = true;
		}
		return me_;
	}
	int &em()
	{
		if (not em_isLoaded) {
			if (em_branch != 0) {
				em_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch em_branch does not exist!\n");
				exit(1);
			}
			em_isLoaded = true;
		}
		return em_;
	}
	int &mu()
	{
		if (not mu_isLoaded) {
			if (mu_branch != 0) {
				mu_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mu_branch does not exist!\n");
				exit(1);
			}
			mu_isLoaded = true;
		}
		return mu_;
	}
	int &mu21()
	{
		if (not mu21_isLoaded) {
			if (mu21_branch != 0) {
				mu21_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mu21_branch does not exist!\n");
				exit(1);
			}
			mu21_isLoaded = true;
		}
		return mu21_;
	}
	int &ee()
	{
		if (not ee_isLoaded) {
			if (ee_branch != 0) {
				ee_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ee_branch does not exist!\n");
				exit(1);
			}
			ee_isLoaded = true;
		}
		return ee_;
	}
	float &m13()
	{
		if (not m13_isLoaded) {
			if (m13_branch != 0) {
				m13_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch m13_branch does not exist!\n");
				exit(1);
			}
			m13_isLoaded = true;
		}
		return m13_;
	}
	float &m23()
	{
		if (not m23_isLoaded) {
			if (m23_branch != 0) {
				m23_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch m23_branch does not exist!\n");
				exit(1);
			}
			m23_isLoaded = true;
		}
		return m23_;
	}
	float &m14()
	{
		if (not m14_isLoaded) {
			if (m14_branch != 0) {
				m14_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch m14_branch does not exist!\n");
				exit(1);
			}
			m14_isLoaded = true;
		}
		return m14_;
	}
	float &m24()
	{
		if (not m24_isLoaded) {
			if (m24_branch != 0) {
				m24_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch m24_branch does not exist!\n");
				exit(1);
			}
			m24_isLoaded = true;
		}
		return m24_;
	}
	float &m34()
	{
		if (not m34_isLoaded) {
			if (m34_branch != 0) {
				m34_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch m34_branch does not exist!\n");
				exit(1);
			}
			m34_isLoaded = true;
		}
		return m34_;
	}
	float &drjetll()
	{
		if (not drjetll_isLoaded) {
			if (drjetll_branch != 0) {
				drjetll_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch drjetll_branch does not exist!\n");
				exit(1);
			}
			drjetll_isLoaded = true;
		}
		return drjetll_;
	}
	float &jetptll()
	{
		if (not jetptll_isLoaded) {
			if (jetptll_branch != 0) {
				jetptll_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetptll_branch does not exist!\n");
				exit(1);
			}
			jetptll_isLoaded = true;
		}
		return jetptll_;
	}
	int &pfjetidll()
	{
		if (not pfjetidll_isLoaded) {
			if (pfjetidll_branch != 0) {
				pfjetidll_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjetidll_branch does not exist!\n");
				exit(1);
			}
			pfjetidll_isLoaded = true;
		}
		return pfjetidll_;
	}
	float &drjetlt()
	{
		if (not drjetlt_isLoaded) {
			if (drjetlt_branch != 0) {
				drjetlt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch drjetlt_branch does not exist!\n");
				exit(1);
			}
			drjetlt_isLoaded = true;
		}
		return drjetlt_;
	}
	float &jetptlt()
	{
		if (not jetptlt_isLoaded) {
			if (jetptlt_branch != 0) {
				jetptlt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetptlt_branch does not exist!\n");
				exit(1);
			}
			jetptlt_isLoaded = true;
		}
		return jetptlt_;
	}
	int &pfjetidlt()
	{
		if (not pfjetidlt_isLoaded) {
			if (pfjetidlt_branch != 0) {
				pfjetidlt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfjetidlt_branch does not exist!\n");
				exit(1);
			}
			pfjetidlt_isLoaded = true;
		}
		return pfjetidlt_;
	}
	int &id1()
	{
		if (not id1_isLoaded) {
			if (id1_branch != 0) {
				id1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch id1_branch does not exist!\n");
				exit(1);
			}
			id1_isLoaded = true;
		}
		return id1_;
	}
	int &id2()
	{
		if (not id2_isLoaded) {
			if (id2_branch != 0) {
				id2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch id2_branch does not exist!\n");
				exit(1);
			}
			id2_isLoaded = true;
		}
		return id2_;
	}
	int &id3()
	{
		if (not id3_isLoaded) {
			if (id3_branch != 0) {
				id3_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch id3_branch does not exist!\n");
				exit(1);
			}
			id3_isLoaded = true;
		}
		return id3_;
	}
	int &id4()
	{
		if (not id4_isLoaded) {
			if (id4_branch != 0) {
				id4_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch id4_branch does not exist!\n");
				exit(1);
			}
			id4_isLoaded = true;
		}
		return id4_;
	}
	int &id5()
	{
		if (not id5_isLoaded) {
			if (id5_branch != 0) {
				id5_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch id5_branch does not exist!\n");
				exit(1);
			}
			id5_isLoaded = true;
		}
		return id5_;
	}
	int &id6()
	{
		if (not id6_isLoaded) {
			if (id6_branch != 0) {
				id6_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch id6_branch does not exist!\n");
				exit(1);
			}
			id6_isLoaded = true;
		}
		return id6_;
	}
	int &el1tv()
	{
		if (not el1tv_isLoaded) {
			if (el1tv_branch != 0) {
				el1tv_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch el1tv_branch does not exist!\n");
				exit(1);
			}
			el1tv_isLoaded = true;
		}
		return el1tv_;
	}
	int &el2tv()
	{
		if (not el2tv_isLoaded) {
			if (el2tv_branch != 0) {
				el2tv_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch el2tv_branch does not exist!\n");
				exit(1);
			}
			el2tv_isLoaded = true;
		}
		return el2tv_;
	}
	int &el1nomu()
	{
		if (not el1nomu_isLoaded) {
			if (el1nomu_branch != 0) {
				el1nomu_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch el1nomu_branch does not exist!\n");
				exit(1);
			}
			el1nomu_isLoaded = true;
		}
		return el1nomu_;
	}
	int &el2nomu()
	{
		if (not el2nomu_isLoaded) {
			if (el2nomu_branch != 0) {
				el2nomu_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch el2nomu_branch does not exist!\n");
				exit(1);
			}
			el2nomu_isLoaded = true;
		}
		return el2nomu_;
	}
	int &el1nomuss()
	{
		if (not el1nomuss_isLoaded) {
			if (el1nomuss_branch != 0) {
				el1nomuss_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch el1nomuss_branch does not exist!\n");
				exit(1);
			}
			el1nomuss_isLoaded = true;
		}
		return el1nomuss_;
	}
	int &el2nomuss()
	{
		if (not el2nomuss_isLoaded) {
			if (el2nomuss_branch != 0) {
				el2nomuss_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch el2nomuss_branch does not exist!\n");
				exit(1);
			}
			el2nomuss_isLoaded = true;
		}
		return el2nomuss_;
	}
	float &tche1()
	{
		if (not tche1_isLoaded) {
			if (tche1_branch != 0) {
				tche1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tche1_branch does not exist!\n");
				exit(1);
			}
			tche1_isLoaded = true;
		}
		return tche1_;
	}
	float &tche2()
	{
		if (not tche2_isLoaded) {
			if (tche2_branch != 0) {
				tche2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tche2_branch does not exist!\n");
				exit(1);
			}
			tche2_isLoaded = true;
		}
		return tche2_;
	}
	float &tche3()
	{
		if (not tche3_isLoaded) {
			if (tche3_branch != 0) {
				tche3_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tche3_branch does not exist!\n");
				exit(1);
			}
			tche3_isLoaded = true;
		}
		return tche3_;
	}
	float &tche4()
	{
		if (not tche4_isLoaded) {
			if (tche4_branch != 0) {
				tche4_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tche4_branch does not exist!\n");
				exit(1);
			}
			tche4_isLoaded = true;
		}
		return tche4_;
	}
	float &tche5()
	{
		if (not tche5_isLoaded) {
			if (tche5_branch != 0) {
				tche5_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tche5_branch does not exist!\n");
				exit(1);
			}
			tche5_isLoaded = true;
		}
		return tche5_;
	}
	float &tche6()
	{
		if (not tche6_isLoaded) {
			if (tche6_branch != 0) {
				tche6_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tche6_branch does not exist!\n");
				exit(1);
			}
			tche6_isLoaded = true;
		}
		return tche6_;
	}
	float &tche7()
	{
		if (not tche7_isLoaded) {
			if (tche7_branch != 0) {
				tche7_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tche7_branch does not exist!\n");
				exit(1);
			}
			tche7_isLoaded = true;
		}
		return tche7_;
	}
	float &tche8()
	{
		if (not tche8_isLoaded) {
			if (tche8_branch != 0) {
				tche8_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tche8_branch does not exist!\n");
				exit(1);
			}
			tche8_isLoaded = true;
		}
		return tche8_;
	}
	float &csv1()
	{
		if (not csv1_isLoaded) {
			if (csv1_branch != 0) {
				csv1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch csv1_branch does not exist!\n");
				exit(1);
			}
			csv1_isLoaded = true;
		}
		return csv1_;
	}
	float &csv2()
	{
		if (not csv2_isLoaded) {
			if (csv2_branch != 0) {
				csv2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch csv2_branch does not exist!\n");
				exit(1);
			}
			csv2_isLoaded = true;
		}
		return csv2_;
	}
	float &csv3()
	{
		if (not csv3_isLoaded) {
			if (csv3_branch != 0) {
				csv3_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch csv3_branch does not exist!\n");
				exit(1);
			}
			csv3_isLoaded = true;
		}
		return csv3_;
	}
	float &csv4()
	{
		if (not csv4_isLoaded) {
			if (csv4_branch != 0) {
				csv4_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch csv4_branch does not exist!\n");
				exit(1);
			}
			csv4_isLoaded = true;
		}
		return csv4_;
	}
	float &csv5()
	{
		if (not csv5_isLoaded) {
			if (csv5_branch != 0) {
				csv5_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch csv5_branch does not exist!\n");
				exit(1);
			}
			csv5_isLoaded = true;
		}
		return csv5_;
	}
	float &csv6()
	{
		if (not csv6_isLoaded) {
			if (csv6_branch != 0) {
				csv6_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch csv6_branch does not exist!\n");
				exit(1);
			}
			csv6_isLoaded = true;
		}
		return csv6_;
	}
	float &csv7()
	{
		if (not csv7_isLoaded) {
			if (csv7_branch != 0) {
				csv7_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch csv7_branch does not exist!\n");
				exit(1);
			}
			csv7_isLoaded = true;
		}
		return csv7_;
	}
	float &csv8()
	{
		if (not csv8_isLoaded) {
			if (csv8_branch != 0) {
				csv8_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch csv8_branch does not exist!\n");
				exit(1);
			}
			csv8_isLoaded = true;
		}
		return csv8_;
	}
	float &jetunc1()
	{
		if (not jetunc1_isLoaded) {
			if (jetunc1_branch != 0) {
				jetunc1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetunc1_branch does not exist!\n");
				exit(1);
			}
			jetunc1_isLoaded = true;
		}
		return jetunc1_;
	}
	float &jetunc2()
	{
		if (not jetunc2_isLoaded) {
			if (jetunc2_branch != 0) {
				jetunc2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetunc2_branch does not exist!\n");
				exit(1);
			}
			jetunc2_isLoaded = true;
		}
		return jetunc2_;
	}
	float &jetunc3()
	{
		if (not jetunc3_isLoaded) {
			if (jetunc3_branch != 0) {
				jetunc3_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetunc3_branch does not exist!\n");
				exit(1);
			}
			jetunc3_isLoaded = true;
		}
		return jetunc3_;
	}
	float &jetunc4()
	{
		if (not jetunc4_isLoaded) {
			if (jetunc4_branch != 0) {
				jetunc4_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetunc4_branch does not exist!\n");
				exit(1);
			}
			jetunc4_isLoaded = true;
		}
		return jetunc4_;
	}
	float &jetunc5()
	{
		if (not jetunc5_isLoaded) {
			if (jetunc5_branch != 0) {
				jetunc5_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetunc5_branch does not exist!\n");
				exit(1);
			}
			jetunc5_isLoaded = true;
		}
		return jetunc5_;
	}
	float &jetunc6()
	{
		if (not jetunc6_isLoaded) {
			if (jetunc6_branch != 0) {
				jetunc6_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetunc6_branch does not exist!\n");
				exit(1);
			}
			jetunc6_isLoaded = true;
		}
		return jetunc6_;
	}
	float &jetunc7()
	{
		if (not jetunc7_isLoaded) {
			if (jetunc7_branch != 0) {
				jetunc7_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetunc7_branch does not exist!\n");
				exit(1);
			}
			jetunc7_isLoaded = true;
		}
		return jetunc7_;
	}
	float &jetunc8()
	{
		if (not jetunc8_isLoaded) {
			if (jetunc8_branch != 0) {
				jetunc8_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetunc8_branch does not exist!\n");
				exit(1);
			}
			jetunc8_isLoaded = true;
		}
		return jetunc8_;
	}
	int &jetgenb1()
	{
		if (not jetgenb1_isLoaded) {
			if (jetgenb1_branch != 0) {
				jetgenb1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetgenb1_branch does not exist!\n");
				exit(1);
			}
			jetgenb1_isLoaded = true;
		}
		return jetgenb1_;
	}
	int &jetgenb2()
	{
		if (not jetgenb2_isLoaded) {
			if (jetgenb2_branch != 0) {
				jetgenb2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetgenb2_branch does not exist!\n");
				exit(1);
			}
			jetgenb2_isLoaded = true;
		}
		return jetgenb2_;
	}
	int &jetgenb3()
	{
		if (not jetgenb3_isLoaded) {
			if (jetgenb3_branch != 0) {
				jetgenb3_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetgenb3_branch does not exist!\n");
				exit(1);
			}
			jetgenb3_isLoaded = true;
		}
		return jetgenb3_;
	}
	int &jetgenb4()
	{
		if (not jetgenb4_isLoaded) {
			if (jetgenb4_branch != 0) {
				jetgenb4_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetgenb4_branch does not exist!\n");
				exit(1);
			}
			jetgenb4_isLoaded = true;
		}
		return jetgenb4_;
	}
	int &jetgenb5()
	{
		if (not jetgenb5_isLoaded) {
			if (jetgenb5_branch != 0) {
				jetgenb5_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetgenb5_branch does not exist!\n");
				exit(1);
			}
			jetgenb5_isLoaded = true;
		}
		return jetgenb5_;
	}
	int &jetgenb6()
	{
		if (not jetgenb6_isLoaded) {
			if (jetgenb6_branch != 0) {
				jetgenb6_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetgenb6_branch does not exist!\n");
				exit(1);
			}
			jetgenb6_isLoaded = true;
		}
		return jetgenb6_;
	}
	int &jetgenb7()
	{
		if (not jetgenb7_isLoaded) {
			if (jetgenb7_branch != 0) {
				jetgenb7_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetgenb7_branch does not exist!\n");
				exit(1);
			}
			jetgenb7_isLoaded = true;
		}
		return jetgenb7_;
	}
	int &jetgenb8()
	{
		if (not jetgenb8_isLoaded) {
			if (jetgenb8_branch != 0) {
				jetgenb8_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jetgenb8_branch does not exist!\n");
				exit(1);
			}
			jetgenb8_isLoaded = true;
		}
		return jetgenb8_;
	}
	float &pfmett1new()
	{
		if (not pfmett1new_isLoaded) {
			if (pfmett1new_branch != 0) {
				pfmett1new_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfmett1new_branch does not exist!\n");
				exit(1);
			}
			pfmett1new_isLoaded = true;
		}
		return pfmett1new_;
	}
	float &pfmett1newphi()
	{
		if (not pfmett1newphi_isLoaded) {
			if (pfmett1newphi_branch != 0) {
				pfmett1newphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfmett1newphi_branch does not exist!\n");
				exit(1);
			}
			pfmett1newphi_isLoaded = true;
		}
		return pfmett1newphi_;
	}
	float &minmet()
	{
		if (not minmet_isLoaded) {
			if (minmet_branch != 0) {
				minmet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch minmet_branch does not exist!\n");
				exit(1);
			}
			minmet_isLoaded = true;
		}
		return minmet_;
	}
	float &trkmet()
	{
		if (not trkmet_isLoaded) {
			if (trkmet_branch != 0) {
				trkmet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkmet_branch does not exist!\n");
				exit(1);
			}
			trkmet_isLoaded = true;
		}
		return trkmet_;
	}
	float &trkmetphi()
	{
		if (not trkmetphi_isLoaded) {
			if (trkmetphi_branch != 0) {
				trkmetphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkmetphi_branch does not exist!\n");
				exit(1);
			}
			trkmetphi_isLoaded = true;
		}
		return trkmetphi_;
	}
	float &trksumet()
	{
		if (not trksumet_isLoaded) {
			if (trksumet_branch != 0) {
				trksumet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trksumet_branch does not exist!\n");
				exit(1);
			}
			trksumet_isLoaded = true;
		}
		return trksumet_;
	}
	float &pfmet()
	{
		if (not pfmet_isLoaded) {
			if (pfmet_branch != 0) {
				pfmet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfmet_branch does not exist!\n");
				exit(1);
			}
			pfmet_isLoaded = true;
		}
		return pfmet_;
	}
	float &pfmett1()
	{
		if (not pfmett1_isLoaded) {
			if (pfmett1_branch != 0) {
				pfmett1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfmett1_branch does not exist!\n");
				exit(1);
			}
			pfmett1_isLoaded = true;
		}
		return pfmett1_;
	}
	float &pfmett1phi()
	{
		if (not pfmett1phi_isLoaded) {
			if (pfmett1phi_branch != 0) {
				pfmett1phi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfmett1phi_branch does not exist!\n");
				exit(1);
			}
			pfmett1phi_isLoaded = true;
		}
		return pfmett1phi_;
	}
	float &pfmetup()
	{
		if (not pfmetup_isLoaded) {
			if (pfmetup_branch != 0) {
				pfmetup_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfmetup_branch does not exist!\n");
				exit(1);
			}
			pfmetup_isLoaded = true;
		}
		return pfmetup_;
	}
	float &pfmetdn()
	{
		if (not pfmetdn_isLoaded) {
			if (pfmetdn_branch != 0) {
				pfmetdn_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfmetdn_branch does not exist!\n");
				exit(1);
			}
			pfmetdn_isLoaded = true;
		}
		return pfmetdn_;
	}
	float &pfmetphi()
	{
		if (not pfmetphi_isLoaded) {
			if (pfmetphi_branch != 0) {
				pfmetphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfmetphi_branch does not exist!\n");
				exit(1);
			}
			pfmetphi_isLoaded = true;
		}
		return pfmetphi_;
	}
	float &pfsumet()
	{
		if (not pfsumet_isLoaded) {
			if (pfsumet_branch != 0) {
				pfsumet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfsumet_branch does not exist!\n");
				exit(1);
			}
			pfsumet_isLoaded = true;
		}
		return pfsumet_;
	}
	float &met()
	{
		if (not met_isLoaded) {
			if (met_branch != 0) {
				met_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch met_branch does not exist!\n");
				exit(1);
			}
			met_isLoaded = true;
		}
		return met_;
	}
	float &metphi()
	{
		if (not metphi_isLoaded) {
			if (metphi_branch != 0) {
				metphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch metphi_branch does not exist!\n");
				exit(1);
			}
			metphi_isLoaded = true;
		}
		return metphi_;
	}
	float &sumet()
	{
		if (not sumet_isLoaded) {
			if (sumet_branch != 0) {
				sumet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch sumet_branch does not exist!\n");
				exit(1);
			}
			sumet_isLoaded = true;
		}
		return sumet_;
	}
	float &mumet()
	{
		if (not mumet_isLoaded) {
			if (mumet_branch != 0) {
				mumet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mumet_branch does not exist!\n");
				exit(1);
			}
			mumet_isLoaded = true;
		}
		return mumet_;
	}
	float &mumetphi()
	{
		if (not mumetphi_isLoaded) {
			if (mumetphi_branch != 0) {
				mumetphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mumetphi_branch does not exist!\n");
				exit(1);
			}
			mumetphi_isLoaded = true;
		}
		return mumetphi_;
	}
	float &musumet()
	{
		if (not musumet_isLoaded) {
			if (musumet_branch != 0) {
				musumet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch musumet_branch does not exist!\n");
				exit(1);
			}
			musumet_isLoaded = true;
		}
		return musumet_;
	}
	float &mujesmet()
	{
		if (not mujesmet_isLoaded) {
			if (mujesmet_branch != 0) {
				mujesmet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mujesmet_branch does not exist!\n");
				exit(1);
			}
			mujesmet_isLoaded = true;
		}
		return mujesmet_;
	}
	float &mujesmetphi()
	{
		if (not mujesmetphi_isLoaded) {
			if (mujesmetphi_branch != 0) {
				mujesmetphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mujesmetphi_branch does not exist!\n");
				exit(1);
			}
			mujesmetphi_isLoaded = true;
		}
		return mujesmetphi_;
	}
	float &mujessumet()
	{
		if (not mujessumet_isLoaded) {
			if (mujessumet_branch != 0) {
				mujessumet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch mujessumet_branch does not exist!\n");
				exit(1);
			}
			mujessumet_isLoaded = true;
		}
		return mujessumet_;
	}
	float &genmet()
	{
		if (not genmet_isLoaded) {
			if (genmet_branch != 0) {
				genmet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genmet_branch does not exist!\n");
				exit(1);
			}
			genmet_isLoaded = true;
		}
		return genmet_;
	}
	float &genmetcustom()
	{
		if (not genmetcustom_isLoaded) {
			if (genmetcustom_branch != 0) {
				genmetcustom_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genmetcustom_branch does not exist!\n");
				exit(1);
			}
			genmetcustom_isLoaded = true;
		}
		return genmetcustom_;
	}
	float &genmetphi()
	{
		if (not genmetphi_isLoaded) {
			if (genmetphi_branch != 0) {
				genmetphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genmetphi_branch does not exist!\n");
				exit(1);
			}
			genmetphi_isLoaded = true;
		}
		return genmetphi_;
	}
	float &gensumet()
	{
		if (not gensumet_isLoaded) {
			if (gensumet_branch != 0) {
				gensumet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch gensumet_branch does not exist!\n");
				exit(1);
			}
			gensumet_isLoaded = true;
		}
		return gensumet_;
	}
	float &dphixmet()
	{
		if (not dphixmet_isLoaded) {
			if (dphixmet_branch != 0) {
				dphixmet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch dphixmet_branch does not exist!\n");
				exit(1);
			}
			dphixmet_isLoaded = true;
		}
		return dphixmet_;
	}
	float &metpar()
	{
		if (not metpar_isLoaded) {
			if (metpar_branch != 0) {
				metpar_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch metpar_branch does not exist!\n");
				exit(1);
			}
			metpar_isLoaded = true;
		}
		return metpar_;
	}
	float &metperp()
	{
		if (not metperp_isLoaded) {
			if (metperp_branch != 0) {
				metperp_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch metperp_branch does not exist!\n");
				exit(1);
			}
			metperp_isLoaded = true;
		}
		return metperp_;
	}
	float &tcmet()
	{
		if (not tcmet_isLoaded) {
			if (tcmet_branch != 0) {
				tcmet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tcmet_branch does not exist!\n");
				exit(1);
			}
			tcmet_isLoaded = true;
		}
		return tcmet_;
	}
	float &tcmetphi()
	{
		if (not tcmetphi_isLoaded) {
			if (tcmetphi_branch != 0) {
				tcmetphi_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tcmetphi_branch does not exist!\n");
				exit(1);
			}
			tcmetphi_isLoaded = true;
		}
		return tcmetphi_;
	}
	float &tcsumet()
	{
		if (not tcsumet_isLoaded) {
			if (tcsumet_branch != 0) {
				tcsumet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tcsumet_branch does not exist!\n");
				exit(1);
			}
			tcsumet_isLoaded = true;
		}
		return tcsumet_;
	}
	float &tcmetNew()
	{
		if (not tcmetNew_isLoaded) {
			if (tcmetNew_branch != 0) {
				tcmetNew_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tcmetNew_branch does not exist!\n");
				exit(1);
			}
			tcmetNew_isLoaded = true;
		}
		return tcmetNew_;
	}
	float &tcmetphiNew()
	{
		if (not tcmetphiNew_isLoaded) {
			if (tcmetphiNew_branch != 0) {
				tcmetphiNew_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tcmetphiNew_branch does not exist!\n");
				exit(1);
			}
			tcmetphiNew_isLoaded = true;
		}
		return tcmetphiNew_;
	}
	float &tcsumetNew()
	{
		if (not tcsumetNew_isLoaded) {
			if (tcsumetNew_branch != 0) {
				tcsumetNew_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tcsumetNew_branch does not exist!\n");
				exit(1);
			}
			tcsumetNew_isLoaded = true;
		}
		return tcsumetNew_;
	}
	float &tcmetcor()
	{
		if (not tcmetcor_isLoaded) {
			if (tcmetcor_branch != 0) {
				tcmetcor_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch tcmetcor_branch does not exist!\n");
				exit(1);
			}
			tcmetcor_isLoaded = true;
		}
		return tcmetcor_;
	}
	float &pfmetcor()
	{
		if (not pfmetcor_isLoaded) {
			if (pfmetcor_branch != 0) {
				pfmetcor_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfmetcor_branch does not exist!\n");
				exit(1);
			}
			pfmetcor_isLoaded = true;
		}
		return pfmetcor_;
	}
	int &njets()
	{
		if (not njets_isLoaded) {
			if (njets_branch != 0) {
				njets_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch njets_branch does not exist!\n");
				exit(1);
			}
			njets_isLoaded = true;
		}
		return njets_;
	}
	int &njetsold()
	{
		if (not njetsold_isLoaded) {
			if (njetsold_branch != 0) {
				njetsold_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch njetsold_branch does not exist!\n");
				exit(1);
			}
			njetsold_isLoaded = true;
		}
		return njetsold_;
	}
	int &njetsres()
	{
		if (not njetsres_isLoaded) {
			if (njetsres_branch != 0) {
				njetsres_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch njetsres_branch does not exist!\n");
				exit(1);
			}
			njetsres_isLoaded = true;
		}
		return njetsres_;
	}
	int &njetsup()
	{
		if (not njetsup_isLoaded) {
			if (njetsup_branch != 0) {
				njetsup_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch njetsup_branch does not exist!\n");
				exit(1);
			}
			njetsup_isLoaded = true;
		}
		return njetsup_;
	}
	int &njetsdn()
	{
		if (not njetsdn_isLoaded) {
			if (njetsdn_branch != 0) {
				njetsdn_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch njetsdn_branch does not exist!\n");
				exit(1);
			}
			njetsdn_isLoaded = true;
		}
		return njetsdn_;
	}
	int &njpt()
	{
		if (not njpt_isLoaded) {
			if (njpt_branch != 0) {
				njpt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch njpt_branch does not exist!\n");
				exit(1);
			}
			njpt_isLoaded = true;
		}
		return njpt_;
	}
	int &njets40()
	{
		if (not njets40_isLoaded) {
			if (njets40_branch != 0) {
				njets40_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch njets40_branch does not exist!\n");
				exit(1);
			}
			njets40_isLoaded = true;
		}
		return njets40_;
	}
	int &njets40up()
	{
		if (not njets40up_isLoaded) {
			if (njets40up_branch != 0) {
				njets40up_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch njets40up_branch does not exist!\n");
				exit(1);
			}
			njets40up_isLoaded = true;
		}
		return njets40up_;
	}
	int &njets40dn()
	{
		if (not njets40dn_isLoaded) {
			if (njets40dn_branch != 0) {
				njets40dn_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch njets40dn_branch does not exist!\n");
				exit(1);
			}
			njets40dn_isLoaded = true;
		}
		return njets40dn_;
	}
	float &sumjetpt()
	{
		if (not sumjetpt_isLoaded) {
			if (sumjetpt_branch != 0) {
				sumjetpt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch sumjetpt_branch does not exist!\n");
				exit(1);
			}
			sumjetpt_isLoaded = true;
		}
		return sumjetpt_;
	}
	float &sumjetpt10()
	{
		if (not sumjetpt10_isLoaded) {
			if (sumjetpt10_branch != 0) {
				sumjetpt10_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch sumjetpt10_branch does not exist!\n");
				exit(1);
			}
			sumjetpt10_isLoaded = true;
		}
		return sumjetpt10_;
	}
	float &vecjetpt()
	{
		if (not vecjetpt_isLoaded) {
			if (vecjetpt_branch != 0) {
				vecjetpt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch vecjetpt_branch does not exist!\n");
				exit(1);
			}
			vecjetpt_isLoaded = true;
		}
		return vecjetpt_;
	}
	int &nbtags()
	{
		if (not nbtags_isLoaded) {
			if (nbtags_branch != 0) {
				nbtags_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nbtags_branch does not exist!\n");
				exit(1);
			}
			nbtags_isLoaded = true;
		}
		return nbtags_;
	}
	int &nbl()
	{
		if (not nbl_isLoaded) {
			if (nbl_branch != 0) {
				nbl_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nbl_branch does not exist!\n");
				exit(1);
			}
			nbl_isLoaded = true;
		}
		return nbl_;
	}
	int &nbm()
	{
		if (not nbm_isLoaded) {
			if (nbm_branch != 0) {
				nbm_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nbm_branch does not exist!\n");
				exit(1);
			}
			nbm_isLoaded = true;
		}
		return nbm_;
	}
	float &ndphijetmet()
	{
		if (not ndphijetmet_isLoaded) {
			if (ndphijetmet_branch != 0) {
				ndphijetmet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ndphijetmet_branch does not exist!\n");
				exit(1);
			}
			ndphijetmet_isLoaded = true;
		}
		return ndphijetmet_;
	}
	float &maxjetpt()
	{
		if (not maxjetpt_isLoaded) {
			if (maxjetpt_branch != 0) {
				maxjetpt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch maxjetpt_branch does not exist!\n");
				exit(1);
			}
			maxjetpt_isLoaded = true;
		}
		return maxjetpt_;
	}
	float &maxjetdphimet()
	{
		if (not maxjetdphimet_isLoaded) {
			if (maxjetdphimet_branch != 0) {
				maxjetdphimet_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch maxjetdphimet_branch does not exist!\n");
				exit(1);
			}
			maxjetdphimet_isLoaded = true;
		}
		return maxjetdphimet_;
	}
	int &leptype()
	{
		if (not leptype_isLoaded) {
			if (leptype_branch != 0) {
				leptype_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch leptype_branch does not exist!\n");
				exit(1);
			}
			leptype_isLoaded = true;
		}
		return leptype_;
	}
	int &ecaltype()
	{
		if (not ecaltype_isLoaded) {
			if (ecaltype_branch != 0) {
				ecaltype_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ecaltype_branch does not exist!\n");
				exit(1);
			}
			ecaltype_isLoaded = true;
		}
		return ecaltype_;
	}
	int &passz()
	{
		if (not passz_isLoaded) {
			if (passz_branch != 0) {
				passz_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch passz_branch does not exist!\n");
				exit(1);
			}
			passz_isLoaded = true;
		}
		return passz_;
	}
	int &pdgid()
	{
		if (not pdgid_isLoaded) {
			if (pdgid_branch != 0) {
				pdgid_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pdgid_branch does not exist!\n");
				exit(1);
			}
			pdgid_isLoaded = true;
		}
		return pdgid_;
	}
	float &dpdm()
	{
		if (not dpdm_isLoaded) {
			if (dpdm_branch != 0) {
				dpdm_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch dpdm_branch does not exist!\n");
				exit(1);
			}
			dpdm_isLoaded = true;
		}
		return dpdm_;
	}
	float &meterror()
	{
		if (not meterror_isLoaded) {
			if (meterror_branch != 0) {
				meterror_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch meterror_branch does not exist!\n");
				exit(1);
			}
			meterror_isLoaded = true;
		}
		return meterror_;
	}
	float &meterrorc()
	{
		if (not meterrorc_isLoaded) {
			if (meterrorc_branch != 0) {
				meterrorc_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch meterrorc_branch does not exist!\n");
				exit(1);
			}
			meterrorc_isLoaded = true;
		}
		return meterrorc_;
	}
	float &ptll()
	{
		if (not ptll_isLoaded) {
			if (ptll_branch != 0) {
				ptll_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptll_branch does not exist!\n");
				exit(1);
			}
			ptll_isLoaded = true;
		}
		return ptll_;
	}
	float &ptlt()
	{
		if (not ptlt_isLoaded) {
			if (ptlt_branch != 0) {
				ptlt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptlt_branch does not exist!\n");
				exit(1);
			}
			ptlt_isLoaded = true;
		}
		return ptlt_;
	}
	float &pterrll()
	{
		if (not pterrll_isLoaded) {
			if (pterrll_branch != 0) {
				pterrll_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pterrll_branch does not exist!\n");
				exit(1);
			}
			pterrll_isLoaded = true;
		}
		return pterrll_;
	}
	float &pterrlt()
	{
		if (not pterrlt_isLoaded) {
			if (pterrlt_branch != 0) {
				pterrlt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pterrlt_branch does not exist!\n");
				exit(1);
			}
			pterrlt_isLoaded = true;
		}
		return pterrlt_;
	}
	float &ptlltrk()
	{
		if (not ptlltrk_isLoaded) {
			if (ptlltrk_branch != 0) {
				ptlltrk_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptlltrk_branch does not exist!\n");
				exit(1);
			}
			ptlltrk_isLoaded = true;
		}
		return ptlltrk_;
	}
	float &ptlttrk()
	{
		if (not ptlttrk_isLoaded) {
			if (ptlttrk_branch != 0) {
				ptlttrk_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptlttrk_branch does not exist!\n");
				exit(1);
			}
			ptlttrk_isLoaded = true;
		}
		return ptlttrk_;
	}
	float &ptllgfit()
	{
		if (not ptllgfit_isLoaded) {
			if (ptllgfit_branch != 0) {
				ptllgfit_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptllgfit_branch does not exist!\n");
				exit(1);
			}
			ptllgfit_isLoaded = true;
		}
		return ptllgfit_;
	}
	float &ptltgfit()
	{
		if (not ptltgfit_isLoaded) {
			if (ptltgfit_branch != 0) {
				ptltgfit_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptltgfit_branch does not exist!\n");
				exit(1);
			}
			ptltgfit_isLoaded = true;
		}
		return ptltgfit_;
	}
	float &ptllpf()
	{
		if (not ptllpf_isLoaded) {
			if (ptllpf_branch != 0) {
				ptllpf_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptllpf_branch does not exist!\n");
				exit(1);
			}
			ptllpf_isLoaded = true;
		}
		return ptllpf_;
	}
	float &ptltpf()
	{
		if (not ptltpf_isLoaded) {
			if (ptltpf_branch != 0) {
				ptltpf_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptltpf_branch does not exist!\n");
				exit(1);
			}
			ptltpf_isLoaded = true;
		}
		return ptltpf_;
	}
	float &ptllgen()
	{
		if (not ptllgen_isLoaded) {
			if (ptllgen_branch != 0) {
				ptllgen_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptllgen_branch does not exist!\n");
				exit(1);
			}
			ptllgen_isLoaded = true;
		}
		return ptllgen_;
	}
	float &ptltgen()
	{
		if (not ptltgen_isLoaded) {
			if (ptltgen_branch != 0) {
				ptltgen_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ptltgen_branch does not exist!\n");
				exit(1);
			}
			ptltgen_isLoaded = true;
		}
		return ptltgen_;
	}
	int &npfmuons()
	{
		if (not npfmuons_isLoaded) {
			if (npfmuons_branch != 0) {
				npfmuons_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch npfmuons_branch does not exist!\n");
				exit(1);
			}
			npfmuons_isLoaded = true;
		}
		return npfmuons_;
	}
	int &nmatchedpfmuons()
	{
		if (not nmatchedpfmuons_isLoaded) {
			if (nmatchedpfmuons_branch != 0) {
				nmatchedpfmuons_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nmatchedpfmuons_branch does not exist!\n");
				exit(1);
			}
			nmatchedpfmuons_isLoaded = true;
		}
		return nmatchedpfmuons_;
	}
	int &idll()
	{
		if (not idll_isLoaded) {
			if (idll_branch != 0) {
				idll_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch idll_branch does not exist!\n");
				exit(1);
			}
			idll_isLoaded = true;
		}
		return idll_;
	}
	int &idlt()
	{
		if (not idlt_isLoaded) {
			if (idlt_branch != 0) {
				idlt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch idlt_branch does not exist!\n");
				exit(1);
			}
			idlt_isLoaded = true;
		}
		return idlt_;
	}
	float &etall()
	{
		if (not etall_isLoaded) {
			if (etall_branch != 0) {
				etall_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch etall_branch does not exist!\n");
				exit(1);
			}
			etall_isLoaded = true;
		}
		return etall_;
	}
	float &etalt()
	{
		if (not etalt_isLoaded) {
			if (etalt_branch != 0) {
				etalt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch etalt_branch does not exist!\n");
				exit(1);
			}
			etalt_isLoaded = true;
		}
		return etalt_;
	}
	float &phill()
	{
		if (not phill_isLoaded) {
			if (phill_branch != 0) {
				phill_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch phill_branch does not exist!\n");
				exit(1);
			}
			phill_isLoaded = true;
		}
		return phill_;
	}
	float &philt()
	{
		if (not philt_isLoaded) {
			if (philt_branch != 0) {
				philt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch philt_branch does not exist!\n");
				exit(1);
			}
			philt_isLoaded = true;
		}
		return philt_;
	}
	float &dilmass()
	{
		if (not dilmass_isLoaded) {
			if (dilmass_branch != 0) {
				dilmass_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch dilmass_branch does not exist!\n");
				exit(1);
			}
			dilmass_isLoaded = true;
		}
		return dilmass_;
	}
	float &dilmasspf()
	{
		if (not dilmasspf_isLoaded) {
			if (dilmasspf_branch != 0) {
				dilmasspf_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch dilmasspf_branch does not exist!\n");
				exit(1);
			}
			dilmasspf_isLoaded = true;
		}
		return dilmasspf_;
	}
	float &dilmasscor()
	{
		if (not dilmasscor_isLoaded) {
			if (dilmasscor_branch != 0) {
				dilmasscor_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch dilmasscor_branch does not exist!\n");
				exit(1);
			}
			dilmasscor_isLoaded = true;
		}
		return dilmasscor_;
	}
	float &dilpt()
	{
		if (not dilpt_isLoaded) {
			if (dilpt_branch != 0) {
				dilpt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch dilpt_branch does not exist!\n");
				exit(1);
			}
			dilpt_isLoaded = true;
		}
		return dilpt_;
	}
	int &flagll()
	{
		if (not flagll_isLoaded) {
			if (flagll_branch != 0) {
				flagll_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch flagll_branch does not exist!\n");
				exit(1);
			}
			flagll_isLoaded = true;
		}
		return flagll_;
	}
	int &flaglt()
	{
		if (not flaglt_isLoaded) {
			if (flaglt_branch != 0) {
				flaglt_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch flaglt_branch does not exist!\n");
				exit(1);
			}
			flaglt_isLoaded = true;
		}
		return flaglt_;
	}
	int &isdata()
	{
		if (not isdata_isLoaded) {
			if (isdata_branch != 0) {
				isdata_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch isdata_branch does not exist!\n");
				exit(1);
			}
			isdata_isLoaded = true;
		}
		return isdata_;
	}
	float &lljj()
	{
		if (not lljj_isLoaded) {
			if (lljj_branch != 0) {
				lljj_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch lljj_branch does not exist!\n");
				exit(1);
			}
			lljj_isLoaded = true;
		}
		return lljj_;
	}
	float &jj()
	{
		if (not jj_isLoaded) {
			if (jj_branch != 0) {
				jj_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jj_branch does not exist!\n");
				exit(1);
			}
			jj_isLoaded = true;
		}
		return jj_;
	}
	float &l1jj()
	{
		if (not l1jj_isLoaded) {
			if (l1jj_branch != 0) {
				l1jj_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1jj_branch does not exist!\n");
				exit(1);
			}
			l1jj_isLoaded = true;
		}
		return l1jj_;
	}
	float &l2jj()
	{
		if (not l2jj_isLoaded) {
			if (l2jj_branch != 0) {
				l2jj_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l2jj_branch does not exist!\n");
				exit(1);
			}
			l2jj_isLoaded = true;
		}
		return l2jj_;
	}
	float &j1ll()
	{
		if (not j1ll_isLoaded) {
			if (j1ll_branch != 0) {
				j1ll_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch j1ll_branch does not exist!\n");
				exit(1);
			}
			j1ll_isLoaded = true;
		}
		return j1ll_;
	}
	float &j2ll()
	{
		if (not j2ll_isLoaded) {
			if (j2ll_branch != 0) {
				j2ll_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch j2ll_branch does not exist!\n");
				exit(1);
			}
			j2ll_isLoaded = true;
		}
		return j2ll_;
	}
	float &l1j1()
	{
		if (not l1j1_isLoaded) {
			if (l1j1_branch != 0) {
				l1j1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1j1_branch does not exist!\n");
				exit(1);
			}
			l1j1_isLoaded = true;
		}
		return l1j1_;
	}
	float &l2j2()
	{
		if (not l2j2_isLoaded) {
			if (l2j2_branch != 0) {
				l2j2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l2j2_branch does not exist!\n");
				exit(1);
			}
			l2j2_isLoaded = true;
		}
		return l2j2_;
	}
	float &l1j2()
	{
		if (not l1j2_isLoaded) {
			if (l1j2_branch != 0) {
				l1j2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l1j2_branch does not exist!\n");
				exit(1);
			}
			l1j2_isLoaded = true;
		}
		return l1j2_;
	}
	float &l2j1()
	{
		if (not l2j1_isLoaded) {
			if (l2j1_branch != 0) {
				l2j1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch l2j1_branch does not exist!\n");
				exit(1);
			}
			l2j1_isLoaded = true;
		}
		return l2j1_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &dilep()
	{
		if (not dilep_isLoaded) {
			if (dilep_branch != 0) {
				dilep_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(dilep_->pt(), &e);
				if (not isfinite(dilep_->pt()) || e > 30) {
					printf("branch dilep_branch contains a bad float: %f\n", dilep_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch dilep_branch does not exist!\n");
				exit(1);
			}
			dilep_isLoaded = true;
		}
		return *dilep_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &dileppf()
	{
		if (not dileppf_isLoaded) {
			if (dileppf_branch != 0) {
				dileppf_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(dileppf_->pt(), &e);
				if (not isfinite(dileppf_->pt()) || e > 30) {
					printf("branch dileppf_branch contains a bad float: %f\n", dileppf_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch dileppf_branch does not exist!\n");
				exit(1);
			}
			dileppf_isLoaded = true;
		}
		return *dileppf_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &w()
	{
		if (not w_isLoaded) {
			if (w_branch != 0) {
				w_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(w_->pt(), &e);
				if (not isfinite(w_->pt()) || e > 30) {
					printf("branch w_branch contains a bad float: %f\n", w_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch w_branch does not exist!\n");
				exit(1);
			}
			w_isLoaded = true;
		}
		return *w_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1()
	{
		if (not lep1_isLoaded) {
			if (lep1_branch != 0) {
				lep1_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(lep1_->pt(), &e);
				if (not isfinite(lep1_->pt()) || e > 30) {
					printf("branch lep1_branch contains a bad float: %f\n", lep1_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch lep1_branch does not exist!\n");
				exit(1);
			}
			lep1_isLoaded = true;
		}
		return *lep1_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2()
	{
		if (not lep2_isLoaded) {
			if (lep2_branch != 0) {
				lep2_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(lep2_->pt(), &e);
				if (not isfinite(lep2_->pt()) || e > 30) {
					printf("branch lep2_branch contains a bad float: %f\n", lep2_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch lep2_branch does not exist!\n");
				exit(1);
			}
			lep2_isLoaded = true;
		}
		return *lep2_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3()
	{
		if (not lep3_isLoaded) {
			if (lep3_branch != 0) {
				lep3_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(lep3_->pt(), &e);
				if (not isfinite(lep3_->pt()) || e > 30) {
					printf("branch lep3_branch contains a bad float: %f\n", lep3_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch lep3_branch does not exist!\n");
				exit(1);
			}
			lep3_isLoaded = true;
		}
		return *lep3_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep4()
	{
		if (not lep4_isLoaded) {
			if (lep4_branch != 0) {
				lep4_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(lep4_->pt(), &e);
				if (not isfinite(lep4_->pt()) || e > 30) {
					printf("branch lep4_branch contains a bad float: %f\n", lep4_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch lep4_branch does not exist!\n");
				exit(1);
			}
			lep4_isLoaded = true;
		}
		return *lep4_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep5()
	{
		if (not lep5_isLoaded) {
			if (lep5_branch != 0) {
				lep5_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(lep5_->pt(), &e);
				if (not isfinite(lep5_->pt()) || e > 30) {
					printf("branch lep5_branch contains a bad float: %f\n", lep5_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch lep5_branch does not exist!\n");
				exit(1);
			}
			lep5_isLoaded = true;
		}
		return *lep5_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep6()
	{
		if (not lep6_isLoaded) {
			if (lep6_branch != 0) {
				lep6_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(lep6_->pt(), &e);
				if (not isfinite(lep6_->pt()) || e > 30) {
					printf("branch lep6_branch contains a bad float: %f\n", lep6_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch lep6_branch does not exist!\n");
				exit(1);
			}
			lep6_isLoaded = true;
		}
		return *lep6_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pflep1()
	{
		if (not pflep1_isLoaded) {
			if (pflep1_branch != 0) {
				pflep1_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(pflep1_->pt(), &e);
				if (not isfinite(pflep1_->pt()) || e > 30) {
					printf("branch pflep1_branch contains a bad float: %f\n", pflep1_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pflep1_branch does not exist!\n");
				exit(1);
			}
			pflep1_isLoaded = true;
		}
		return *pflep1_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pflep2()
	{
		if (not pflep2_isLoaded) {
			if (pflep2_branch != 0) {
				pflep2_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(pflep2_->pt(), &e);
				if (not isfinite(pflep2_->pt()) || e > 30) {
					printf("branch pflep2_branch contains a bad float: %f\n", pflep2_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pflep2_branch does not exist!\n");
				exit(1);
			}
			pflep2_isLoaded = true;
		}
		return *pflep2_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genlep1()
	{
		if (not genlep1_isLoaded) {
			if (genlep1_branch != 0) {
				genlep1_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(genlep1_->pt(), &e);
				if (not isfinite(genlep1_->pt()) || e > 30) {
					printf("branch genlep1_branch contains a bad float: %f\n", genlep1_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genlep1_branch does not exist!\n");
				exit(1);
			}
			genlep1_isLoaded = true;
		}
		return *genlep1_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genlep2()
	{
		if (not genlep2_isLoaded) {
			if (genlep2_branch != 0) {
				genlep2_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(genlep2_->pt(), &e);
				if (not isfinite(genlep2_->pt()) || e > 30) {
					printf("branch genlep2_branch contains a bad float: %f\n", genlep2_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genlep2_branch does not exist!\n");
				exit(1);
			}
			genlep2_isLoaded = true;
		}
		return *genlep2_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gennu1()
	{
		if (not gennu1_isLoaded) {
			if (gennu1_branch != 0) {
				gennu1_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(gennu1_->pt(), &e);
				if (not isfinite(gennu1_->pt()) || e > 30) {
					printf("branch gennu1_branch contains a bad float: %f\n", gennu1_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch gennu1_branch does not exist!\n");
				exit(1);
			}
			gennu1_isLoaded = true;
		}
		return *gennu1_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gennu2()
	{
		if (not gennu2_isLoaded) {
			if (gennu2_branch != 0) {
				gennu2_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(gennu2_->pt(), &e);
				if (not isfinite(gennu2_->pt()) || e > 30) {
					printf("branch gennu2_branch contains a bad float: %f\n", gennu2_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch gennu2_branch does not exist!\n");
				exit(1);
			}
			gennu2_isLoaded = true;
		}
		return *gennu2_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfTau_leadPtcand()
	{
		if (not pfTau_leadPtcand_isLoaded) {
			if (pfTau_leadPtcand_branch != 0) {
				pfTau_leadPtcand_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(pfTau_leadPtcand_->pt(), &e);
				if (not isfinite(pfTau_leadPtcand_->pt()) || e > 30) {
					printf("branch pfTau_leadPtcand_branch contains a bad float: %f\n", pfTau_leadPtcand_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfTau_leadPtcand_branch does not exist!\n");
				exit(1);
			}
			pfTau_leadPtcand_isLoaded = true;
		}
		return *pfTau_leadPtcand_;
	}
	int &pfTau_leadPtcandID()
	{
		if (not pfTau_leadPtcandID_isLoaded) {
			if (pfTau_leadPtcandID_branch != 0) {
				pfTau_leadPtcandID_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pfTau_leadPtcandID_branch does not exist!\n");
				exit(1);
			}
			pfTau_leadPtcandID_isLoaded = true;
		}
		return pfTau_leadPtcandID_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet1()
	{
		if (not jet1_isLoaded) {
			if (jet1_branch != 0) {
				jet1_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(jet1_->pt(), &e);
				if (not isfinite(jet1_->pt()) || e > 30) {
					printf("branch jet1_branch contains a bad float: %f\n", jet1_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1_branch does not exist!\n");
				exit(1);
			}
			jet1_isLoaded = true;
		}
		return *jet1_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet2()
	{
		if (not jet2_isLoaded) {
			if (jet2_branch != 0) {
				jet2_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(jet2_->pt(), &e);
				if (not isfinite(jet2_->pt()) || e > 30) {
					printf("branch jet2_branch contains a bad float: %f\n", jet2_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2_branch does not exist!\n");
				exit(1);
			}
			jet2_isLoaded = true;
		}
		return *jet2_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet3()
	{
		if (not jet3_isLoaded) {
			if (jet3_branch != 0) {
				jet3_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(jet3_->pt(), &e);
				if (not isfinite(jet3_->pt()) || e > 30) {
					printf("branch jet3_branch contains a bad float: %f\n", jet3_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3_branch does not exist!\n");
				exit(1);
			}
			jet3_isLoaded = true;
		}
		return *jet3_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet4()
	{
		if (not jet4_isLoaded) {
			if (jet4_branch != 0) {
				jet4_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(jet4_->pt(), &e);
				if (not isfinite(jet4_->pt()) || e > 30) {
					printf("branch jet4_branch contains a bad float: %f\n", jet4_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4_branch does not exist!\n");
				exit(1);
			}
			jet4_isLoaded = true;
		}
		return *jet4_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet5()
	{
		if (not jet5_isLoaded) {
			if (jet5_branch != 0) {
				jet5_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(jet5_->pt(), &e);
				if (not isfinite(jet5_->pt()) || e > 30) {
					printf("branch jet5_branch contains a bad float: %f\n", jet5_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet5_branch does not exist!\n");
				exit(1);
			}
			jet5_isLoaded = true;
		}
		return *jet5_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet6()
	{
		if (not jet6_isLoaded) {
			if (jet6_branch != 0) {
				jet6_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(jet6_->pt(), &e);
				if (not isfinite(jet6_->pt()) || e > 30) {
					printf("branch jet6_branch contains a bad float: %f\n", jet6_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet6_branch does not exist!\n");
				exit(1);
			}
			jet6_isLoaded = true;
		}
		return *jet6_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet7()
	{
		if (not jet7_isLoaded) {
			if (jet7_branch != 0) {
				jet7_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(jet7_->pt(), &e);
				if (not isfinite(jet7_->pt()) || e > 30) {
					printf("branch jet7_branch contains a bad float: %f\n", jet7_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet7_branch does not exist!\n");
				exit(1);
			}
			jet7_isLoaded = true;
		}
		return *jet7_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet8()
	{
		if (not jet8_isLoaded) {
			if (jet8_branch != 0) {
				jet8_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(jet8_->pt(), &e);
				if (not isfinite(jet8_->pt()) || e > 30) {
					printf("branch jet8_branch contains a bad float: %f\n", jet8_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet8_branch does not exist!\n");
				exit(1);
			}
			jet8_isLoaded = true;
		}
		return *jet8_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &subthreshjetup1()
	{
		if (not subthreshjetup1_isLoaded) {
			if (subthreshjetup1_branch != 0) {
				subthreshjetup1_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(subthreshjetup1_->pt(), &e);
				if (not isfinite(subthreshjetup1_->pt()) || e > 30) {
					printf("branch subthreshjetup1_branch contains a bad float: %f\n", subthreshjetup1_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch subthreshjetup1_branch does not exist!\n");
				exit(1);
			}
			subthreshjetup1_isLoaded = true;
		}
		return *subthreshjetup1_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &subthreshjetup2()
	{
		if (not subthreshjetup2_isLoaded) {
			if (subthreshjetup2_branch != 0) {
				subthreshjetup2_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(subthreshjetup2_->pt(), &e);
				if (not isfinite(subthreshjetup2_->pt()) || e > 30) {
					printf("branch subthreshjetup2_branch contains a bad float: %f\n", subthreshjetup2_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch subthreshjetup2_branch does not exist!\n");
				exit(1);
			}
			subthreshjetup2_isLoaded = true;
		}
		return *subthreshjetup2_;
	}
	int &jet1mcfa()
	{
		if (not jet1mcfa_isLoaded) {
			if (jet1mcfa_branch != 0) {
				jet1mcfa_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1mcfa_branch does not exist!\n");
				exit(1);
			}
			jet1mcfa_isLoaded = true;
		}
		return jet1mcfa_;
	}
	int &jet2mcfa()
	{
		if (not jet2mcfa_isLoaded) {
			if (jet2mcfa_branch != 0) {
				jet2mcfa_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2mcfa_branch does not exist!\n");
				exit(1);
			}
			jet2mcfa_isLoaded = true;
		}
		return jet2mcfa_;
	}
	int &jet3mcfa()
	{
		if (not jet3mcfa_isLoaded) {
			if (jet3mcfa_branch != 0) {
				jet3mcfa_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3mcfa_branch does not exist!\n");
				exit(1);
			}
			jet3mcfa_isLoaded = true;
		}
		return jet3mcfa_;
	}
	int &jet4mcfa()
	{
		if (not jet4mcfa_isLoaded) {
			if (jet4mcfa_branch != 0) {
				jet4mcfa_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4mcfa_branch does not exist!\n");
				exit(1);
			}
			jet4mcfa_isLoaded = true;
		}
		return jet4mcfa_;
	}
	int &jet1mcfp()
	{
		if (not jet1mcfp_isLoaded) {
			if (jet1mcfp_branch != 0) {
				jet1mcfp_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet1mcfp_branch does not exist!\n");
				exit(1);
			}
			jet1mcfp_isLoaded = true;
		}
		return jet1mcfp_;
	}
	int &jet2mcfp()
	{
		if (not jet2mcfp_isLoaded) {
			if (jet2mcfp_branch != 0) {
				jet2mcfp_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet2mcfp_branch does not exist!\n");
				exit(1);
			}
			jet2mcfp_isLoaded = true;
		}
		return jet2mcfp_;
	}
	int &jet3mcfp()
	{
		if (not jet3mcfp_isLoaded) {
			if (jet3mcfp_branch != 0) {
				jet3mcfp_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet3mcfp_branch does not exist!\n");
				exit(1);
			}
			jet3mcfp_isLoaded = true;
		}
		return jet3mcfp_;
	}
	int &jet4mcfp()
	{
		if (not jet4mcfp_isLoaded) {
			if (jet4mcfp_branch != 0) {
				jet4mcfp_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch jet4mcfp_branch does not exist!\n");
				exit(1);
			}
			jet4mcfp_isLoaded = true;
		}
		return jet4mcfp_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet1()
	{
		if (not bjet1_isLoaded) {
			if (bjet1_branch != 0) {
				bjet1_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(bjet1_->pt(), &e);
				if (not isfinite(bjet1_->pt()) || e > 30) {
					printf("branch bjet1_branch contains a bad float: %f\n", bjet1_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch bjet1_branch does not exist!\n");
				exit(1);
			}
			bjet1_isLoaded = true;
		}
		return *bjet1_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet2()
	{
		if (not bjet2_isLoaded) {
			if (bjet2_branch != 0) {
				bjet2_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(bjet2_->pt(), &e);
				if (not isfinite(bjet2_->pt()) || e > 30) {
					printf("branch bjet2_branch contains a bad float: %f\n", bjet2_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch bjet2_branch does not exist!\n");
				exit(1);
			}
			bjet2_isLoaded = true;
		}
		return *bjet2_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet3()
	{
		if (not bjet3_isLoaded) {
			if (bjet3_branch != 0) {
				bjet3_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(bjet3_->pt(), &e);
				if (not isfinite(bjet3_->pt()) || e > 30) {
					printf("branch bjet3_branch contains a bad float: %f\n", bjet3_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch bjet3_branch does not exist!\n");
				exit(1);
			}
			bjet3_isLoaded = true;
		}
		return *bjet3_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet4()
	{
		if (not bjet4_isLoaded) {
			if (bjet4_branch != 0) {
				bjet4_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(bjet4_->pt(), &e);
				if (not isfinite(bjet4_->pt()) || e > 30) {
					printf("branch bjet4_branch contains a bad float: %f\n", bjet4_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch bjet4_branch does not exist!\n");
				exit(1);
			}
			bjet4_isLoaded = true;
		}
		return *bjet4_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark1()
	{
		if (not genbquark1_isLoaded) {
			if (genbquark1_branch != 0) {
				genbquark1_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(genbquark1_->pt(), &e);
				if (not isfinite(genbquark1_->pt()) || e > 30) {
					printf("branch genbquark1_branch contains a bad float: %f\n", genbquark1_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genbquark1_branch does not exist!\n");
				exit(1);
			}
			genbquark1_isLoaded = true;
		}
		return *genbquark1_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark2()
	{
		if (not genbquark2_isLoaded) {
			if (genbquark2_branch != 0) {
				genbquark2_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(genbquark2_->pt(), &e);
				if (not isfinite(genbquark2_->pt()) || e > 30) {
					printf("branch genbquark2_branch contains a bad float: %f\n", genbquark2_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genbquark2_branch does not exist!\n");
				exit(1);
			}
			genbquark2_isLoaded = true;
		}
		return *genbquark2_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark3()
	{
		if (not genbquark3_isLoaded) {
			if (genbquark3_branch != 0) {
				genbquark3_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(genbquark3_->pt(), &e);
				if (not isfinite(genbquark3_->pt()) || e > 30) {
					printf("branch genbquark3_branch contains a bad float: %f\n", genbquark3_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genbquark3_branch does not exist!\n");
				exit(1);
			}
			genbquark3_isLoaded = true;
		}
		return *genbquark3_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark4()
	{
		if (not genbquark4_isLoaded) {
			if (genbquark4_branch != 0) {
				genbquark4_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(genbquark4_->pt(), &e);
				if (not isfinite(genbquark4_->pt()) || e > 30) {
					printf("branch genbquark4_branch contains a bad float: %f\n", genbquark4_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genbquark4_branch does not exist!\n");
				exit(1);
			}
			genbquark4_isLoaded = true;
		}
		return *genbquark4_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genz()
	{
		if (not genz_isLoaded) {
			if (genz_branch != 0) {
				genz_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(genz_->pt(), &e);
				if (not isfinite(genz_->pt()) || e > 30) {
					printf("branch genz_branch contains a bad float: %f\n", genz_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genz_branch does not exist!\n");
				exit(1);
			}
			genz_isLoaded = true;
		}
		return *genz_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gent()
	{
		if (not gent_isLoaded) {
			if (gent_branch != 0) {
				gent_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(gent_->pt(), &e);
				if (not isfinite(gent_->pt()) || e > 30) {
					printf("branch gent_branch contains a bad float: %f\n", gent_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch gent_branch does not exist!\n");
				exit(1);
			}
			gent_isLoaded = true;
		}
		return *gent_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gentbar()
	{
		if (not gentbar_isLoaded) {
			if (gentbar_branch != 0) {
				gentbar_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(gentbar_->pt(), &e);
				if (not isfinite(gentbar_->pt()) || e > 30) {
					printf("branch gentbar_branch contains a bad float: %f\n", gentbar_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch gentbar_branch does not exist!\n");
				exit(1);
			}
			gentbar_isLoaded = true;
		}
		return *gentbar_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genttbar()
	{
		if (not genttbar_isLoaded) {
			if (genttbar_branch != 0) {
				genttbar_branch->GetEntry(index);
				#ifdef PARANOIA
				int e;
				frexp(genttbar_->pt(), &e);
				if (not isfinite(genttbar_->pt()) || e > 30) {
					printf("branch genttbar_branch contains a bad float: %f\n", genttbar_->pt());
					exit(1);
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch genttbar_branch does not exist!\n");
				exit(1);
			}
			genttbar_isLoaded = true;
		}
		return *genttbar_;
	}
	int &csc()
	{
		if (not csc_isLoaded) {
			if (csc_branch != 0) {
				csc_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch csc_branch does not exist!\n");
				exit(1);
			}
			csc_isLoaded = true;
		}
		return csc_;
	}
	int &hbhe()
	{
		if (not hbhe_isLoaded) {
			if (hbhe_branch != 0) {
				hbhe_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hbhe_branch does not exist!\n");
				exit(1);
			}
			hbhe_isLoaded = true;
		}
		return hbhe_;
	}
	int &hbhenew()
	{
		if (not hbhenew_isLoaded) {
			if (hbhenew_branch != 0) {
				hbhenew_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hbhenew_branch does not exist!\n");
				exit(1);
			}
			hbhenew_isLoaded = true;
		}
		return hbhenew_;
	}
	int &hcallaser()
	{
		if (not hcallaser_isLoaded) {
			if (hcallaser_branch != 0) {
				hcallaser_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch hcallaser_branch does not exist!\n");
				exit(1);
			}
			hcallaser_isLoaded = true;
		}
		return hcallaser_;
	}
	int &ecallaser()
	{
		if (not ecallaser_isLoaded) {
			if (ecallaser_branch != 0) {
				ecallaser_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ecallaser_branch does not exist!\n");
				exit(1);
			}
			ecallaser_isLoaded = true;
		}
		return ecallaser_;
	}
	int &ecaltp()
	{
		if (not ecaltp_isLoaded) {
			if (ecaltp_branch != 0) {
				ecaltp_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch ecaltp_branch does not exist!\n");
				exit(1);
			}
			ecaltp_isLoaded = true;
		}
		return ecaltp_;
	}
	int &trkfail()
	{
		if (not trkfail_isLoaded) {
			if (trkfail_branch != 0) {
				trkfail_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch trkfail_branch does not exist!\n");
				exit(1);
			}
			trkfail_isLoaded = true;
		}
		return trkfail_;
	}
	int &eebadsc()
	{
		if (not eebadsc_isLoaded) {
			if (eebadsc_branch != 0) {
				eebadsc_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch eebadsc_branch does not exist!\n");
				exit(1);
			}
			eebadsc_isLoaded = true;
		}
		return eebadsc_;
	}
	float &drll()
	{
		if (not drll_isLoaded) {
			if (drll_branch != 0) {
				drll_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch drll_branch does not exist!\n");
				exit(1);
			}
			drll_isLoaded = true;
		}
		return drll_;
	}
	float &dphill()
	{
		if (not dphill_isLoaded) {
			if (dphill_branch != 0) {
				dphill_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch dphill_branch does not exist!\n");
				exit(1);
			}
			dphill_isLoaded = true;
		}
		return dphill_;
	}
	float &drblmin()
	{
		if (not drblmin_isLoaded) {
			if (drblmin_branch != 0) {
				drblmin_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch drblmin_branch does not exist!\n");
				exit(1);
			}
			drblmin_isLoaded = true;
		}
		return drblmin_;
	}
	float &st30()
	{
		if (not st30_isLoaded) {
			if (st30_branch != 0) {
				st30_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch st30_branch does not exist!\n");
				exit(1);
			}
			st30_isLoaded = true;
		}
		return st30_;
	}
	float &st40()
	{
		if (not st40_isLoaded) {
			if (st40_branch != 0) {
				st40_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch st40_branch does not exist!\n");
				exit(1);
			}
			st40_isLoaded = true;
		}
		return st40_;
	}
	float &m1()
	{
		if (not m1_isLoaded) {
			if (m1_branch != 0) {
				m1_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch m1_branch does not exist!\n");
				exit(1);
			}
			m1_isLoaded = true;
		}
		return m1_;
	}
	float &m2()
	{
		if (not m2_isLoaded) {
			if (m2_branch != 0) {
				m2_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch m2_branch does not exist!\n");
				exit(1);
			}
			m2_isLoaded = true;
		}
		return m2_;
	}
	float &m3()
	{
		if (not m3_isLoaded) {
			if (m3_branch != 0) {
				m3_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch m3_branch does not exist!\n");
				exit(1);
			}
			m3_isLoaded = true;
		}
		return m3_;
	}
	int &zveto()
	{
		if (not zveto_isLoaded) {
			if (zveto_branch != 0) {
				zveto_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch zveto_branch does not exist!\n");
				exit(1);
			}
			zveto_isLoaded = true;
		}
		return zveto_;
	}
	int &nextramu()
	{
		if (not nextramu_isLoaded) {
			if (nextramu_branch != 0) {
				nextramu_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nextramu_branch does not exist!\n");
				exit(1);
			}
			nextramu_isLoaded = true;
		}
		return nextramu_;
	}
	int &nhyp()
	{
		if (not nhyp_isLoaded) {
			if (nhyp_branch != 0) {
				nhyp_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nhyp_branch does not exist!\n");
				exit(1);
			}
			nhyp_isLoaded = true;
		}
		return nhyp_;
	}
	int &nmuss()
	{
		if (not nmuss_isLoaded) {
			if (nmuss_branch != 0) {
				nmuss_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch nmuss_branch does not exist!\n");
				exit(1);
			}
			nmuss_isLoaded = true;
		}
		return nmuss_;
	}
	int &extraz()
	{
		if (not extraz_isLoaded) {
			if (extraz_branch != 0) {
				extraz_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch extraz_branch does not exist!\n");
				exit(1);
			}
			extraz_isLoaded = true;
		}
		return extraz_;
	}
	int &extrag()
	{
		if (not extrag_isLoaded) {
			if (extrag_branch != 0) {
				extrag_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch extrag_branch does not exist!\n");
				exit(1);
			}
			extrag_isLoaded = true;
		}
		return extrag_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pujets()
	{
		if (not pujets_isLoaded) {
			if (pujets_branch != 0) {
				pujets_branch->GetEntry(index);
				#ifdef PARANOIA
				for (vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >::const_iterator i = pujets_->begin(); i != pujets_->end(); ++i) {
					int e;
					frexp(i->pt(), &e);
					if (not isfinite(i->pt()) || e > 30) {
						printf("branch pujets_branch contains a bad float: %f\n", i->pt());
						exit(1);
					}
				}
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch pujets_branch does not exist!\n");
				exit(1);
			}
			pujets_isLoaded = true;
		}
		return *pujets_;
	}
	int &npujets()
	{
		if (not npujets_isLoaded) {
			if (npujets_branch != 0) {
				npujets_branch->GetEntry(index);
				#ifdef PARANOIA
				#endif // #ifdef PARANOIA
			} else { 
				printf("branch npujets_branch does not exist!\n");
				exit(1);
			}
			npujets_isLoaded = true;
		}
		return npujets_;
	}

  static void progress( int nEventsTotal, int nEventsChain ){
    int period = 1000;
    if(nEventsTotal%1000 == 0) {
      // xterm magic from L. Vacavant and A. Cerri
      if (isatty(1)) {
        if( ( nEventsChain - nEventsTotal ) > period ){
          float frac = (float)nEventsTotal/(nEventsChain*0.01);
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", frac);
          fflush(stdout);
        }
        else {
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
                 "\033[0m\033[32m <---\033[0m\015", 100.);
          cout << endl;
        }
      }
    }
  }
  
};

#ifndef __CINT__
extern ZMET zmet;
#endif

namespace ZMet {
	float &rho();
	int &vtxidx();
	int &zdilep();
	int &run();
	float &xsec();
	int &ssmu1();
	int &ssmu2();
	int &eldup();
	float &btagweight();
	float &btagweightup();
	float &ht30();
	float &ht40();
	float &ht40up();
	float &ht40dn();
	int &nbcsvl();
	int &nbcsvlm();
	int &nbcsvm();
	int &nbcsvt();
	int &nbvz();
	int &nbvzres();
	float &jzb();
	float &mjj();
	float &mbb();
	float &mjjup();
	float &mjjdn();
	int &nlep();
	int &nel();
	int &nmu();
	int &st();
	int &goodrun();
	int &lumi();
	int &event();
	int &failjetid();
	float &unc();
	float &uncx();
	float &uncy();
	float &maxemf();
	float &trgeff();
	int &nvtx();
	float &weight();
	float &vtxweight();
	float &pthat();
	float &mllgen();
	float &qscale();
	float &mg();
	float &ml();
	float &x();
	float &ptgen1();
	float &ptgen2();
	float &eff0();
	float &eff100();
	float &eff200();
	float &eff300();
	float &eveto1();
	float &hveto1();
	float &eveto2();
	float &hveto2();
	int &ngenels();
	int &ngenmus();
	int &ngentaus();
	int &ngenleps();
	int &jet1flav();
	int &jet2flav();
	int &jet3flav();
	int &jet4flav();
	int &ngenbs();
	float &jet1drgen();
	float &jet2drgen();
	float &jet3drgen();
	float &jet4drgen();
	float &jet1beta1_01();
	float &jet2beta1_01();
	float &jet3beta1_01();
	float &jet4beta1_01();
	float &jet1beta2_01();
	float &jet2beta2_01();
	float &jet3beta2_01();
	float &jet4beta2_01();
	float &jet1beta1_05();
	float &jet2beta1_05();
	float &jet3beta1_05();
	float &jet4beta1_05();
	float &jet1beta2_05();
	float &jet2beta2_05();
	float &jet3beta2_05();
	float &jet4beta2_05();
	float &jet1beta1_10();
	float &jet2beta1_10();
	float &jet3beta1_10();
	float &jet4beta1_10();
	float &jet1beta2_10();
	float &jet2beta2_10();
	float &jet3beta2_10();
	float &jet4beta2_10();
	int &nwzpartons();
	int &ngennue();
	int &ngennum();
	int &ngennut();
	int &ngennu();
	float &mlb1();
	float &mlb2();
	float &mlbt1();
	float &mlbt2();
	float &mlbmin();
	float &mlbtmin();
	float &mt2();
	float &mt2j();
	int &el27();
	int &mm();
	int &mmtk();
	int &me();
	int &em();
	int &mu();
	int &mu21();
	int &ee();
	float &m13();
	float &m23();
	float &m14();
	float &m24();
	float &m34();
	float &drjetll();
	float &jetptll();
	int &pfjetidll();
	float &drjetlt();
	float &jetptlt();
	int &pfjetidlt();
	int &id1();
	int &id2();
	int &id3();
	int &id4();
	int &id5();
	int &id6();
	int &el1tv();
	int &el2tv();
	int &el1nomu();
	int &el2nomu();
	int &el1nomuss();
	int &el2nomuss();
	float &tche1();
	float &tche2();
	float &tche3();
	float &tche4();
	float &tche5();
	float &tche6();
	float &tche7();
	float &tche8();
	float &csv1();
	float &csv2();
	float &csv3();
	float &csv4();
	float &csv5();
	float &csv6();
	float &csv7();
	float &csv8();
	float &jetunc1();
	float &jetunc2();
	float &jetunc3();
	float &jetunc4();
	float &jetunc5();
	float &jetunc6();
	float &jetunc7();
	float &jetunc8();
	int &jetgenb1();
	int &jetgenb2();
	int &jetgenb3();
	int &jetgenb4();
	int &jetgenb5();
	int &jetgenb6();
	int &jetgenb7();
	int &jetgenb8();
	float &pfmett1new();
	float &pfmett1newphi();
	float &minmet();
	float &trkmet();
	float &trkmetphi();
	float &trksumet();
	float &pfmet();
	float &pfmett1();
	float &pfmett1phi();
	float &pfmetup();
	float &pfmetdn();
	float &pfmetphi();
	float &pfsumet();
	float &met();
	float &metphi();
	float &sumet();
	float &mumet();
	float &mumetphi();
	float &musumet();
	float &mujesmet();
	float &mujesmetphi();
	float &mujessumet();
	float &genmet();
	float &genmetcustom();
	float &genmetphi();
	float &gensumet();
	float &dphixmet();
	float &metpar();
	float &metperp();
	float &tcmet();
	float &tcmetphi();
	float &tcsumet();
	float &tcmetNew();
	float &tcmetphiNew();
	float &tcsumetNew();
	float &tcmetcor();
	float &pfmetcor();
	int &njets();
	int &njetsold();
	int &njetsres();
	int &njetsup();
	int &njetsdn();
	int &njpt();
	int &njets40();
	int &njets40up();
	int &njets40dn();
	float &sumjetpt();
	float &sumjetpt10();
	float &vecjetpt();
	int &nbtags();
	int &nbl();
	int &nbm();
	float &ndphijetmet();
	float &maxjetpt();
	float &maxjetdphimet();
	int &leptype();
	int &ecaltype();
	int &passz();
	int &pdgid();
	float &dpdm();
	float &meterror();
	float &meterrorc();
	float &ptll();
	float &ptlt();
	float &pterrll();
	float &pterrlt();
	float &ptlltrk();
	float &ptlttrk();
	float &ptllgfit();
	float &ptltgfit();
	float &ptllpf();
	float &ptltpf();
	float &ptllgen();
	float &ptltgen();
	int &npfmuons();
	int &nmatchedpfmuons();
	int &idll();
	int &idlt();
	float &etall();
	float &etalt();
	float &phill();
	float &philt();
	float &dilmass();
	float &dilmasspf();
	float &dilmasscor();
	float &dilpt();
	int &flagll();
	int &flaglt();
	int &isdata();
	float &lljj();
	float &jj();
	float &l1jj();
	float &l2jj();
	float &j1ll();
	float &j2ll();
	float &l1j1();
	float &l2j2();
	float &l1j2();
	float &l2j1();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &dilep();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &dileppf();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &w();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep4();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep5();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep6();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pflep1();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pflep2();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genlep1();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genlep2();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gennu1();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gennu2();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfTau_leadPtcand();
	int &pfTau_leadPtcandID();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet1();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet2();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet3();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet4();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet5();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet6();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet7();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jet8();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &subthreshjetup1();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &subthreshjetup2();
	int &jet1mcfa();
	int &jet2mcfa();
	int &jet3mcfa();
	int &jet4mcfa();
	int &jet1mcfp();
	int &jet2mcfp();
	int &jet3mcfp();
	int &jet4mcfp();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet1();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet2();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet3();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &bjet4();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark1();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark2();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark3();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genbquark4();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genz();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gent();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gentbar();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &genttbar();
	int &csc();
	int &hbhe();
	int &hbhenew();
	int &hcallaser();
	int &ecallaser();
	int &ecaltp();
	int &trkfail();
	int &eebadsc();
	float &drll();
	float &dphill();
	float &drblmin();
	float &st30();
	float &st40();
	float &m1();
	float &m2();
	float &m3();
	int &zveto();
	int &nextramu();
	int &nhyp();
	int &nmuss();
	int &extraz();
	int &extrag();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pujets();
	int &npujets();
}
#endif
