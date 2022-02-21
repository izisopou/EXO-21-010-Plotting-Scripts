#include "setTDRStyle.C"

void acceptanceVSmass_fig5(){

  gROOT->LoadMacro("setTDRStyle.C");
  setTDRStyle();

  //alpha=0.25
  double accEff[8]={0.14061, 0.17698, 0.18099, 0.188747, 0.18957, 0.187456, 0.1819 ,0.17098};  //with M4J cut
  double acc[8]={0.16034, 0.17764, 0.18121, 0.188747, 0.18957, 0.187456, 0.1819, 0.17098};
  //double acc[8]={0.160, 0.169, 0.173, 0.177, 0.180, 0.181, 0.182, 0.180};   //8400 was 0.18   ...old buggy
  //alpha bin 7
  double acc7[8]={0.20939, 0.196185, 0.188608, 0.181065, 0.17219, 0.177401, 0.16844 , 0.165657};
  //double acc7[8]={0.209, 0.202, 0.197, 0.193, 0.188, 0.187, 0.17, 0.184};
  //alpha bin 8
  double acc8[8]={0.40521, 0.393488, 0.385139, 0.388162, 0.387792, 0.379082, 0.37346 ,0.35722};
  //double acc8[8]={0.405, 0.399, 0.394, 0.392, 0.391, 0.389, 0.37, 0.385};
  //alpha bin 9
  double acc9[8]={0.256042, 0.238283, 0.251453, 0.252839, 0.254834, 0.255692, 0.2490, 0.234758};
  //double acc9[8]={0.265, 0.247, 0.248, 0.250, 0.251, 0.251, 0.25, 0.249};

  double mass[8]={2, 3, 4, 6, 7, 8.0, 8.4, 9};

  for(int i=0; i<8;i++){ 
      acc7[i] = acc7[i]*acc[i];
      acc8[i] = acc8[i]*acc[i];
      acc9[i] = acc9[i]*acc[i];
  }


auto cv = new TCanvas("cv","cv",800,600);
TGraph *gr_acc = new TGraphAsymmErrors(8, mass, acc);
gr_acc->GetXaxis()->SetTitle("Diquark mass [TeV]");
gr_acc->GetYaxis()->SetTitleOffset(0.95);
gr_acc->GetYaxis()->SetTitle("Acceptance x Efficiency");  
gr_acc->SetMarkerStyle(31);//25
gr_acc->GetYaxis()->SetRangeUser(0.,0.3);
gr_acc->Draw("AL*"); //AP"); 
cv->SetTickx(1); 
cv->SetTicky(1);


TGraph *gr_acc7 = new TGraphAsymmErrors(8, mass, acc7);
TGraph *gr_acc8 = new TGraphAsymmErrors(8, mass, acc8);
TGraph *gr_acc9 = new TGraphAsymmErrors(8, mass, acc9);
TGraph *gr_accEff = new TGraphAsymmErrors(8, mass, accEff);

  gr_acc8->SetMarkerStyle(24);
  gr_acc9->SetMarkerStyle(21);
  gr_acc7->SetMarkerStyle(20);

  gr_acc8->SetMarkerColor(4);
  gr_acc9->SetMarkerColor(6);
  gr_acc7->SetMarkerColor(8);
  gr_accEff->SetMarkerColor(2);
  gr_acc->SetMarkerColor(1);
    
  gr_acc7->Draw("P"); 
  gr_acc8->Draw("P"); 
  gr_acc9->Draw("P"); 
  gr_accEff->SetMarkerStyle(25);
  gr_accEff->Draw("P"); //L*"); 

  TLegend *leg1 =new TLegend(0.57, 0.69, 0.87, 0.85); //.90, .75, .60, .93
  leg1->SetFillColor(0);
  leg1->SetBorderSize(0);
  leg1->SetTextSize(0.035);
  leg1->AddEntry(gr_acc, "eff=1", "P");
  leg1->AddEntry(gr_accEff, "all #alpha slices", "P");
  leg1->AddEntry(gr_acc8, "0.24 < #alpha < 0.26 ", "P");
  leg1->AddEntry(gr_acc9, "0.26 < #alpha < 0.28 ", "P");
  leg1->AddEntry(gr_acc7, "0.22 < #alpha < 0.24 ", "P");

  leg1->Draw("same");

 TPaveText *paveCMS2 = new TPaveText(0.805,0.92,0.905,0.95,"NDC");
 paveCMS2->AddText("#bf{13 TeV}");
 paveCMS2->SetFillColor(0);
 paveCMS2->SetBorderSize(0);
 paveCMS2->SetTextSize(0.04);
 paveCMS2->Draw();

 TPaveText *paveCMS = new TPaveText(0.2,0.83,0.4,0.84,"NDC"); //for PAS
  paveCMS->AddText("CMS #scale[0.9]{#it{#bf{Simulation Preliminary}}}"); //for PAS
 //TPaveText *paveCMS = new TPaveText(0.135,0.83,0.335,0.84,"NDC"); //for PAPER
 //paveCMS->AddText("CMS #scale[0.9]{#it{#bf{Simulation}}}"); //for PAPER

 paveCMS->SetFillColor(0);
 paveCMS->SetBorderSize(0);
 paveCMS->SetTextSize(0.04);
 paveCMS->Draw();

 TPaveText *pave2 = new TPaveText(0.13,0.7, .45, .78,"NDC");
 pave2->SetTextAlign(11); //center alignment
 pave2->AddText("Diquark : S #rightarrow #chi #chi  #rightarrow (ug)(ug)" );
 pave2->AddText("M(#chi)/M(S) = 0.25");
 pave2->SetFillColor(0);
 pave2->SetBorderSize(0);
 pave2->SetTextSize(0.04);
 pave2->SetTextFont(42);
 pave2->Draw();

// cv->SaveAs("accVSmass.pdf");
 
 cv->SaveAs("Figure_5_LHS_PAS.C");
 cv->SaveAs("Figure_5_LHS_PAS.pdf");
 cv->SaveAs("Figure_5_LHS_PAS.png");

 //cv->SaveAs("Figure_5_LHS_PAPER.C");
 //cv->SaveAs("Figure_5_LHS_PAPER.pdf");
 //cv->SaveAs("Figure_5_LHS_PAPER.png");
 

}



