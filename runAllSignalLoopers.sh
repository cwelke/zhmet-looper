#! /bin/bash

make -j5
if [ ! "$?" -eq "0" ]; then
echo "Did not Compile, Exiting"
exit
fi

root -b -q "runMainTemplateLooper.C()"

# root -b -q "runMainTemplateLooper.C( 180 )"
# mv photon_template_MET_data_2jetbins_all.root photon_template_MET_data_2jetbins_all_180.root
# root -b -q "runMainTemplateLooper.C( 190 )"
# mv photon_template_MET_data_2jetbins_all.root photon_template_MET_data_2jetbins_all_190.root
# root -b -q "runMainTemplateLooper.C( 200 )"
# mv photon_template_MET_data_2jetbins_all.root photon_template_MET_data_2jetbins_all_200.root
# root -b -q "runMainTemplateLooper.C( 210 )"
# mv photon_template_MET_data_2jetbins_all.root photon_template_MET_data_2jetbins_all_210.root
# root -b -q "runMainTemplateLooper.C( 220 )"
# mv photon_template_MET_data_2jetbins_all.root photon_template_MET_data_2jetbins_all_220.root
# root -b -q "runMainTemplateLooper.C( 230 )"
# mv photon_template_MET_data_2jetbins_all.root photon_template_MET_data_2jetbins_all_230.root
# root -b -q "runMainTemplateLooper.C( 240 )"
# mv photon_template_MET_data_2jetbins_all.root photon_template_MET_data_2jetbins_all_240.root
# root -b -q "runMainTemplateLooper.C( 250 )"
# mv photon_template_MET_data_2jetbins_all.root photon_template_MET_data_2jetbins_all_250.root

# root -b -q "runMainTemplateLooper.C( 200 )"
# mv photon_template_MET_data_2jetbins_all.root photon_template_MET_data_2jetbins_all_200.root
