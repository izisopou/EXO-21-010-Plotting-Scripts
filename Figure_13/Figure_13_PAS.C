void Figure_13_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 27 21:25:46 2022) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(444.4445,-6.485241,11555.56,1.409496);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetTickx(1);
   c->SetLeftMargin(0.14);
   c->SetRightMargin(0.14);
   c->SetBottomMargin(0.15);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle(" ;Four-jet resonance mass [GeV];Local p-value");
   
   Double_t Graph_fx3001[79] = {
   2000,
   2100,
   2200,
   2300,
   2400,
   2500,
   2600,
   2700,
   2800,
   2900,
   3000,
   3100,
   3200,
   3300,
   3400,
   3500,
   3600,
   3700,
   3800,
   3900,
   4000,
   4100,
   4200,
   4300,
   4400,
   4500,
   4600,
   4700,
   4800,
   4900,
   5000,
   5100,
   5200,
   5300,
   5400,
   5500,
   5600,
   5700,
   5800,
   5900,
   6000,
   6100,
   6200,
   6300,
   6400,
   6500,
   6600,
   6700,
   6800,
   6900,
   7000,
   7100,
   7200,
   7300,
   7400,
   7500,
   7600,
   7700,
   7800,
   7900,
   8000,
   8100,
   8200,
   8300,
   8400,
   8500,
   8600,
   8700,
   8800,
   8900,
   9000,
   9100,
   9300,
   9400,
   9500,
   9600,
   9700,
   9900,
   10000};
   Double_t Graph_fy3001[79] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_felx3001[79] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fely3001[79] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fehx3001[79] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fehy3001[79] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(79,Graph_fx3001,Graph_fy3001,Graph_felx3001,Graph_fehx3001,Graph_fely3001,Graph_fehy3001);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","Graph",100,1200,10800);
   Graph_Graph3001->SetMinimum(0.0011);
   Graph_Graph3001->SetMaximum(1.1);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3001->SetLineColor(ci);
   Graph_Graph3001->SetMarkerStyle(8);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   multigraph->Add(grae,"");
   
   Double_t Graph_fx3002[79] = {
   2000,
   2100,
   2200,
   2300,
   2400,
   2500,
   2600,
   2700,
   2800,
   2900,
   3000,
   3100,
   3200,
   3300,
   3400,
   3500,
   3600,
   3700,
   3800,
   3900,
   4000,
   4100,
   4200,
   4300,
   4400,
   4500,
   4600,
   4700,
   4800,
   4900,
   5000,
   5100,
   5200,
   5300,
   5400,
   5500,
   5600,
   5700,
   5800,
   5900,
   6000,
   6100,
   6200,
   6300,
   6400,
   6500,
   6600,
   6700,
   6800,
   6900,
   7000,
   7100,
   7200,
   7300,
   7400,
   7500,
   7600,
   7700,
   7800,
   7900,
   8000,
   8100,
   8200,
   8300,
   8400,
   8500,
   8600,
   8700,
   8800,
   8900,
   9000,
   9100,
   9300,
   9400,
   9500,
   9600,
   9700,
   9900,
   10000};
   Double_t Graph_fy3002[79] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_felx3002[79] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fely3002[79] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fehx3002[79] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fehy3002[79] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(79,Graph_fx3002,Graph_fy3002,Graph_felx3002,Graph_fehx3002,Graph_fely3002,Graph_fehy3002);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","Graph",100,1200,10800);
   Graph_Graph3002->SetMinimum(0.0011);
   Graph_Graph3002->SetMaximum(1.1);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3002->SetLineColor(ci);
   Graph_Graph3002->SetMarkerStyle(8);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   multigraph->Add(grae,"");
   
   Double_t Graph_fx1[79] = {
   2000,
   2100,
   2200,
   2300,
   2400,
   2500,
   2600,
   2700,
   2800,
   2900,
   3000,
   3100,
   3200,
   3300,
   3400,
   3500,
   3600,
   3700,
   3800,
   3900,
   4000,
   4100,
   4200,
   4300,
   4400,
   4500,
   4600,
   4700,
   4800,
   4900,
   5000,
   5100,
   5200,
   5300,
   5400,
   5500,
   5600,
   5700,
   5800,
   5900,
   6000,
   6100,
   6200,
   6300,
   6400,
   6500,
   6600,
   6700,
   6800,
   6900,
   7000,
   7100,
   7200,
   7300,
   7400,
   7500,
   7600,
   7700,
   7800,
   7900,
   8000,
   8100,
   8200,
   8300,
   8400,
   8500,
   8600,
   8700,
   8800,
   8900,
   9000,
   9100,
   9300,
   9400,
   9500,
   9600,
   9700,
   9900,
   10000};
   Double_t Graph_fy1[79] = {
   0.07420169,
   0.04122146,
   0.008521095,
   0.00991157,
   0.09779412,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.3328237,
   0.1409465,
   0.08734031,
   0.04785098,
   0.03122212,
   0.02207123,
   0.01257546,
   0.00990419,
   0.01906553,
   0.09661097,
   0.5,
   0.5,
   0.5,
   0.5,
   0.2584819,
   0.1188145,
   0.07596725,
   0.07655196,
   0.1186511,
   0.2196793,
   0.3863184,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.05755,
   0.019656,
   0.007862,
   0.002906,
   0.001022,
   0.0004569138,
   0.000214,
   0.000125,
   5.8e-05,
   4.8e-05,
   4.7e-05,
   5e-05,
   7e-05,
   8.9e-05,
   9.8e-05,
   0.000123,
   0.000158,
   0.0001863727,
   0.0002094188,
   0.000267,
   0.000336,
   0.0004939759,
   0.0006603206};
   TGraph *graph = new TGraph(79,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,1200,10800);
   Graph_Graph1->SetMinimum(4.23e-05);
   Graph_Graph1->SetMaximum(0.5499953);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->SetMarkerStyle(8);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2[8] = {
   2000,
   3000,
   4000,
   6000,
   7000,
   8000,
   8400,
   9000};
   Double_t Graph_fy2[8] = {
   0.432094,
   0.0869226,
   0.0184735,
   0.000757826,
   0.00012514,
   1.63584e-05,
   6.45745e-06,
   1.43795e-06};
   graph = new TGraph(8,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(10);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,1300,9700);
   Graph_Graph2->SetMinimum(1.294155e-06);
   Graph_Graph2->SetMaximum(0.4753033);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->SetMarkerStyle(8);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   multigraph->Draw("a3");
   multigraph->GetXaxis()->SetTitle("Four-jet resonance mass [TeV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(1000);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Local p-value");
   multigraph->GetYaxis()->SetNdivisions(10508);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.052);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   Double_t Graph0_fx3[79] = {
   2000,
   2100,
   2200,
   2300,
   2400,
   2500,
   2600,
   2700,
   2800,
   2900,
   3000,
   3100,
   3200,
   3300,
   3400,
   3500,
   3600,
   3700,
   3800,
   3900,
   4000,
   4100,
   4200,
   4300,
   4400,
   4500,
   4600,
   4700,
   4800,
   4900,
   5000,
   5100,
   5200,
   5300,
   5400,
   5500,
   5600,
   5700,
   5800,
   5900,
   6000,
   6100,
   6200,
   6300,
   6400,
   6500,
   6600,
   6700,
   6800,
   6900,
   7000,
   7100,
   7200,
   7300,
   7400,
   7500,
   7600,
   7700,
   7800,
   7900,
   8000,
   8100,
   8200,
   8300,
   8400,
   8500,
   8600,
   8700,
   8800,
   8900,
   9000,
   9100,
   9300,
   9400,
   9500,
   9600,
   9700,
   9900,
   10000};
   Double_t Graph0_fy3[79] = {
   0.07420169,
   0.04122146,
   0.008521095,
   0.00991157,
   0.09779412,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.3328237,
   0.1409465,
   0.08734031,
   0.04785098,
   0.03122212,
   0.02207123,
   0.01257546,
   0.00990419,
   0.01906553,
   0.09661097,
   0.5,
   0.5,
   0.5,
   0.5,
   0.2584819,
   0.1188145,
   0.07596725,
   0.07655196,
   0.1186511,
   0.2196793,
   0.3863184,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.05755,
   0.019656,
   0.007862,
   0.002906,
   0.001022,
   0.0004569138,
   0.000214,
   0.000125,
   5.8e-05,
   4.8e-05,
   4.7e-05,
   5e-05,
   7e-05,
   8.9e-05,
   9.8e-05,
   0.000123,
   0.000158,
   0.0001863727,
   0.0002094188,
   0.000267,
   0.000336,
   0.0004939759,
   0.0006603206};
   graph = new TGraph(79,Graph0_fx3,Graph0_fy3);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,1200,10800);
   Graph_Graph_Graph13->SetMinimum(4.23e-05);
   Graph_Graph_Graph13->SetMaximum(0.5499953);
   Graph_Graph_Graph13->SetDirectory(0);
   Graph_Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph13->SetLineColor(ci);
   Graph_Graph_Graph13->SetMarkerStyle(8);
   Graph_Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph13->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph13->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph_Graph13->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph13->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph13);
   
   graph->Draw("lp ");
   TLatex *   tex = new TLatex(0.18,0.83,"CMS #scale[0.7]{#it{#bf{Preliminary}}}");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.56,0.92,"138 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0,0,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6,0.85,"Y#rightarrow X X #rightarrow (jj) (jj)");
tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6,0.81,"M(X)/M(Y)= 0.25");
tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   TLine *line = new TLine(2000,0.5,10000,0.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2000,0.1586552,2550,0.1586552);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3000,0.1586552,10000,0.1586552);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2000,0.02275013,2550,0.02275013);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3000,0.02275013,10000,0.02275013);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2000,0.001349898,2550,0.001349898);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3000,0.001349898,10000,0.001349898);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2000,3.167124e-05,2550,3.167124e-05);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3000,3.167124e-05,10000,3.167124e-05);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
      tex = new TLatex(2800,0.1586552,"1#sigma");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2800,0.02275013,"2#sigma");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2800,0.001349898,"3#sigma");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2800,3.167124e-05,"4#sigma");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(2000,0.000152,7250,0.000152);

   ci = TColor::GetColor("#0000ff");
   line->SetLineColor(ci);
   line->SetLineStyle(7);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(7750,0.000152,10000,0.000152);

   ci = TColor::GetColor("#0000ff");
   line->SetLineColor(ci);
   line->SetLineStyle(7);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2000,2.02e-05,7250,2.02e-05);

   ci = TColor::GetColor("#0000ff");
   line->SetLineColor(ci);
   line->SetLineStyle(7);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(7750,2.02e-05,10000,2.02e-05);

   ci = TColor::GetColor("#0000ff");
   line->SetLineColor(ci);
   line->SetLineStyle(7);
   line->SetLineWidth(2);
   line->Draw();
      tex = new TLatex(7500,0.000152,"1#sigma");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(7500,2.02e-05,"2#sigma");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(11200,0.4,"Global p-value");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetTextAngle(-90);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10500,9.25e-05,"10^{-1}");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10200,1,"1");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10500,0.000874,"0.5");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10500,0.00368,"0.9");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10500,8.816045e-06,"10^{-2}");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(9734,1,10000,1);
   line->Draw();
   line = new TLine(9734,0.00368,10000,0.00368);
   line->Draw();
   line = new TLine(9734,0.000874,10000,0.000874);
   line->Draw();
   line = new TLine(9734,9.25e-05,10000,9.25e-05);
   line->Draw();
   line = new TLine(9734,8.816045e-06,10000,8.816045e-06);
   line->Draw();
   
   Double_t Graph0_fx4[79] = {
   2000,
   2100,
   2200,
   2300,
   2400,
   2500,
   2600,
   2700,
   2800,
   2900,
   3000,
   3100,
   3200,
   3300,
   3400,
   3500,
   3600,
   3700,
   3800,
   3900,
   4000,
   4100,
   4200,
   4300,
   4400,
   4500,
   4600,
   4700,
   4800,
   4900,
   5000,
   5100,
   5200,
   5300,
   5400,
   5500,
   5600,
   5700,
   5800,
   5900,
   6000,
   6100,
   6200,
   6300,
   6400,
   6500,
   6600,
   6700,
   6800,
   6900,
   7000,
   7100,
   7200,
   7300,
   7400,
   7500,
   7600,
   7700,
   7800,
   7900,
   8000,
   8100,
   8200,
   8300,
   8400,
   8500,
   8600,
   8700,
   8800,
   8900,
   9000,
   9100,
   9300,
   9400,
   9500,
   9600,
   9700,
   9900,
   10000};
   Double_t Graph0_fy4[79] = {
   0.07420169,
   0.04122146,
   0.008521095,
   0.00991157,
   0.09779412,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.3328237,
   0.1409465,
   0.08734031,
   0.04785098,
   0.03122212,
   0.02207123,
   0.01257546,
   0.00990419,
   0.01906553,
   0.09661097,
   0.5,
   0.5,
   0.5,
   0.5,
   0.2584819,
   0.1188145,
   0.07596725,
   0.07655196,
   0.1186511,
   0.2196793,
   0.3863184,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.05755,
   0.019656,
   0.007862,
   0.002906,
   0.001022,
   0.0004569138,
   0.000214,
   0.000125,
   5.8e-05,
   4.8e-05,
   4.7e-05,
   5e-05,
   7e-05,
   8.9e-05,
   9.8e-05,
   0.000123,
   0.000158,
   0.0001863727,
   0.0002094188,
   0.000267,
   0.000336,
   0.0004939759,
   0.0006603206};
   graph = new TGraph(79,Graph0_fx4,Graph0_fy4);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph_Graph134 = new TH1F("Graph_Graph_Graph_Graph134","Graph",100,1200,10800);
   Graph_Graph_Graph_Graph134->SetMinimum(4.23e-05);
   Graph_Graph_Graph_Graph134->SetMaximum(0.5499953);
   Graph_Graph_Graph_Graph134->SetDirectory(0);
   Graph_Graph_Graph_Graph134->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph134->SetLineColor(ci);
   Graph_Graph_Graph_Graph134->SetMarkerStyle(8);
   Graph_Graph_Graph_Graph134->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph134->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph134->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph134->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph134->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph134->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph134->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph_Graph_Graph134->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph134->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph134->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph134->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph134->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph134->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph134);
   
   graph->Draw("lp ");
      tex = new TLatex(2000,3e-06,"2");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(3000,3e-06,"3");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(4000,3e-06,"4");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5000,3e-06,"5");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(6000,3e-06,"6");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(7000,3e-06,"7");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(8000,3e-06,"8");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(9000,3e-06,"9");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10000,3e-06,"10");
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *_copy__1 = new TH1F("_copy__1"," ",100,2000,10000);
   _copy__1->SetMinimum(5e-06);
   _copy__1->SetMaximum(5);
   _copy__1->SetDirectory(0);
   _copy__1->SetStats(0);

   ci = TColor::GetColor("#000099");
   _copy__1->SetLineColor(ci);
   _copy__1->SetMarkerStyle(8);
   _copy__1->GetXaxis()->SetTitle("Four-jet resonance mass [TeV]");
   _copy__1->GetXaxis()->SetLabelFont(42);
   _copy__1->GetXaxis()->SetLabelOffset(1000);
   _copy__1->GetXaxis()->SetLabelSize(0.05);
   _copy__1->GetXaxis()->SetTitleSize(0.06);
   _copy__1->GetXaxis()->SetTitleFont(42);
   _copy__1->GetYaxis()->SetTitle("Local p-value");
   _copy__1->GetYaxis()->SetNdivisions(10508);
   _copy__1->GetYaxis()->SetLabelFont(42);
   _copy__1->GetYaxis()->SetLabelSize(0.05);
   _copy__1->GetYaxis()->SetTitleSize(0.052);
   _copy__1->GetYaxis()->SetTitleOffset(1.2);
   _copy__1->GetYaxis()->SetTitleFont(42);
   _copy__1->GetZaxis()->SetLabelFont(42);
   _copy__1->GetZaxis()->SetLabelSize(0.05);
   _copy__1->GetZaxis()->SetTitleSize(0.06);
   _copy__1->GetZaxis()->SetTitleFont(42);
   _copy__1->Draw("sameaxis");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
