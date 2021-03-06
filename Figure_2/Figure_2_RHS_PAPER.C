void Figure_2_RHS_PAPER()
{
//=========Macro generated from canvas: pad67/
//=========  (Tue Feb  1 18:46:21 2022) by ROOT version 6.24/06
   TCanvas *pad67 = new TCanvas("pad67", "",80,71,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pad67->Range(0,0,1,1);
   pad67->SetFillColor(0);
   pad67->SetBorderMode(0);
   pad67->SetBorderSize(2);
   pad67->SetLogz();
   pad67->SetTickx(1);
   pad67->SetTicky(1);
   pad67->SetLeftMargin(0.16);
   pad67->SetRightMargin(0.18);
   pad67->SetTopMargin(0.05);
   pad67->SetBottomMargin(0.13);
   pad67->SetFrameFillStyle(0);
   pad67->SetFrameBorderMode(0);
   Double_t xAxis1[104] = {0.001, 0.003, 0.006, 0.01, 0.016, 0.023, 0.031, 0.04, 0.05, 0.061, 0.074, 0.088, 0.103, 0.119, 0.137, 0.156, 0.176, 0.197, 0.22, 0.244, 0.27, 0.296, 0.325, 0.354, 0.386, 0.419, 0.453, 0.489, 0.526, 0.565, 0.606, 0.649, 0.693, 0.74, 0.788, 0.838, 0.89, 0.944, 1, 1.058, 1.118, 1.181, 1.246, 1.313, 1.383, 1.455, 1.53, 1.607, 1.687, 1.77, 1.856, 1.945, 2.037, 2.132, 2.231, 2.332, 2.438, 2.546, 2.659, 2.775, 2.895, 3.019, 3.147, 3.279, 3.416, 3.558, 3.704, 3.854, 4.01, 4.171, 4.337, 4.509, 4.686, 4.869, 5.058, 5.253, 5.455, 5.663, 5.877, 6.099, 6.328, 6.564, 6.808, 7.06, 7.32, 7.589, 7.866, 8.152, 8.447, 8.752, 9.067, 9.391, 9.726, 10.072, 10.43, 10.798, 11.179, 11.571, 11.977, 12.395, 12.827, 13.272, 13.732, 14}; 
   
   TH2D *h_M4J_vs_M2J = new TH2D("h_M4J_vs_M2J","",103, xAxis1,21,0.08,0.5);
   h_M4J_vs_M2J->SetBinContent(84,0.00105);
   h_M4J_vs_M2J->SetBinContent(86,0.00035);
   h_M4J_vs_M2J->SetBinContent(181,0.00035);
   h_M4J_vs_M2J->SetBinContent(182,0.00035);
   h_M4J_vs_M2J->SetBinContent(184,0.00035);
   h_M4J_vs_M2J->SetBinContent(185,0.00035);
   h_M4J_vs_M2J->SetBinContent(187,0.00035);
   h_M4J_vs_M2J->SetBinContent(188,0.00105);
   h_M4J_vs_M2J->SetBinContent(189,0.0014);
   h_M4J_vs_M2J->SetBinContent(190,0.00105);
   h_M4J_vs_M2J->SetBinContent(191,0.00035);
   h_M4J_vs_M2J->SetBinContent(192,0.0007);
   h_M4J_vs_M2J->SetBinContent(193,0.0007);
   h_M4J_vs_M2J->SetBinContent(262,0.00035);
   h_M4J_vs_M2J->SetBinContent(270,0.00035);
   h_M4J_vs_M2J->SetBinContent(271,0.00035);
   h_M4J_vs_M2J->SetBinContent(277,0.00035);
   h_M4J_vs_M2J->SetBinContent(279,0.00035);
   h_M4J_vs_M2J->SetBinContent(281,0.00035);
   h_M4J_vs_M2J->SetBinContent(283,0.00105);
   h_M4J_vs_M2J->SetBinContent(284,0.00105);
   h_M4J_vs_M2J->SetBinContent(285,0.00035);
   h_M4J_vs_M2J->SetBinContent(286,0.0007);
   h_M4J_vs_M2J->SetBinContent(288,0.00035);
   h_M4J_vs_M2J->SetBinContent(289,0.0014);
   h_M4J_vs_M2J->SetBinContent(290,0.00035);
   h_M4J_vs_M2J->SetBinContent(291,0.00175);
   h_M4J_vs_M2J->SetBinContent(292,0.00035);
   h_M4J_vs_M2J->SetBinContent(293,0.0014);
   h_M4J_vs_M2J->SetBinContent(294,0.0049);
   h_M4J_vs_M2J->SetBinContent(295,0.0021);
   h_M4J_vs_M2J->SetBinContent(296,0.00105);
   h_M4J_vs_M2J->SetBinContent(297,0.00245);
   h_M4J_vs_M2J->SetBinContent(298,0.0014);
   h_M4J_vs_M2J->SetBinContent(364,0.00035);
   h_M4J_vs_M2J->SetBinContent(371,0.00035);
   h_M4J_vs_M2J->SetBinContent(375,0.00035);
   h_M4J_vs_M2J->SetBinContent(379,0.00035);
   h_M4J_vs_M2J->SetBinContent(381,0.00035);
   h_M4J_vs_M2J->SetBinContent(382,0.00105);
   h_M4J_vs_M2J->SetBinContent(383,0.00035);
   h_M4J_vs_M2J->SetBinContent(384,0.00035);
   h_M4J_vs_M2J->SetBinContent(386,0.0007);
   h_M4J_vs_M2J->SetBinContent(387,0.00035);
   h_M4J_vs_M2J->SetBinContent(389,0.0007);
   h_M4J_vs_M2J->SetBinContent(390,0.0007);
   h_M4J_vs_M2J->SetBinContent(391,0.0007);
   h_M4J_vs_M2J->SetBinContent(392,0.00105);
   h_M4J_vs_M2J->SetBinContent(393,0.0021);
   h_M4J_vs_M2J->SetBinContent(394,0.0007);
   h_M4J_vs_M2J->SetBinContent(395,0.0028);
   h_M4J_vs_M2J->SetBinContent(396,0.0021);
   h_M4J_vs_M2J->SetBinContent(397,0.0028);
   h_M4J_vs_M2J->SetBinContent(398,0.00525);
   h_M4J_vs_M2J->SetBinContent(399,0.00385);
   h_M4J_vs_M2J->SetBinContent(400,0.00385);
   h_M4J_vs_M2J->SetBinContent(401,0.00315);
   h_M4J_vs_M2J->SetBinContent(402,0.0021);
   h_M4J_vs_M2J->SetBinContent(403,0.0014);
   h_M4J_vs_M2J->SetBinContent(405,0.00035);
   h_M4J_vs_M2J->SetBinContent(481,0.00035);
   h_M4J_vs_M2J->SetBinContent(482,0.00035);
   h_M4J_vs_M2J->SetBinContent(483,0.00035);
   h_M4J_vs_M2J->SetBinContent(484,0.0007);
   h_M4J_vs_M2J->SetBinContent(485,0.0007);
   h_M4J_vs_M2J->SetBinContent(487,0.0014);
   h_M4J_vs_M2J->SetBinContent(488,0.00035);
   h_M4J_vs_M2J->SetBinContent(489,0.00035);
   h_M4J_vs_M2J->SetBinContent(490,0.00105);
   h_M4J_vs_M2J->SetBinContent(491,0.00035);
   h_M4J_vs_M2J->SetBinContent(492,0.00035);
   h_M4J_vs_M2J->SetBinContent(493,0.00105);
   h_M4J_vs_M2J->SetBinContent(494,0.00035);
   h_M4J_vs_M2J->SetBinContent(495,0.00035);
   h_M4J_vs_M2J->SetBinContent(497,0.0007);
   h_M4J_vs_M2J->SetBinContent(498,0.0021);
   h_M4J_vs_M2J->SetBinContent(499,0.00175);
   h_M4J_vs_M2J->SetBinContent(500,0.00245);
   h_M4J_vs_M2J->SetBinContent(501,0.0028);
   h_M4J_vs_M2J->SetBinContent(502,0.00245);
   h_M4J_vs_M2J->SetBinContent(503,0.0056);
   h_M4J_vs_M2J->SetBinContent(504,0.00665);
   h_M4J_vs_M2J->SetBinContent(505,0.0049);
   h_M4J_vs_M2J->SetBinContent(506,0.0028);
   h_M4J_vs_M2J->SetBinContent(507,0.0007);
   h_M4J_vs_M2J->SetBinContent(508,0.00245);
   h_M4J_vs_M2J->SetBinContent(509,0.0014);
   h_M4J_vs_M2J->SetBinContent(582,0.00035);
   h_M4J_vs_M2J->SetBinContent(589,0.0007);
   h_M4J_vs_M2J->SetBinContent(592,0.00035);
   h_M4J_vs_M2J->SetBinContent(593,0.0021);
   h_M4J_vs_M2J->SetBinContent(594,0.00105);
   h_M4J_vs_M2J->SetBinContent(595,0.00105);
   h_M4J_vs_M2J->SetBinContent(596,0.00035);
   h_M4J_vs_M2J->SetBinContent(597,0.0007);
   h_M4J_vs_M2J->SetBinContent(598,0.0007);
   h_M4J_vs_M2J->SetBinContent(599,0.0007);
   h_M4J_vs_M2J->SetBinContent(600,0.0014);
   h_M4J_vs_M2J->SetBinContent(601,0.0007);
   h_M4J_vs_M2J->SetBinContent(602,0.0021);
   h_M4J_vs_M2J->SetBinContent(603,0.0021);
   h_M4J_vs_M2J->SetBinContent(604,0.00315);
   h_M4J_vs_M2J->SetBinContent(605,0.00245);
   h_M4J_vs_M2J->SetBinContent(606,0.00525);
   h_M4J_vs_M2J->SetBinContent(607,0.00665);
   h_M4J_vs_M2J->SetBinContent(608,0.0063);
   h_M4J_vs_M2J->SetBinContent(609,0.00665);
   h_M4J_vs_M2J->SetBinContent(610,0.0098);
   h_M4J_vs_M2J->SetBinContent(611,0.0049);
   h_M4J_vs_M2J->SetBinContent(612,0.00315);
   h_M4J_vs_M2J->SetBinContent(613,0.0035);
   h_M4J_vs_M2J->SetBinContent(614,0.00035);
   h_M4J_vs_M2J->SetBinContent(687,0.00035);
   h_M4J_vs_M2J->SetBinContent(691,0.00035);
   h_M4J_vs_M2J->SetBinContent(694,0.00035);
   h_M4J_vs_M2J->SetBinContent(695,0.0007);
   h_M4J_vs_M2J->SetBinContent(696,0.00105);
   h_M4J_vs_M2J->SetBinContent(697,0.00035);
   h_M4J_vs_M2J->SetBinContent(698,0.0007);
   h_M4J_vs_M2J->SetBinContent(699,0.00035);
   h_M4J_vs_M2J->SetBinContent(700,0.0007);
   h_M4J_vs_M2J->SetBinContent(701,0.0007);
   h_M4J_vs_M2J->SetBinContent(702,0.0007);
   h_M4J_vs_M2J->SetBinContent(703,0.00035);
   h_M4J_vs_M2J->SetBinContent(704,0.00105);
   h_M4J_vs_M2J->SetBinContent(705,0.0007);
   h_M4J_vs_M2J->SetBinContent(706,0.00035);
   h_M4J_vs_M2J->SetBinContent(707,0.00175);
   h_M4J_vs_M2J->SetBinContent(708,0.0021);
   h_M4J_vs_M2J->SetBinContent(709,0.0042);
   h_M4J_vs_M2J->SetBinContent(710,0.00595);
   h_M4J_vs_M2J->SetBinContent(711,0.0077);
   h_M4J_vs_M2J->SetBinContent(712,0.0091);
   h_M4J_vs_M2J->SetBinContent(713,0.007);
   h_M4J_vs_M2J->SetBinContent(714,0.0098);
   h_M4J_vs_M2J->SetBinContent(715,0.01645);
   h_M4J_vs_M2J->SetBinContent(716,0.0098);
   h_M4J_vs_M2J->SetBinContent(717,0.00735);
   h_M4J_vs_M2J->SetBinContent(718,0.00105);
   h_M4J_vs_M2J->SetBinContent(722,0.00035);
   h_M4J_vs_M2J->SetBinContent(790,0.00035);
   h_M4J_vs_M2J->SetBinContent(791,0.00035);
   h_M4J_vs_M2J->SetBinContent(793,0.00035);
   h_M4J_vs_M2J->SetBinContent(795,0.0007);
   h_M4J_vs_M2J->SetBinContent(797,0.00035);
   h_M4J_vs_M2J->SetBinContent(799,0.00035);
   h_M4J_vs_M2J->SetBinContent(800,0.0014);
   h_M4J_vs_M2J->SetBinContent(801,0.00175);
   h_M4J_vs_M2J->SetBinContent(802,0.00035);
   h_M4J_vs_M2J->SetBinContent(803,0.0007);
   h_M4J_vs_M2J->SetBinContent(804,0.0007);
   h_M4J_vs_M2J->SetBinContent(805,0.00175);
   h_M4J_vs_M2J->SetBinContent(806,0.0007);
   h_M4J_vs_M2J->SetBinContent(807,0.0014);
   h_M4J_vs_M2J->SetBinContent(808,0.0021);
   h_M4J_vs_M2J->SetBinContent(809,0.00105);
   h_M4J_vs_M2J->SetBinContent(810,0.0014);
   h_M4J_vs_M2J->SetBinContent(811,0.00245);
   h_M4J_vs_M2J->SetBinContent(812,0.00175);
   h_M4J_vs_M2J->SetBinContent(813,0.00315);
   h_M4J_vs_M2J->SetBinContent(814,0.0028);
   h_M4J_vs_M2J->SetBinContent(815,0.00455);
   h_M4J_vs_M2J->SetBinContent(816,0.007);
   h_M4J_vs_M2J->SetBinContent(817,0.0154);
   h_M4J_vs_M2J->SetBinContent(818,0.01435);
   h_M4J_vs_M2J->SetBinContent(819,0.0287);
   h_M4J_vs_M2J->SetBinContent(820,0.0371);
   h_M4J_vs_M2J->SetBinContent(821,0.03185);
   h_M4J_vs_M2J->SetBinContent(822,0.01995);
   h_M4J_vs_M2J->SetBinContent(823,0.00665);
   h_M4J_vs_M2J->SetBinContent(824,0.00105);
   h_M4J_vs_M2J->SetBinContent(825,0.00105);
   h_M4J_vs_M2J->SetBinContent(827,0.0007);
   h_M4J_vs_M2J->SetBinContent(893,0.00035);
   h_M4J_vs_M2J->SetBinContent(898,0.00035);
   h_M4J_vs_M2J->SetBinContent(899,0.0007);
   h_M4J_vs_M2J->SetBinContent(900,0.00035);
   h_M4J_vs_M2J->SetBinContent(902,0.00035);
   h_M4J_vs_M2J->SetBinContent(904,0.00105);
   h_M4J_vs_M2J->SetBinContent(905,0.00035);
   h_M4J_vs_M2J->SetBinContent(906,0.0021);
   h_M4J_vs_M2J->SetBinContent(907,0.0014);
   h_M4J_vs_M2J->SetBinContent(908,0.0021);
   h_M4J_vs_M2J->SetBinContent(909,0.00035);
   h_M4J_vs_M2J->SetBinContent(910,0.00105);
   h_M4J_vs_M2J->SetBinContent(911,0.00245);
   h_M4J_vs_M2J->SetBinContent(912,0.0007);
   h_M4J_vs_M2J->SetBinContent(913,0.0021);
   h_M4J_vs_M2J->SetBinContent(914,0.00105);
   h_M4J_vs_M2J->SetBinContent(915,0.0014);
   h_M4J_vs_M2J->SetBinContent(916,0.0021);
   h_M4J_vs_M2J->SetBinContent(917,0.0035);
   h_M4J_vs_M2J->SetBinContent(918,0.00455);
   h_M4J_vs_M2J->SetBinContent(919,0.0084);
   h_M4J_vs_M2J->SetBinContent(920,0.00945);
   h_M4J_vs_M2J->SetBinContent(921,0.0119);
   h_M4J_vs_M2J->SetBinContent(922,0.0231);
   h_M4J_vs_M2J->SetBinContent(923,0.0364);
   h_M4J_vs_M2J->SetBinContent(924,0.05985);
   h_M4J_vs_M2J->SetBinContent(925,0.13055);
   h_M4J_vs_M2J->SetBinContent(926,0.19215);
   h_M4J_vs_M2J->SetBinContent(927,0.21455);
   h_M4J_vs_M2J->SetBinContent(928,0.09905);
   h_M4J_vs_M2J->SetBinContent(929,0.01715);
   h_M4J_vs_M2J->SetBinContent(930,0.00385);
   h_M4J_vs_M2J->SetBinContent(931,0.0007);
   h_M4J_vs_M2J->SetBinContent(932,0.00035);
   h_M4J_vs_M2J->SetBinContent(1002,0.00035);
   h_M4J_vs_M2J->SetBinContent(1005,0.00035);
   h_M4J_vs_M2J->SetBinContent(1007,0.00035);
   h_M4J_vs_M2J->SetBinContent(1008,0.0007);
   h_M4J_vs_M2J->SetBinContent(1009,0.00105);
   h_M4J_vs_M2J->SetBinContent(1010,0.00035);
   h_M4J_vs_M2J->SetBinContent(1011,0.00245);
   h_M4J_vs_M2J->SetBinContent(1012,0.00105);
   h_M4J_vs_M2J->SetBinContent(1013,0.0014);
   h_M4J_vs_M2J->SetBinContent(1014,0.0007);
   h_M4J_vs_M2J->SetBinContent(1015,0.0028);
   h_M4J_vs_M2J->SetBinContent(1016,0.00175);
   h_M4J_vs_M2J->SetBinContent(1017,0.0007);
   h_M4J_vs_M2J->SetBinContent(1018,0.0014);
   h_M4J_vs_M2J->SetBinContent(1019,0.0007);
   h_M4J_vs_M2J->SetBinContent(1020,0.0014);
   h_M4J_vs_M2J->SetBinContent(1021,0.00315);
   h_M4J_vs_M2J->SetBinContent(1022,0.00175);
   h_M4J_vs_M2J->SetBinContent(1023,0.00595);
   h_M4J_vs_M2J->SetBinContent(1024,0.01015);
   h_M4J_vs_M2J->SetBinContent(1025,0.0112);
   h_M4J_vs_M2J->SetBinContent(1026,0.0224);
   h_M4J_vs_M2J->SetBinContent(1027,0.03325);
   h_M4J_vs_M2J->SetBinContent(1028,0.0665);
   h_M4J_vs_M2J->SetBinContent(1029,0.15785);
   h_M4J_vs_M2J->SetBinContent(1030,0.34965);
   h_M4J_vs_M2J->SetBinContent(1031,0.72065);
   h_M4J_vs_M2J->SetBinContent(1032,1.1207);
   h_M4J_vs_M2J->SetBinContent(1033,0.77315);
   h_M4J_vs_M2J->SetBinContent(1034,0.1267);
   h_M4J_vs_M2J->SetBinContent(1035,0.00805);
   h_M4J_vs_M2J->SetBinContent(1036,0.0007);
   h_M4J_vs_M2J->SetBinContent(1102,0.00035);
   h_M4J_vs_M2J->SetBinContent(1108,0.00035);
   h_M4J_vs_M2J->SetBinContent(1110,0.0007);
   h_M4J_vs_M2J->SetBinContent(1112,0.00035);
   h_M4J_vs_M2J->SetBinContent(1113,0.00035);
   h_M4J_vs_M2J->SetBinContent(1114,0.0014);
   h_M4J_vs_M2J->SetBinContent(1115,0.00175);
   h_M4J_vs_M2J->SetBinContent(1116,0.00175);
   h_M4J_vs_M2J->SetBinContent(1117,0.0007);
   h_M4J_vs_M2J->SetBinContent(1118,0.00245);
   h_M4J_vs_M2J->SetBinContent(1119,0.00105);
   h_M4J_vs_M2J->SetBinContent(1120,0.0014);
   h_M4J_vs_M2J->SetBinContent(1121,0.0028);
   h_M4J_vs_M2J->SetBinContent(1122,0.00245);
   h_M4J_vs_M2J->SetBinContent(1123,0.00175);
   h_M4J_vs_M2J->SetBinContent(1124,0.0014);
   h_M4J_vs_M2J->SetBinContent(1125,0.00315);
   h_M4J_vs_M2J->SetBinContent(1126,0.00245);
   h_M4J_vs_M2J->SetBinContent(1127,0.00525);
   h_M4J_vs_M2J->SetBinContent(1128,0.0084);
   h_M4J_vs_M2J->SetBinContent(1129,0.007);
   h_M4J_vs_M2J->SetBinContent(1130,0.0133);
   h_M4J_vs_M2J->SetBinContent(1131,0.02275);
   h_M4J_vs_M2J->SetBinContent(1132,0.05425);
   h_M4J_vs_M2J->SetBinContent(1133,0.098);
   h_M4J_vs_M2J->SetBinContent(1134,0.14175);
   h_M4J_vs_M2J->SetBinContent(1135,0.1764);
   h_M4J_vs_M2J->SetBinContent(1136,0.17535);
   h_M4J_vs_M2J->SetBinContent(1137,0.1162);
   h_M4J_vs_M2J->SetBinContent(1138,0.0336);
   h_M4J_vs_M2J->SetBinContent(1139,0.00595);
   h_M4J_vs_M2J->SetBinContent(1140,0.00035);
   h_M4J_vs_M2J->SetBinContent(1212,0.00035);
   h_M4J_vs_M2J->SetBinContent(1214,0.0007);
   h_M4J_vs_M2J->SetBinContent(1215,0.00035);
   h_M4J_vs_M2J->SetBinContent(1216,0.00175);
   h_M4J_vs_M2J->SetBinContent(1218,0.00035);
   h_M4J_vs_M2J->SetBinContent(1219,0.00175);
   h_M4J_vs_M2J->SetBinContent(1220,0.0028);
   h_M4J_vs_M2J->SetBinContent(1221,0.0007);
   h_M4J_vs_M2J->SetBinContent(1222,0.00175);
   h_M4J_vs_M2J->SetBinContent(1223,0.00385);
   h_M4J_vs_M2J->SetBinContent(1224,0.0014);
   h_M4J_vs_M2J->SetBinContent(1225,0.0014);
   h_M4J_vs_M2J->SetBinContent(1226,0.0021);
   h_M4J_vs_M2J->SetBinContent(1227,0.0021);
   h_M4J_vs_M2J->SetBinContent(1228,0.0049);
   h_M4J_vs_M2J->SetBinContent(1229,0.00315);
   h_M4J_vs_M2J->SetBinContent(1230,0.0035);
   h_M4J_vs_M2J->SetBinContent(1231,0.0028);
   h_M4J_vs_M2J->SetBinContent(1232,0.00665);
   h_M4J_vs_M2J->SetBinContent(1233,0.01015);
   h_M4J_vs_M2J->SetBinContent(1234,0.0112);
   h_M4J_vs_M2J->SetBinContent(1235,0.02065);
   h_M4J_vs_M2J->SetBinContent(1236,0.02835);
   h_M4J_vs_M2J->SetBinContent(1237,0.0427);
   h_M4J_vs_M2J->SetBinContent(1238,0.0679);
   h_M4J_vs_M2J->SetBinContent(1239,0.0497);
   h_M4J_vs_M2J->SetBinContent(1240,0.0273);
   h_M4J_vs_M2J->SetBinContent(1241,0.01015);
   h_M4J_vs_M2J->SetBinContent(1242,0.0056);
   h_M4J_vs_M2J->SetBinContent(1243,0.00105);
   h_M4J_vs_M2J->SetBinContent(1245,0.00035);
   h_M4J_vs_M2J->SetBinContent(1316,0.00035);
   h_M4J_vs_M2J->SetBinContent(1318,0.00035);
   h_M4J_vs_M2J->SetBinContent(1319,0.00035);
   h_M4J_vs_M2J->SetBinContent(1320,0.00035);
   h_M4J_vs_M2J->SetBinContent(1321,0.00035);
   h_M4J_vs_M2J->SetBinContent(1322,0.0007);
   h_M4J_vs_M2J->SetBinContent(1323,0.00035);
   h_M4J_vs_M2J->SetBinContent(1324,0.0014);
   h_M4J_vs_M2J->SetBinContent(1325,0.00175);
   h_M4J_vs_M2J->SetBinContent(1326,0.0007);
   h_M4J_vs_M2J->SetBinContent(1327,0.0014);
   h_M4J_vs_M2J->SetBinContent(1328,0.0035);
   h_M4J_vs_M2J->SetBinContent(1329,0.0021);
   h_M4J_vs_M2J->SetBinContent(1330,0.00315);
   h_M4J_vs_M2J->SetBinContent(1331,0.0014);
   h_M4J_vs_M2J->SetBinContent(1332,0.00385);
   h_M4J_vs_M2J->SetBinContent(1333,0.0028);
   h_M4J_vs_M2J->SetBinContent(1334,0.00175);
   h_M4J_vs_M2J->SetBinContent(1335,0.00245);
   h_M4J_vs_M2J->SetBinContent(1336,0.0049);
   h_M4J_vs_M2J->SetBinContent(1337,0.0042);
   h_M4J_vs_M2J->SetBinContent(1338,0.00875);
   h_M4J_vs_M2J->SetBinContent(1339,0.01715);
   h_M4J_vs_M2J->SetBinContent(1340,0.0252);
   h_M4J_vs_M2J->SetBinContent(1341,0.02765);
   h_M4J_vs_M2J->SetBinContent(1342,0.0217);
   h_M4J_vs_M2J->SetBinContent(1343,0.01225);
   h_M4J_vs_M2J->SetBinContent(1344,0.0084);
   h_M4J_vs_M2J->SetBinContent(1345,0.0042);
   h_M4J_vs_M2J->SetBinContent(1346,0.0021);
   h_M4J_vs_M2J->SetBinContent(1347,0.00105);
   h_M4J_vs_M2J->SetBinContent(1425,0.00035);
   h_M4J_vs_M2J->SetBinContent(1426,0.00035);
   h_M4J_vs_M2J->SetBinContent(1427,0.0007);
   h_M4J_vs_M2J->SetBinContent(1428,0.0007);
   h_M4J_vs_M2J->SetBinContent(1429,0.00175);
   h_M4J_vs_M2J->SetBinContent(1430,0.00105);
   h_M4J_vs_M2J->SetBinContent(1431,0.0014);
   h_M4J_vs_M2J->SetBinContent(1432,0.00245);
   h_M4J_vs_M2J->SetBinContent(1433,0.00105);
   h_M4J_vs_M2J->SetBinContent(1434,0.00175);
   h_M4J_vs_M2J->SetBinContent(1435,0.0028);
   h_M4J_vs_M2J->SetBinContent(1436,0.00315);
   h_M4J_vs_M2J->SetBinContent(1437,0.0028);
   h_M4J_vs_M2J->SetBinContent(1438,0.00385);
   h_M4J_vs_M2J->SetBinContent(1439,0.0028);
   h_M4J_vs_M2J->SetBinContent(1440,0.0028);
   h_M4J_vs_M2J->SetBinContent(1441,0.0063);
   h_M4J_vs_M2J->SetBinContent(1442,0.00945);
   h_M4J_vs_M2J->SetBinContent(1443,0.0147);
   h_M4J_vs_M2J->SetBinContent(1444,0.0175);
   h_M4J_vs_M2J->SetBinContent(1445,0.0133);
   h_M4J_vs_M2J->SetBinContent(1446,0.01085);
   h_M4J_vs_M2J->SetBinContent(1447,0.0049);
   h_M4J_vs_M2J->SetBinContent(1448,0.00595);
   h_M4J_vs_M2J->SetBinContent(1449,0.00245);
   h_M4J_vs_M2J->SetBinContent(1450,0.00175);
   h_M4J_vs_M2J->SetBinContent(1451,0.00105);
   h_M4J_vs_M2J->SetBinContent(1527,0.00035);
   h_M4J_vs_M2J->SetBinContent(1529,0.00035);
   h_M4J_vs_M2J->SetBinContent(1531,0.00035);
   h_M4J_vs_M2J->SetBinContent(1532,0.00035);
   h_M4J_vs_M2J->SetBinContent(1533,0.0007);
   h_M4J_vs_M2J->SetBinContent(1534,0.00105);
   h_M4J_vs_M2J->SetBinContent(1535,0.00035);
   h_M4J_vs_M2J->SetBinContent(1536,0.00035);
   h_M4J_vs_M2J->SetBinContent(1537,0.0028);
   h_M4J_vs_M2J->SetBinContent(1538,0.0014);
   h_M4J_vs_M2J->SetBinContent(1539,0.00175);
   h_M4J_vs_M2J->SetBinContent(1540,0.0028);
   h_M4J_vs_M2J->SetBinContent(1541,0.0021);
   h_M4J_vs_M2J->SetBinContent(1542,0.0028);
   h_M4J_vs_M2J->SetBinContent(1543,0.0028);
   h_M4J_vs_M2J->SetBinContent(1544,0.0049);
   h_M4J_vs_M2J->SetBinContent(1545,0.00525);
   h_M4J_vs_M2J->SetBinContent(1546,0.00805);
   h_M4J_vs_M2J->SetBinContent(1547,0.0091);
   h_M4J_vs_M2J->SetBinContent(1548,0.0091);
   h_M4J_vs_M2J->SetBinContent(1549,0.0077);
   h_M4J_vs_M2J->SetBinContent(1550,0.00105);
   h_M4J_vs_M2J->SetBinContent(1551,0.00175);
   h_M4J_vs_M2J->SetBinContent(1552,0.0014);
   h_M4J_vs_M2J->SetBinContent(1553,0.0007);
   h_M4J_vs_M2J->SetBinContent(1554,0.00105);
   h_M4J_vs_M2J->SetBinContent(1555,0.0007);
   h_M4J_vs_M2J->SetBinContent(1556,0.00035);
   h_M4J_vs_M2J->SetBinContent(1631,0.00035);
   h_M4J_vs_M2J->SetBinContent(1636,0.00035);
   h_M4J_vs_M2J->SetBinContent(1638,0.00035);
   h_M4J_vs_M2J->SetBinContent(1640,0.0007);
   h_M4J_vs_M2J->SetBinContent(1641,0.00035);
   h_M4J_vs_M2J->SetBinContent(1642,0.0021);
   h_M4J_vs_M2J->SetBinContent(1643,0.0014);
   h_M4J_vs_M2J->SetBinContent(1644,0.00105);
   h_M4J_vs_M2J->SetBinContent(1645,0.0014);
   h_M4J_vs_M2J->SetBinContent(1646,0.0007);
   h_M4J_vs_M2J->SetBinContent(1647,0.0007);
   h_M4J_vs_M2J->SetBinContent(1648,0.00245);
   h_M4J_vs_M2J->SetBinContent(1649,0.00245);
   h_M4J_vs_M2J->SetBinContent(1650,0.0035);
   h_M4J_vs_M2J->SetBinContent(1651,0.00385);
   h_M4J_vs_M2J->SetBinContent(1652,0.00315);
   h_M4J_vs_M2J->SetBinContent(1653,0.0014);
   h_M4J_vs_M2J->SetBinContent(1654,0.0014);
   h_M4J_vs_M2J->SetBinContent(1657,0.0007);
   h_M4J_vs_M2J->SetBinContent(1659,0.0007);
   h_M4J_vs_M2J->SetBinContent(1660,0.00035);
   h_M4J_vs_M2J->SetBinContent(1661,0.00035);
   h_M4J_vs_M2J->SetBinContent(1744,0.00035);
   h_M4J_vs_M2J->SetBinContent(1748,0.00035);
   h_M4J_vs_M2J->SetBinContent(1750,0.00035);
   h_M4J_vs_M2J->SetBinContent(1752,0.00105);
   h_M4J_vs_M2J->SetBinContent(1753,0.00105);
   h_M4J_vs_M2J->SetBinContent(1754,0.00035);
   h_M4J_vs_M2J->SetBinContent(1756,0.0007);
   h_M4J_vs_M2J->SetBinContent(1758,0.00035);
   h_M4J_vs_M2J->SetBinContent(1760,0.00035);
   h_M4J_vs_M2J->SetEntries(18070);
   h_M4J_vs_M2J->SetStats(0);
   h_M4J_vs_M2J->SetLineStyle(0);
   h_M4J_vs_M2J->SetMarkerStyle(20);
   h_M4J_vs_M2J->GetXaxis()->SetTitle("Four-jet mass [TeV]");
   h_M4J_vs_M2J->GetXaxis()->SetRange(47,93);
   h_M4J_vs_M2J->GetXaxis()->SetLabelFont(42);
   h_M4J_vs_M2J->GetXaxis()->SetLabelOffset(0.007);
   h_M4J_vs_M2J->GetXaxis()->SetLabelSize(0.05);
   h_M4J_vs_M2J->GetXaxis()->SetTitleSize(0.05);
   h_M4J_vs_M2J->GetXaxis()->SetTitleOffset(1.2);
   h_M4J_vs_M2J->GetXaxis()->SetTitleFont(42);
   h_M4J_vs_M2J->GetYaxis()->SetTitle("#alpha = Average dijet mass/ Four-jet mass");
   h_M4J_vs_M2J->GetYaxis()->SetRange(1,21);
   h_M4J_vs_M2J->GetYaxis()->SetLabelFont(42);
   h_M4J_vs_M2J->GetYaxis()->SetLabelOffset(0.007);
   h_M4J_vs_M2J->GetYaxis()->SetLabelSize(0.05);
   h_M4J_vs_M2J->GetYaxis()->SetTitleSize(0.05);
   h_M4J_vs_M2J->GetYaxis()->SetTitleOffset(1.4);
   h_M4J_vs_M2J->GetYaxis()->SetTitleFont(42);
   h_M4J_vs_M2J->GetZaxis()->SetTitle("Events/bin");
   h_M4J_vs_M2J->GetZaxis()->SetLabelFont(42);
   h_M4J_vs_M2J->GetZaxis()->SetLabelOffset(0.007);
   h_M4J_vs_M2J->GetZaxis()->SetLabelSize(0.05);
   h_M4J_vs_M2J->GetZaxis()->SetTitleSize(0.05);
   h_M4J_vs_M2J->GetZaxis()->SetTitleOffset(1.4);
   h_M4J_vs_M2J->GetZaxis()->SetTitleFont(42);
   h_M4J_vs_M2J->Draw("colz");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.031);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h_M4J_vs_M2J","#splitline{Diquark: S #rightarrow #chi#chi #rightarrow (ug) (ug)}{#splitline{M(S) = 8.4 TeV}{M(#chi) = 2.1 TeV}}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.038);
   TText *pt_LaTex = pt->AddText("#bf{CMS} #scale[0.7]{#it{Simulation}}");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("13 TeV");
   pt->Draw();
   TLine *line = new TLine(1.6,0.1,10,0.1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.12,10,0.12);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.14,10,0.14);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.16,10,0.16);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.18,10,0.18);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.2,10,0.2);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.22,10,0.22);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.24,10,0.24);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.26,10,0.26);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.28,10,0.28);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.3,10,0.3);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.32,10,0.32);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.6,0.34,10,0.34);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   pad67->Modified();
   pad67->cd();
   pad67->SetSelected(pad67);
}
