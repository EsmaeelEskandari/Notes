void ExclusionSTauSTauLsp1()
{
//=========Macro generated from canvas: ExclusionSTauSTauLsp1/ExclusionSTauSTauLsp1
//=========  (Mon Jul 18 12:56:44 2016) by ROOT version6.07/07
   TCanvas *ExclusionSTauSTauLsp1 = new TCanvas("ExclusionSTauSTauLsp1", "ExclusionSTauSTauLsp1",177,45,848,676);
   gStyle->SetOptTitle(0);
   ExclusionSTauSTauLsp1->Range(52.29244,-2.739987,327.7404,22.87889);
   ExclusionSTauSTauLsp1->SetFillColor(0);
   ExclusionSTauSTauLsp1->SetBorderMode(0);
   ExclusionSTauSTauLsp1->SetBorderSize(2);
   ExclusionSTauSTauLsp1->SetLeftMargin(0.1405258);
   ExclusionSTauSTauLsp1->SetRightMargin(0.03173164);
   ExclusionSTauSTauLsp1->SetTopMargin(0.05748664);
   ExclusionSTauSTauLsp1->SetFrameBorderMode(0);
   ExclusionSTauSTauLsp1->SetFrameBorderMode(0);
   
   Double_t TwoSigmaBand_fx3001[20] = {
   109.9792,
   119.9682,
   129.9573,
   139.9463,
   149.9354,
   159.9244,
   169.9135,
   179.9025,
   189.8916,
   199.8806,
   209.8697,
   219.8587,
   229.8478,
   239.8368,
   249.8258,
   259.8149,
   269.8039,
   279.793,
   289.782,
   299.7711};
   Double_t TwoSigmaBand_fy3001[20] = {
   3.767483,
   2.979736,
   3.013986,
   3.048236,
   2.808487,
   3.561983,
   4.144231,
   3.733233,
   4.589479,
   5.000477,
   5.000477,
   5.445725,
   5.856723,
   6.986967,
   7.534965,
   8.52821,
   8.733709,
   9.076208,
   10.68595,
   12.02169};
   Double_t TwoSigmaBand_felx3001[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t TwoSigmaBand_fely3001[20] = {
   1.739755,
   1.621687,
   1.809748,
   1.825452,
   1.302321,
   1.687202,
   2.104276,
   1.769249,
   2.496864,
   2.092553,
   2.176961,
   2.70937,
   2.369431,
   3.383794,
   3.618713,
   4.350183,
   3.910419,
   4.26718,
   4.300303,
   6.240278};
   Double_t TwoSigmaBand_fehx3001[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t TwoSigmaBand_fehy3001[20] = {
   1.088921,
   0.8873882,
   0.8840535,
   1.196912,
   0.8405106,
   0.9121749,
   1.297044,
   1.634516,
   1.81632,
   1.402677,
   1.464064,
   1.339047,
   1.597832,
   2.033412,
   2.102903,
   2.322365,
   2.32065,
   2.475243,
   2.958817,
   3.51449};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,TwoSigmaBand_fx3001,TwoSigmaBand_fy3001,TwoSigmaBand_felx3001,TwoSigmaBand_fehx3001,TwoSigmaBand_fely3001,TwoSigmaBand_fehy3001);
   grae->SetName("TwoSigmaBand");
   grae->SetTitle("STauSTau");
   grae->SetFillColor(3);
   grae->SetLineColor(2);
   grae->SetLineWidth(4);
   
   TH1F *Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001 = new TH1F("Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001","STauSTau",100,91,319);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->SetMinimum(0);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->SetMaximum(21.40615);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->SetDirectory(0);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->SetLineColor(ci);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetXaxis()->SetTitle("m_{#tilde{#tau}} (GeV)");
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetYaxis()->SetTitle("95% CL upper limit on  #sigma_{upper limit} / #sigma_{pp #rightarrow #tilde{#tau} #tilde{#tau}}");
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetYaxis()->SetTitleOffset(1.24);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_Graph_TwoSigmaBand3001300130013001);
   
   grae->Draw("ap4");
   
   Double_t Obs_fx1[20] = {
   110,
   120,
   130,
   140,
   150,
   160,
   170,
   180,
   190,
   200,
   210,
   220,
   230,
   240,
   250,
   260,
   270,
   280,
   290,
   300};
   Double_t Obs_fy1[20] = {
   2.597703,
   1.912218,
   1.935903,
   2.02768,
   1.926344,
   2.633813,
   2.896743,
   3.020764,
   3.59617,
   3.829083,
   3.930665,
   4.477473,
   4.599247,
   6.000636,
   6.176911,
   7.016503,
   7.187856,
   7.612455,
   9.625117,
   10.24726};
   TGraph *graph = new TGraph(20,Obs_fx1,Obs_fy1);
   graph->SetName("Obs");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(4);
   
   TH1F *Graph_Graph_Graph_Graph_Obs1111 = new TH1F("Graph_Graph_Graph_Graph_Obs1111","Graph",100,91,319);
   Graph_Graph_Graph_Graph_Obs1111->SetMinimum(1.229018);
   Graph_Graph_Graph_Graph_Obs1111->SetMaximum(10.602);
   Graph_Graph_Graph_Graph_Obs1111->SetDirectory(0);
   Graph_Graph_Graph_Graph_Obs1111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Obs1111->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Obs1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Obs1111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Obs1111->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Obs1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Obs1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Obs1111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Obs1111->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Obs1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Obs1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Obs1111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Obs1111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Obs1111->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Obs1111);
   
   graph->Draw("c");
   
   Double_t Expected_fx2[20] = {
   109.9451,
   119.9942,
   129.8786,
   139.9277,
   149.9769,
   159.8613,
   169.9104,
   179.9595,
   189.8439,
   199.8931,
   209.9422,
   219.9913,
   229.8757,
   239.9249,
   249.974,
   259.8584,
   269.9075,
   279.9566,
   289.841,
   299.8902};
   Double_t Expected_fy2[20] = {
   3.313199,
   2.477697,
   2.535317,
   2.662083,
   2.535317,
   3.37082,
   3.860597,
   3.658924,
   4.416638,
   4.75372,
   4.75372,
   5.38755,
   5.733275,
   6.914502,
   7.346659,
   8.349262,
   8.556697,
   8.960043,
   10.74629,
   12.04276};
   graph = new TGraph(20,Expected_fx2,Expected_fy2);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineWidth(4);
   graph->SetMarkerColor(2);
   
   TH1F *Graph_Graph_Graph_Graph_Expected2222 = new TH1F("Graph_Graph_Graph_Graph_Expected2222","Graph",100,91,319);
   Graph_Graph_Graph_Graph_Expected2222->SetMinimum(1.521094);
   Graph_Graph_Graph_Graph_Expected2222->SetMaximum(12.98672);
   Graph_Graph_Graph_Graph_Expected2222->SetDirectory(0);
   Graph_Graph_Graph_Graph_Expected2222->SetStats(0);
   Graph_Graph_Graph_Graph_Expected2222->SetLineColor(2);
   Graph_Graph_Graph_Graph_Expected2222->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Expected2222->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Expected2222->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Expected2222->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Expected2222->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Expected2222->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Expected2222->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Expected2222->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Expected2222->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Expected2222->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Expected2222->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Expected2222->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Expected2222);
   
   graph->Draw("c");
   TLine *line = new TLine(91,1,319,1);
   line->SetLineStyle(7);
   line->Draw();
   
   TLegend *leg = new TLegend(0.1761229,0.6538462,0.5579196,0.8589744,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.0400641);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Obs","Observed","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TwoSigmaBand","Expected #pm 1 #sigma","fl");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(91.56716,22.34501,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(91.56716,21.92252,"CMS");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04026846);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(105.0378,19.75864,"pp#rightarrow#tilde{#tau}#tilde{#tau} , #tilde{#tau}#rightarrow#tau_{h}#chi^{0}_{1}, m_{#chi^{0}_{1}}= 0 GeV");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(266.2042,21.93461,"18.1 fb^{-1} (8 TeV)");
   tex->SetTextFont(42);
   tex->SetTextSize(0.0400641);
   tex->SetLineWidth(2);
   tex->Draw();
   ExclusionSTauSTauLsp1->Modified();
   ExclusionSTauSTauLsp1->cd();
   ExclusionSTauSTauLsp1->SetSelected(ExclusionSTauSTauLsp1);
   ExclusionSTauSTauLsp1->ToggleToolBar();
}
