You need to be under a CMSSW release and do cmsenv in order to execute the command:

python Plot1DLimit_for_HybridNew_final_smoothing_CCLE_alpha0p25.py -d Limits_alpha0p25/ -m gg -b PFDijet2017 -l 138 --massMin 2000 --massMax 9000  --xsecMin 1e-6 --xsecMax 1e-0 --alpha_true 0.25

Inputs: root files with limits in Limits_alpha0p25/ , txt file with theory xsec in data/ 

Output: limits_freq_gg_pfdijet2017_alpha0p25_HN_above_4500_smoothed_CCLE.C, limits_freq_gg_pfdijet2017_alpha0p25_HN_above_4500_smoothed_CCLE.png, limits_freq_gg_pfdijet2017_alpha0p25_HN_above_4500_smoothed_CCLE.pdf inside Limits_alpha0p25/
