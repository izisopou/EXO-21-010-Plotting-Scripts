void Figure_5_LHS_PAS()
{
//=========Macro generated from canvas: cv/cv
//=========  (Mon Jan 31 13:25:09 2022) by ROOT version 6.24/06
   TCanvas *cv = new TCanvas("cv", "cv",130,121,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cv->Range(0,0,1,1);
   cv->SetFillColor(0);
   cv->SetBorderMode(0);
   cv->SetBorderSize(2);
   cv->SetTickx(1);
   cv->SetTicky(1);
   cv->SetFrameFillStyle(0);
   cv->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3001[8] = {
   2,
   3,
   4,
   6,
   7,
   8,
   8.4,
   9};
   Double_t Graph0_fy3001[8] = {
   0.16034,
   0.17764,
   0.18121,
   0.188747,
   0.18957,
   0.187456,
   0.1819,
   0.17098};
   Double_t Graph0_felx3001[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fely3001[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehx3001[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehy3001[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,Graph0_fx3001,Graph0_fy3001,Graph0_felx3001,Graph0_fehx3001,Graph0_fely3001,Graph0_fehy3001);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(3);
   
   TH1F *Graph_Graph03001 = new TH1F("Graph_Graph03001","Graph",100,1.3,9.7);
   Graph_Graph03001->SetMinimum(0);
   Graph_Graph03001->SetMaximum(0.3);
   Graph_Graph03001->SetDirectory(0);
   Graph_Graph03001->SetStats(0);
   Graph_Graph03001->SetLineWidth(2);
   Graph_Graph03001->SetMarkerStyle(20);
   Graph_Graph03001->GetXaxis()->SetTitle("Diquark mass [TeV]");
   Graph_Graph03001->GetXaxis()->SetNdivisions(505);
   Graph_Graph03001->GetXaxis()->SetLabelFont(42);
   Graph_Graph03001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph03001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph03001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph03001->GetXaxis()->SetTitleFont(42);
   Graph_Graph03001->GetYaxis()->SetTitle("Acceptance x Efficiency");
   Graph_Graph03001->GetYaxis()->SetNdivisions(505);
   Graph_Graph03001->GetYaxis()->SetLabelFont(42);
   Graph_Graph03001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph03001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph03001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph03001->GetYaxis()->SetTitleFont(42);
   Graph_Graph03001->GetZaxis()->SetNdivisions(505);
   Graph_Graph03001->GetZaxis()->SetLabelFont(42);
   Graph_Graph03001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph03001->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph03001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03001);
   
   grae->Draw("alp");
   
   Double_t Graph1_fx3002[8] = {
   2,
   3,
   4,
   6,
   7,
   8,
   8.4,
   9};
   Double_t Graph1_fy3002[8] = {
   0.03357359,
   0.0348503,
   0.03417766,
   0.03417548,
   0.03264206,
   0.03325488,
   0.03063924,
   0.02832403};
   Double_t Graph1_felx3002[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fely3002[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehx3002[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehy3002[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(8,Graph1_fx3002,Graph1_fy3002,Graph1_felx3002,Graph1_fehx3002,Graph1_fely3002,Graph1_fehy3002);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerColor(8);
   grae->SetMarkerStyle(20);
   grae->Draw("p");
   
   Double_t Graph2_fx3003[8] = {
   2,
   3,
   4,
   6,
   7,
   8,
   8.4,
   9};
   Double_t Graph2_fy3003[8] = {
   0.06497137,
   0.06989921,
   0.06979104,
   0.07326441,
   0.07351373,
   0.0710612,
   0.06793237,
   0.06107748};
   Double_t Graph2_felx3003[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fely3003[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fehx3003[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fehy3003[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(8,Graph2_fx3003,Graph2_fy3003,Graph2_felx3003,Graph2_fehx3003,Graph2_fely3003,Graph2_fehy3003);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(24);
   grae->Draw("p");
   
   Double_t Graph3_fx3004[8] = {
   2,
   3,
   4,
   6,
   7,
   8,
   8.4,
   9};
   Double_t Graph3_fy3004[8] = {
   0.04105377,
   0.04232859,
   0.0455658,
   0.0477226,
   0.04830888,
   0.047931,
   0.0452931,
   0.04013892};
   Double_t Graph3_felx3004[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fely3004[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fehx3004[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fehy3004[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(8,Graph3_fx3004,Graph3_fy3004,Graph3_felx3004,Graph3_fehx3004,Graph3_fely3004,Graph3_fehy3004);
   grae->SetName("Graph3");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerColor(6);
   grae->SetMarkerStyle(21);
   grae->Draw("p");
   
   Double_t Graph4_fx3005[8] = {
   2,
   3,
   4,
   6,
   7,
   8,
   8.4,
   9};
   Double_t Graph4_fy3005[8] = {
   0.14061,
   0.17698,
   0.18099,
   0.188747,
   0.18957,
   0.187456,
   0.1819,
   0.17098};
   Double_t Graph4_felx3005[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fely3005[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fehx3005[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fehy3005[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(8,Graph4_fx3005,Graph4_fy3005,Graph4_felx3005,Graph4_fehx3005,Graph4_fely3005,Graph4_fehy3005);
   grae->SetName("Graph4");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(25);
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","all #alpha slices (eff =1)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph4","all #alpha slices","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","0.24 < #alpha < 0.26 ","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph3","0.26 < #alpha < 0.28 ","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph1","0.22 < #alpha < 0.24 ","P");
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
   pt->SetTextSize(0.04);
   TText *pt_LaTex = pt->AddText("#bf{13 TeV}");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("CMS Simulation #scale[0.9]{#it{#bf{Preliminary}}}");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("Diquark : S #rightarrow #chi #chi  #rightarrow (ug)(ug)");
   pt_LaTex = pt->AddText("M(#chi)/M(S) = 0.25");
   pt->Draw();
   cv->Modified();
   cv->cd();
   cv->SetSelected(cv);
}
