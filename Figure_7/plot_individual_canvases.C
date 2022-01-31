#include "TF1.h"
#include "TH1D.h"
#include "TH1F.h"
#include "TH2D.h"
#include "TH2F.h"
#include "TTree.h"
#include "TFile.h"
#include "TDirectory.h"
#include "TPaveText.h"
#include "TLegend.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TStyle.h"
#include "TChain.h"
#include <iostream>
#include <fstream>
#include "TSystem.h"
#include "TROOT.h"
#include "TMath.h"
#include "TLatex.h"
#include "setTDRStyle.C"

void plot_individual_canvases(){

gROOT->LoadMacro("setTDRStyle.C");
setTDRStyle();

TFile *f_alpha= new TFile("test_pulls_alpha1.root");
TH1D *pull_SF_moddijet_alpha = (TH1D*)(f_alpha->Get("h_FourjetMass"));


TCanvas *c1 = new TCanvas("c1","Signal region Data & Prediction",1800,800);

c1->cd();



c1->SetTopMargin(0);
c1->SetBottomMargin(0);
c1->SetLeftMargin(0.1);
c1->SetRightMargin(0);
c1->cd()->SetLogx(1);
c1->SetGridx();
c1->SetGridy();

	
pull_SF_moddijet_alpha->GetXaxis()->SetTitle("Fourjet mass [TeV]");
pull_SF_moddijet_alpha->GetXaxis()->SetNoExponent();
pull_SF_moddijet_alpha->GetXaxis()->SetMoreLogLabels();
pull_SF_moddijet_alpha->GetXaxis()->SetTitleSize(2*0.06);
pull_SF_moddijet_alpha->GetYaxis()->SetTitleSize(2*0.06);
pull_SF_moddijet_alpha->GetXaxis()->SetLabelSize(2*0.07);
pull_SF_moddijet_alpha->GetYaxis()->SetLabelSize(0.09);
pull_SF_moddijet_alpha->GetXaxis()->SetLabelOffset(1000);
pull_SF_moddijet_alpha->GetXaxis()->SetTitleOffset(1.2);
pull_SF_moddijet_alpha->GetYaxis()->SetTitleOffset(0.4);
pull_SF_moddijet_alpha->GetYaxis()->SetRangeUser(-2.99,2.99);
pull_SF_moddijet_alpha->GetYaxis()->SetNdivisions(210); 
pull_SF_moddijet_alpha->SetLineWidth(1);

pull_SF_moddijet_alpha->SetYTitle("");
pull_SF_moddijet_alpha->SetFillColor(2);
pull_SF_moddijet_alpha->Draw("same HIST");

TPaveText *pave = new TPaveText(0.3,0.9,0.45,0.95,"NDC");
pave->SetFillColor(0);
//pave->SetLineColor(0);
pave->SetBorderSize(0);
//pave->SetFillStyle(4100);
//pave->SetTextFont(42);
pave->SetTextSize(0.12);
pave->AddText(" 0.10 < #alpha < 0.12");
pave->Draw("same");

TPaveText *pavechi = new TPaveText(0.85,0.05,0.9,0.25,"NDC");
pavechi->SetFillColor(0);
//pave->SetLineColor(0);
pavechi->SetBorderSize(0);
//pave->SetFillStyle(4100);
//pave->SetTextFont(42);
pavechi->SetTextSize(0.12);
pavechi->AddText("#splitline{#chi^{2}/NDF =}{21.8/29}");
//pavechi->AddText("21.8/29");
pavechi->Draw("same");

////paveL1->SetFillColor(0);
//pave->SetLineColor(0);
////paveL1->SetBorderSize(0);
//pave->SetFillStyle(4100);
//pave->SetTextFont(42);
////paveL1->SetTextSize(0.1);
////paveL1->AddText("137 fb^{-1} (13 TeV)");
////paveL1->Draw("same");



/*c1->cd();

	c1->SetTopMargin(0);
c1->SetBottomMargin(0);
c1->SetLeftMargin(0.1);
c1->SetRightMargin(0);
	c1->cd()->SetLogx(1);
	c1->SetGridx();
	c1->SetGridy();



        //
       // pull_SF_moddijet_alpha->GetXaxis()->SetTitle("Fourjet mass [TeV]");
        pull_SF_moddijet_alpha->GetXaxis()->SetNoExponent();
        pull_SF_moddijet_alpha->GetXaxis()->SetMoreLogLabels();
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleSize(2*0.);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleSize(2*0.06);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelSize(2*0.07);
        pull_SF_moddijet_alpha->GetYaxis()->SetLabelSize(0.09);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelOffset(1000);
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleOffset(1.2);
        pull_SF_moddijet_alpha->GetYaxis()->SetRangeUser(-2.99,2.99);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleOffset(0.4);

        pull_SF_moddijet_alpha->GetYaxis()->SetNdivisions(210); 
        pull_SF_moddijet_alpha->SetLineWidth(1);


        



        pull_SF_moddijet_alpha->SetYTitle("");
        pull_SF_moddijet_alpha->SetFillColor(2);
        pull_SF_moddijet_alpha->Draw("same HIST");




	
TPaveText *pave3 = new TPaveText(0.3,0.9,0.45,0.95,"NDC");
 pave3->SetFillColor(0);
//pave->SetLineColor(0);
pave3->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
  pave3->SetTextSize(0.12);
  pave3->AddText(" 0.12 < #alpha < 0.14");
pave3->Draw("same");


TPaveText *pavechi2 = new TPaveText(0.8,0.15,0.85,0.25,"NDC");
 pavechi2->SetFillColor(0);
//pave->SetLineColor(0);
pavechi2->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
  pavechi2->SetTextSize(0.1);
  pavechi2->AddText("#chi^{2}/NDF = 20.5/28.0");
pavechi2->Draw("same");

////paveL1->Draw("same");

*/

/*c1->cd();

	
c1->SetTopMargin(0);
c1->SetBottomMargin(0);
c1->SetLeftMargin(0.1);
c1->SetRightMargin(0);
	
	c1->cd()->SetLogx(1);
	c1->SetGridx();
	c1->SetGridy();

	


        //
       // pull_SF_moddijet_alpha->GetXaxis()->SetTitle("Fourjet mass [TeV]");
        pull_SF_moddijet_alpha->GetXaxis()->SetNoExponent();
        pull_SF_moddijet_alpha->GetXaxis()->SetMoreLogLabels();
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleSize(2*0.0);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleSize(2*0.06);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelSize(2*0.07);
        pull_SF_moddijet_alpha->GetYaxis()->SetLabelSize(0.09);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelOffset(1000);
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleOffset(1.2);
        pull_SF_moddijet_alpha->GetYaxis()->SetRangeUser(-2.99,2.99);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleOffset(0.4);

        pull_SF_moddijet_alpha->GetYaxis()->SetNdivisions(210); 
        pull_SF_moddijet_alpha->SetLineWidth(1);


        

	


        pull_SF_moddijet_alpha->SetYTitle("");
        pull_SF_moddijet_alpha->SetFillColor(2);
        pull_SF_moddijet_alpha->Draw("same HIST");


TPaveText *pave3 = new TPaveText(0.3,0.9,0.45,0.95,"NDC");
 pave3->SetFillColor(0);
//pave->SetLineColor(0);
pave3->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
  pave3->SetTextSize(0.12);
  pave3->AddText(" 0.14 < #alpha < 0.16");
pave3->Draw("same");


TPaveText *pavechi2 = new TPaveText(0.8,0.15,0.85,0.25,"NDC");
 pavechi2->SetFillColor(0);
//pave->SetLineColor(0);
pavechi2->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
  pavechi2->SetTextSize(0.1);
  pavechi2->AddText("#chi^{2}/NDF = 20.3/30.0");
pavechi2->Draw("same");

*/	



/*c1->cd();
c1->SetTopMargin(0);
c1->SetBottomMargin(0);
c1->SetLeftMargin(0.1);
c1->SetRightMargin(0);
	
	
	c1->cd()->SetLogx(1);
	c1->SetGridx();
	c1->SetGridy();

	


        //
        //pull_SF_moddijet_alpha->GetXaxis()->SetTitle("Fourjet mass [TeV]");
        pull_SF_moddijet_alpha->GetXaxis()->SetNoExponent();
        pull_SF_moddijet_alpha->GetXaxis()->SetMoreLogLabels();
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleSize(2*0.0);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleSize(2*0.06);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelSize(2*0.07);
        pull_SF_moddijet_alpha->GetYaxis()->SetLabelSize(0.09);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelOffset(1000);
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleOffset(1.2);
        pull_SF_moddijet_alpha->GetYaxis()->SetRangeUser(-2.99,2.99);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleOffset(0.4);

      /*  pull_SF_moddijet_alpha->GetYaxis()->SetNdivisions(210); 
        pull_SF_moddijet_alpha->SetLineWidth(1);


        




        pull_SF_moddijet_alpha->SetYTitle("");
        pull_SF_moddijet_alpha->SetFillColor(2);
        pull_SF_moddijet_alpha->Draw("same HIST");*/

	
/*TPaveText *pave5 = new TPaveText(0.3,0.9,0.45,0.95,"NDC");
 pave5->SetFillColor(0);
//pave->SetLineColor(0);
pave5->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
  pave5->SetTextSize(0.12);
  pave5->AddText(" 0.16 < #alpha < 0.18");
pave5->Draw("same");

TPaveText *pavechi4 = new TPaveText(0.8,0.15,0.85,0.25,"NDC");
 pavechi4->SetFillColor(0);
//pave->SetLineColor(0);
pavechi4->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
  pavechi4->SetTextSize(0.1);
  pavechi4->AddText("#chi^{2}/NDF = 21.8/27.0");
pavechi4->Draw("same");

////paveL1->Draw("same");

*/


/*c1->cd();


c1->SetTopMargin(0);
c1->SetBottomMargin(0);
c1->SetLeftMargin(0.1);
c1->SetRightMargin(0);
	
	c1->cd()->SetLogx(1);
	c1->SetGridx();
	c1->SetGridy();

	


        //
        //pull_SF_moddijet_alpha->GetXaxis()->SetTitle("Fourjet mass [TeV]");
        pull_SF_moddijet_alpha->GetXaxis()->SetNoExponent();
        pull_SF_moddijet_alpha->GetXaxis()->SetMoreLogLabels();
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleSize(2*0.0);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleSize(2*0.06);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelSize(2*0.07);
        pull_SF_moddijet_alpha->GetYaxis()->SetLabelSize(0.09);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelOffset(1000);
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleOffset(1.2);
        pull_SF_moddijet_alpha->GetYaxis()->SetRangeUser(-2.99,2.99);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleOffset(0.4);

        pull_SF_moddijet_alpha->GetYaxis()->SetNdivisions(210); 
        pull_SF_moddijet_alpha->SetLineWidth(1);


        



        pull_SF_moddijet_alpha->SetYTitle("");
        pull_SF_moddijet_alpha->SetFillColor(2);
        pull_SF_moddijet_alpha->Draw("same HIST");

	
TPaveText *pave6 = new TPaveText(0.3,0.9,0.45,0.95,"NDC");
 pave6->SetFillColor(0);
//pave->SetLineColor(0);
pave6->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
  pave6->SetTextSize(0.12);
  pave6->AddText(" 0.18 < #alpha < 0.20");
pave6->Draw("same");

TPaveText *pavechi5 = new TPaveText(0.8,0.15,0.85,0.25,"NDC");
 pavechi5->SetFillColor(0);
//pave->SetLineColor(0);
pavechi5->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
  pavechi5->SetTextSize(0.1);
  pavechi5->AddText("#chi^{2}/NDF = 22.3/29.0");
pavechi5->Draw("same");
*/


/*c1->cd();

c1->cd();
c1->SetTopMargin(0);
c1->SetBottomMargin(0);
c1->SetLeftMargin(0.1);
c1->SetRightMargin(0);

	
c1->cd()->SetLogx(1);
	c1->SetGridx();
	c1->SetGridy();


        //
       // pull_SF_moddijet_alpha->GetXaxis()->SetTitle("Fourjet mass [TeV]");
        pull_SF_moddijet_alpha->GetXaxis()->SetNoExponent();
        pull_SF_moddijet_alpha->GetXaxis()->SetMoreLogLabels();
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleSize(2*0.);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleSize(2*0.06);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelSize(2*0.07);
        pull_SF_moddijet_alpha->GetYaxis()->SetLabelSize(0.09);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelOffset(1000);
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleOffset(1.2);
        pull_SF_moddijet_alpha->GetYaxis()->SetRangeUser(-2.99,2.99);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleOffset(0.4);

        pull_SF_moddijet_alpha->GetYaxis()->SetNdivisions(210); 
        pull_SF_moddijet_alpha->SetLineWidth(1);


        



        pull_SF_moddijet_alpha->SetYTitle("");
        pull_SF_moddijet_alpha->SetFillColor(2);
        pull_SF_moddijet_alpha->Draw("same HIST");




	
TPaveText *pave14 = new TPaveText(0.3,0.9,0.45,0.95,"NDC");
 pave14->SetFillColor(0);
//pave->SetLineColor(0);
pave14->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
  pave14->SetTextSize(0.11);
  pave14->AddText("0.18 < #alpha < 0.20");
pave14->Draw("same");


TPaveText *pavechi7 = new TPaveText(0.85,0.05,0.9,0.25,"NDC");
 pavechi7->SetFillColor(0);
//pave->SetLineColor(0);
pavechi7->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
 pavechi7->SetTextSize(0.12);
  pavechi7->AddText("#splitline{#chi^{2} / NDF =}{22.3 / 29}");
 // pavechi->AddText("21.8/29");
pavechi7->Draw("same");

////paveL1->Draw("same");

TLatex *xLab1 = new TLatex();
	xLab1->SetTextAlign(22);
	xLab1->SetTextFont(42);
	xLab1->SetTextSize(2*0.08);         
	xLab1->DrawLatex(2000, -3.4, "2");
	xLab1->DrawLatex(3000, -3.4, "3");
	xLab1->DrawLatex(4000, -3.4, "4");
	xLab1->DrawLatex(5000, -3.4, "5");
	xLab1->DrawLatex(6000, -3.4, "6");
	xLab1->DrawLatex(7000, -3.4, "7");
	xLab1->DrawLatex(8000, -3.4, "8");*/

/*c1->cd();

c1->cd();
c1->SetTopMargin(0);
c1->SetBottomMargin(0);
c1->SetLeftMargin(0.1);
c1->SetRightMargin(0);

	
c1->cd()->SetLogx(1);
	c1->SetGridx();
	c1->SetGridy();



	


        //
       // pull_SF_moddijet_alpha->GetXaxis()->SetTitle("Fourjet mass [TeV]");
        pull_SF_moddijet_alpha->GetXaxis()->SetNoExponent();
        pull_SF_moddijet_alpha->GetXaxis()->SetMoreLogLabels();
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleSize(2*0.0);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleSize(2*0.06);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelSize(2*0.07);
        pull_SF_moddijet_alpha->GetYaxis()->SetLabelSize(0.09);
        pull_SF_moddijet_alpha->GetXaxis()->SetLabelOffset(1000);
        pull_SF_moddijet_alpha->GetXaxis()->SetTitleOffset(1.2);
        pull_SF_moddijet_alpha->GetYaxis()->SetRangeUser(-2.99,2.99);
        pull_SF_moddijet_alpha->GetYaxis()->SetTitleOffset(0.4);

        pull_SF_moddijet_alpha->GetYaxis()->SetNdivisions(210); 
        pull_SF_moddijet_alpha->SetLineWidth(1);


        

	


        pull_SF_moddijet_alpha->SetYTitle("");
        pull_SF_moddijet_alpha->SetFillColor(2);
        pull_SF_moddijet_alpha->Draw("same HIST");

	
//TPaveText *pave8 = new TPaveText(0.3,0.9,0.45,0.95,"NDC");
TPaveText *pave8 = new TPaveText(0.23,0.88,0.38,0.93,"NDC");//0.3, 0.45
 pave8->SetFillColor(0);
//pave->SetLineColor(0);
pave8->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
  pave8->SetTextSize(0.11);//0.12
  pave8->AddText("0.32 < #alpha < 0.34");
pave8->Draw("same");




TPaveText *pavechi7 = new TPaveText(0.83,0.05,0.89,0.25,"NDC");//0.15-0.35
 pavechi7->SetFillColor(0);
//pave->SetLineColor(0);
pavechi7->SetBorderSize(0);
  //pave->SetFillStyle(4100);
  //pave->SetTextFont(42);
 pavechi7->SetTextSize(0.12);//0.12
  pavechi7->AddText("#splitline{#chi^{2} / NDF =}{26.0 / 25}");
 // pavechi->AddText("21.8/29");
pavechi7->Draw("same");


TLatex *xLab1 = new TLatex();
	xLab1->SetTextAlign(22);
	xLab1->SetTextFont(42);
	xLab1->SetTextSize(2*0.07);         
	xLab1->DrawLatex(2000, -3.4, "2");
	xLab1->DrawLatex(3000, -3.4, "3");
	xLab1->DrawLatex(4000, -3.4, "4");
	xLab1->DrawLatex(5000, -3.4, "5");
	xLab1->DrawLatex(6000, -3.4, "6");
	xLab1->DrawLatex(7000, -3.4, "7");
	xLab1->DrawLatex(8000, -3.4, "8");
//xLab1->DrawLatex(9000, -3.4, "9");

////paveL1->Draw("same");

*/

TFile *fout;

 fout = new TFile("pad2_margin_V3.root","RECREATE");


fout->cd();
c1->Write();
fout->Close();

}
