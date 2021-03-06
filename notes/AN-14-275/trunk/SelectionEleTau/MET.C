void /home/hbakhshi/Documents/Notes/Team/notes/AN-14-275/trunk/SelectionEleTau/MET()
{
//=========Macro generated from canvas: MET_ratio_AllSUSYc_ratio_MET_MT2PreCut/
//=========  (Thu Aug  6 18:21:00 2015) by ROOT version6.02/04
   TCanvas *MET_ratio_AllSUSYc_ratio_MET_MT2PreCut = new TCanvas("MET_ratio_AllSUSYc_ratio_MET_MT2PreCut", "",628,149,600,602);
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->SetHighLightColor(2);
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->Range(0,0,1,1);
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->SetFillColor(0);
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->SetBorderMode(0);
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->SetBorderSize(2);
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MET_ratio_AllSUSY_plotpad_MET_MT2PreCut
   TPad *MET_ratio_AllSUSY_plotpad_MET_MT2PreCut = new TPad("MET_ratio_AllSUSY_plotpad_MET_MT2PreCut", "Pad containing the overlay plot",0,0.211838,1,1);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->Draw();
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->cd();
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->Range(-25.07345,-2.794416,393.4846,4.522867);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetFillColor(0);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetFillStyle(4000);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetBorderMode(0);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetBorderSize(2);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetLogy();
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetLeftMargin(0.131579);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetRightMargin(0.08);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetTopMargin(0.06895515);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetBottomMargin(0.07206074);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetFrameBorderMode(0);
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->SetFrameBorderMode(0);
   
   THStack *MT2PreCut_MET = new THStack();
   MT2PreCut_MET->SetName("MT2PreCut_MET");
   MT2PreCut_MET->SetTitle("");
   MT2PreCut_MET->SetMinimum(0.02);
   MT2PreCut_MET->SetMaximum(5015);
   
   TH1F *MT2PreCut_MET_stack_1 = new TH1F("MT2PreCut_MET_stack_1","",11,30,360);
   MT2PreCut_MET_stack_1->SetMinimum(0.00540596);
   MT2PreCut_MET_stack_1->SetMaximum(10430.44);
   MT2PreCut_MET_stack_1->SetDirectory(0);
   MT2PreCut_MET_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   MT2PreCut_MET_stack_1->SetLineColor(ci);
   MT2PreCut_MET_stack_1->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_stack_1->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_stack_1->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_stack_1->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_stack_1->GetYaxis()->SetTitle("Events");
   MT2PreCut_MET_stack_1->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_stack_1->GetYaxis()->SetLabelSize(0.05);
   MT2PreCut_MET_stack_1->GetYaxis()->SetTitleSize(0.05);
   MT2PreCut_MET_stack_1->GetYaxis()->SetTitleOffset(1.3);
   MT2PreCut_MET_stack_1->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_stack_1->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_stack_1->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_stack_1->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_stack_1->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET->SetHistogram(MT2PreCut_MET_stack_1);
   
   
   TH1D *MT2PreCut_MET_QCD1 = new TH1D("MT2PreCut_MET_QCD1","",11,30,360);
   MT2PreCut_MET_QCD1->SetBinContent(1,139.7331);
   MT2PreCut_MET_QCD1->SetBinContent(2,0.5005342);
   MT2PreCut_MET_QCD1->SetBinError(1,119.7437);
   MT2PreCut_MET_QCD1->SetBinError(2,0.3589301);
   MT2PreCut_MET_QCD1->SetEntries(39);
   MT2PreCut_MET_QCD1->SetDirectory(0);
   MT2PreCut_MET_QCD1->SetStats(0);

   ci = TColor::GetColor("#cccc00");
   MT2PreCut_MET_QCD1->SetFillColor(ci);

   ci = TColor::GetColor("#cccc00");
   MT2PreCut_MET_QCD1->SetLineColor(ci);
   MT2PreCut_MET_QCD1->SetLineWidth(2);

   ci = TColor::GetColor("#cccc00");
   MT2PreCut_MET_QCD1->SetMarkerColor(ci);
   MT2PreCut_MET_QCD1->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_QCD1->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_QCD1->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_QCD1->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_QCD1->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_QCD1->GetYaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_QCD1->GetYaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_QCD1->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_QCD1->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_QCD1->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_QCD1->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_QCD1->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET->Add(MT2PreCut_MET_QCD,"");
   
   TH1D *MT2PreCut_MET_W2 = new TH1D("MT2PreCut_MET_W2","",11,30,360);
   MT2PreCut_MET_W2->SetBinContent(1,1690.837);
   MT2PreCut_MET_W2->SetBinContent(2,1649.938);
   MT2PreCut_MET_W2->SetBinContent(3,273.0119);
   MT2PreCut_MET_W2->SetBinContent(4,43.96665);
   MT2PreCut_MET_W2->SetBinContent(5,13.65138);
   MT2PreCut_MET_W2->SetBinContent(6,3.953669);
   MT2PreCut_MET_W2->SetBinContent(7,1.828962);
   MT2PreCut_MET_W2->SetBinContent(8,0.4421359);
   MT2PreCut_MET_W2->SetBinContent(11,0.8991358);
   MT2PreCut_MET_W2->SetBinError(1,51.77642);
   MT2PreCut_MET_W2->SetBinError(2,53.50224);
   MT2PreCut_MET_W2->SetBinError(3,19.69234);
   MT2PreCut_MET_W2->SetBinError(4,5.933871);
   MT2PreCut_MET_W2->SetBinError(5,4.009854);
   MT2PreCut_MET_W2->SetBinError(6,1.43487);
   MT2PreCut_MET_W2->SetBinError(7,1.37333);
   MT2PreCut_MET_W2->SetBinError(8,0.3203065);
   MT2PreCut_MET_W2->SetBinError(11,0.8991358);
   MT2PreCut_MET_W2->SetEntries(4201);
   MT2PreCut_MET_W2->SetDirectory(0);
   MT2PreCut_MET_W2->SetStats(0);

   ci = TColor::GetColor("#00cc00");
   MT2PreCut_MET_W2->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   MT2PreCut_MET_W2->SetLineColor(ci);
   MT2PreCut_MET_W2->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   MT2PreCut_MET_W2->SetMarkerColor(ci);
   MT2PreCut_MET_W2->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_W2->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_W2->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_W2->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_W2->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_W2->GetYaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_W2->GetYaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_W2->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_W2->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_W2->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_W2->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_W2->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET->Add(MT2PreCut_MET_W,"");
   
   TH1D *MT2PreCut_MET_ZX3 = new TH1D("MT2PreCut_MET_ZX3","",11,30,360);
   MT2PreCut_MET_ZX3->SetBinContent(1,46.68441);
   MT2PreCut_MET_ZX3->SetBinContent(2,9.856406);
   MT2PreCut_MET_ZX3->SetBinContent(3,1.686322);
   MT2PreCut_MET_ZX3->SetBinContent(4,1.727319);
   MT2PreCut_MET_ZX3->SetBinContent(5,0.2561483);
   MT2PreCut_MET_ZX3->SetBinContent(6,0.1375028);
   MT2PreCut_MET_ZX3->SetBinContent(7,0.1277687);
   MT2PreCut_MET_ZX3->SetBinContent(8,0.05227163);
   MT2PreCut_MET_ZX3->SetBinContent(9,0.0191379);
   MT2PreCut_MET_ZX3->SetBinContent(10,0.01045618);
   MT2PreCut_MET_ZX3->SetBinContent(11,0.04169533);
   MT2PreCut_MET_ZX3->SetBinError(1,4.58317);
   MT2PreCut_MET_ZX3->SetBinError(2,1.561822);
   MT2PreCut_MET_ZX3->SetBinError(3,0.1267291);
   MT2PreCut_MET_ZX3->SetBinError(4,0.7589955);
   MT2PreCut_MET_ZX3->SetBinError(5,0.04902533);
   MT2PreCut_MET_ZX3->SetBinError(6,0.03683872);
   MT2PreCut_MET_ZX3->SetBinError(7,0.03545047);
   MT2PreCut_MET_ZX3->SetBinError(8,0.02280753);
   MT2PreCut_MET_ZX3->SetBinError(9,0.01353314);
   MT2PreCut_MET_ZX3->SetBinError(10,0.008978288);
   MT2PreCut_MET_ZX3->SetBinError(11,0.02004307);
   MT2PreCut_MET_ZX3->SetBinError(12,0.01767746);
   MT2PreCut_MET_ZX3->SetEntries(2232);
   MT2PreCut_MET_ZX3->SetDirectory(0);
   MT2PreCut_MET_ZX3->SetStats(0);

   ci = TColor::GetColor("#006600");
   MT2PreCut_MET_ZX3->SetFillColor(ci);

   ci = TColor::GetColor("#006600");
   MT2PreCut_MET_ZX3->SetLineColor(ci);
   MT2PreCut_MET_ZX3->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   MT2PreCut_MET_ZX3->SetMarkerColor(ci);
   MT2PreCut_MET_ZX3->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_ZX3->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_ZX3->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_ZX3->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_ZX3->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_ZX3->GetYaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_ZX3->GetYaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_ZX3->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_ZX3->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_ZX3->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_ZX3->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_ZX3->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET->Add(MT2PreCut_MET_ZX,"");
   
   TH1D *MT2PreCut_MET_Top4 = new TH1D("MT2PreCut_MET_Top4","",11,30,360);
   MT2PreCut_MET_Top4->SetBinContent(1,37.67512);
   MT2PreCut_MET_Top4->SetBinContent(2,85.85789);
   MT2PreCut_MET_Top4->SetBinContent(3,56.29465);
   MT2PreCut_MET_Top4->SetBinContent(4,18.56253);
   MT2PreCut_MET_Top4->SetBinContent(5,4.436925);
   MT2PreCut_MET_Top4->SetBinContent(6,3.150415);
   MT2PreCut_MET_Top4->SetBinContent(7,0.3607108);
   MT2PreCut_MET_Top4->SetBinError(1,5.025542);
   MT2PreCut_MET_Top4->SetBinError(2,7.638042);
   MT2PreCut_MET_Top4->SetBinError(3,8.820334);
   MT2PreCut_MET_Top4->SetBinError(4,3.50127);
   MT2PreCut_MET_Top4->SetBinError(5,1.678355);
   MT2PreCut_MET_Top4->SetBinError(6,1.413015);
   MT2PreCut_MET_Top4->SetBinError(7,0.3607108);
   MT2PreCut_MET_Top4->SetEntries(388);
   MT2PreCut_MET_Top4->SetDirectory(0);
   MT2PreCut_MET_Top4->SetStats(0);

   ci = TColor::GetColor("#3366cc");
   MT2PreCut_MET_Top4->SetFillColor(ci);

   ci = TColor::GetColor("#3366cc");
   MT2PreCut_MET_Top4->SetLineColor(ci);
   MT2PreCut_MET_Top4->SetLineWidth(2);

   ci = TColor::GetColor("#3366cc");
   MT2PreCut_MET_Top4->SetMarkerColor(ci);
   MT2PreCut_MET_Top4->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_Top4->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_Top4->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_Top4->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_Top4->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_Top4->GetYaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_Top4->GetYaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_Top4->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_Top4->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_Top4->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_Top4->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_Top4->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET->Add(MT2PreCut_MET_Top,"");
   
   TH1D *MT2PreCut_MET_WW5 = new TH1D("MT2PreCut_MET_WW5","",11,30,360);
   MT2PreCut_MET_WW5->SetBinContent(1,25.67294);
   MT2PreCut_MET_WW5->SetBinContent(2,34.67785);
   MT2PreCut_MET_WW5->SetBinContent(3,11.06069);
   MT2PreCut_MET_WW5->SetBinContent(4,2.276891);
   MT2PreCut_MET_WW5->SetBinContent(5,1.423799);
   MT2PreCut_MET_WW5->SetBinContent(6,0.3224953);
   MT2PreCut_MET_WW5->SetBinContent(7,0.3849686);
   MT2PreCut_MET_WW5->SetBinContent(8,0.2124808);
   MT2PreCut_MET_WW5->SetBinContent(9,0.1014836);
   MT2PreCut_MET_WW5->SetBinContent(10,0.04836674);
   MT2PreCut_MET_WW5->SetBinError(1,1.13317);
   MT2PreCut_MET_WW5->SetBinError(2,1.307692);
   MT2PreCut_MET_WW5->SetBinError(3,0.7453112);
   MT2PreCut_MET_WW5->SetBinError(4,0.3280422);
   MT2PreCut_MET_WW5->SetBinError(5,0.268044);
   MT2PreCut_MET_WW5->SetBinError(6,0.1319123);
   MT2PreCut_MET_WW5->SetBinError(7,0.1378918);
   MT2PreCut_MET_WW5->SetBinError(8,0.1063724);
   MT2PreCut_MET_WW5->SetBinError(9,0.07180426);
   MT2PreCut_MET_WW5->SetBinError(10,0.04836674);
   MT2PreCut_MET_WW5->SetEntries(1695);
   MT2PreCut_MET_WW5->SetDirectory(0);
   MT2PreCut_MET_WW5->SetStats(0);

   ci = TColor::GetColor("#000066");
   MT2PreCut_MET_WW5->SetFillColor(ci);

   ci = TColor::GetColor("#000066");
   MT2PreCut_MET_WW5->SetLineColor(ci);
   MT2PreCut_MET_WW5->SetLineWidth(2);

   ci = TColor::GetColor("#000066");
   MT2PreCut_MET_WW5->SetMarkerColor(ci);
   MT2PreCut_MET_WW5->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_WW5->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_WW5->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_WW5->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_WW5->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_WW5->GetYaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_WW5->GetYaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_WW5->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_WW5->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_WW5->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_WW5->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_WW5->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET->Add(MT2PreCut_MET_WW,"");
   
   TH1D *MT2PreCut_MET_Higgs6 = new TH1D("MT2PreCut_MET_Higgs6","",11,30,360);
   MT2PreCut_MET_Higgs6->SetBinContent(1,0.4516006);
   MT2PreCut_MET_Higgs6->SetBinContent(2,0.5022956);
   MT2PreCut_MET_Higgs6->SetBinContent(3,0.2662027);
   MT2PreCut_MET_Higgs6->SetBinContent(4,0.115864);
   MT2PreCut_MET_Higgs6->SetBinContent(5,0.05220124);
   MT2PreCut_MET_Higgs6->SetBinContent(6,0.02618433);
   MT2PreCut_MET_Higgs6->SetBinContent(8,0.01416404);
   MT2PreCut_MET_Higgs6->SetBinContent(10,0.009509092);
   MT2PreCut_MET_Higgs6->SetBinError(0,0.01013023);
   MT2PreCut_MET_Higgs6->SetBinError(1,0.05875229);
   MT2PreCut_MET_Higgs6->SetBinError(2,0.06005265);
   MT2PreCut_MET_Higgs6->SetBinError(3,0.04046109);
   MT2PreCut_MET_Higgs6->SetBinError(4,0.0268102);
   MT2PreCut_MET_Higgs6->SetBinError(5,0.01669486);
   MT2PreCut_MET_Higgs6->SetBinError(6,0.01314998);
   MT2PreCut_MET_Higgs6->SetBinError(8,0.01013936);
   MT2PreCut_MET_Higgs6->SetBinError(10,0.007210802);
   MT2PreCut_MET_Higgs6->SetEntries(279);
   MT2PreCut_MET_Higgs6->SetDirectory(0);
   MT2PreCut_MET_Higgs6->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   MT2PreCut_MET_Higgs6->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   MT2PreCut_MET_Higgs6->SetLineColor(ci);
   MT2PreCut_MET_Higgs6->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   MT2PreCut_MET_Higgs6->SetMarkerColor(ci);
   MT2PreCut_MET_Higgs6->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_Higgs6->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_Higgs6->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_Higgs6->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_Higgs6->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_Higgs6->GetYaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_Higgs6->GetYaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_Higgs6->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_Higgs6->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_Higgs6->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_Higgs6->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_Higgs6->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET->Add(MT2PreCut_MET_Higgs,"");
   MT2PreCut_MET->Draw("hist");
   
   TH1D *h2_copy7 = new TH1D("h2_copy7","",11,30,360);
   h2_copy7->SetBinContent(1,2006);
   h2_copy7->SetBinContent(2,1852);
   h2_copy7->SetBinContent(3,457);
   h2_copy7->SetBinContent(4,90);
   h2_copy7->SetBinContent(5,23);
   h2_copy7->SetBinContent(6,11);
   h2_copy7->SetBinContent(7,5);
   h2_copy7->SetBinContent(8,2);
   h2_copy7->SetBinContent(9,1);
   h2_copy7->SetBinContent(10,2);
   h2_copy7->SetBinError(1,44.78839);
   h2_copy7->SetBinError(2,43.03487);
   h2_copy7->SetBinError(3,21.37756);
   h2_copy7->SetBinError(4,9.486833);
   h2_copy7->SetBinError(5,4.795832);
   h2_copy7->SetBinError(6,3.316625);
   h2_copy7->SetBinError(7,2.236068);
   h2_copy7->SetBinError(8,1.414214);
   h2_copy7->SetBinError(9,1);
   h2_copy7->SetBinError(10,1.414214);
   h2_copy7->SetMaximum(5015);
   h2_copy7->SetEntries(4453);
   h2_copy7->SetDirectory(0);
   h2_copy7->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   h2_copy7->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   h2_copy7->SetLineColor(ci);
   h2_copy7->SetLineWidth(2);
   h2_copy7->SetMarkerStyle(20);
   h2_copy7->GetXaxis()->SetLabelFont(42);
   h2_copy7->GetXaxis()->SetLabelSize(0.035);
   h2_copy7->GetXaxis()->SetTitleSize(0.035);
   h2_copy7->GetXaxis()->SetTitleFont(42);
   h2_copy7->GetYaxis()->SetLabelFont(42);
   h2_copy7->GetYaxis()->SetLabelSize(0.035);
   h2_copy7->GetYaxis()->SetTitleSize(0.035);
   h2_copy7->GetYaxis()->SetTitleFont(42);
   h2_copy7->GetZaxis()->SetLabelFont(42);
   h2_copy7->GetZaxis()->SetLabelSize(0.035);
   h2_copy7->GetZaxis()->SetTitleSize(0.035);
   h2_copy7->GetZaxis()->SetTitleFont(42);
   h2_copy7->Draw("sameE");
   
   TH1D *MT2PreCut_MET_SUSY_180_608 = new TH1D("MT2PreCut_MET_SUSY_180_608","",11,30,360);
   MT2PreCut_MET_SUSY_180_608->SetBinContent(1,3.439506);
   MT2PreCut_MET_SUSY_180_608->SetBinContent(2,6.368605);
   MT2PreCut_MET_SUSY_180_608->SetBinContent(3,2.654257);
   MT2PreCut_MET_SUSY_180_608->SetBinContent(4,1.04772);
   MT2PreCut_MET_SUSY_180_608->SetBinContent(5,0.2644379);
   MT2PreCut_MET_SUSY_180_608->SetBinContent(6,0.1176239);
   MT2PreCut_MET_SUSY_180_608->SetBinContent(7,0.05041576);
   MT2PreCut_MET_SUSY_180_608->SetBinContent(8,0.0469572);
   MT2PreCut_MET_SUSY_180_608->SetBinContent(10,0.01704528);
   MT2PreCut_MET_SUSY_180_608->SetBinError(1,0.2400117);
   MT2PreCut_MET_SUSY_180_608->SetBinError(2,0.3272202);
   MT2PreCut_MET_SUSY_180_608->SetBinError(3,0.21021);
   MT2PreCut_MET_SUSY_180_608->SetBinError(4,0.1321774);
   MT2PreCut_MET_SUSY_180_608->SetBinError(5,0.06623109);
   MT2PreCut_MET_SUSY_180_608->SetBinError(6,0.04446758);
   MT2PreCut_MET_SUSY_180_608->SetBinError(7,0.02910862);
   MT2PreCut_MET_SUSY_180_608->SetBinError(8,0.02728903);
   MT2PreCut_MET_SUSY_180_608->SetBinError(10,0.01704528);
   MT2PreCut_MET_SUSY_180_608->SetEntries(839);
   MT2PreCut_MET_SUSY_180_608->SetDirectory(0);
   MT2PreCut_MET_SUSY_180_608->SetStats(0);
   MT2PreCut_MET_SUSY_180_608->SetFillStyle(0);
   MT2PreCut_MET_SUSY_180_608->SetLineWidth(4);
   MT2PreCut_MET_SUSY_180_608->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_180_608->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_180_608->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_180_608->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_180_608->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_180_608->GetYaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_180_608->GetYaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_180_608->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_180_608->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_180_608->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_180_608->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_180_608->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_180_608->Draw("samehist");
   
   TH1D *MT2PreCut_MET_SUSY_380_09 = new TH1D("MT2PreCut_MET_SUSY_380_09","",11,30,360);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(1,0.4319993);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(2,1.320957);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(3,1.374369);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(4,1.2897);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(5,0.939653);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(6,0.6184417);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(7,0.3542561);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(8,0.224166);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(9,0.1357353);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(10,0.03747382);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(11,0.02507052);
   MT2PreCut_MET_SUSY_380_09->SetBinContent(12,0.03460844);
   MT2PreCut_MET_SUSY_380_09->SetBinError(1,0.03697712);
   MT2PreCut_MET_SUSY_380_09->SetBinError(2,0.06472392);
   MT2PreCut_MET_SUSY_380_09->SetBinError(3,0.06600828);
   MT2PreCut_MET_SUSY_380_09->SetBinError(4,0.06381694);
   MT2PreCut_MET_SUSY_380_09->SetBinError(5,0.05452813);
   MT2PreCut_MET_SUSY_380_09->SetBinError(6,0.04446787);
   MT2PreCut_MET_SUSY_380_09->SetBinError(7,0.03353279);
   MT2PreCut_MET_SUSY_380_09->SetBinError(8,0.02647124);
   MT2PreCut_MET_SUSY_380_09->SetBinError(9,0.02073345);
   MT2PreCut_MET_SUSY_380_09->SetBinError(10,0.01084643);
   MT2PreCut_MET_SUSY_380_09->SetBinError(11,0.008872812);
   MT2PreCut_MET_SUSY_380_09->SetBinError(12,0.01050309);
   MT2PreCut_MET_SUSY_380_09->SetEntries(2150);
   MT2PreCut_MET_SUSY_380_09->SetDirectory(0);
   MT2PreCut_MET_SUSY_380_09->SetStats(0);
   MT2PreCut_MET_SUSY_380_09->SetFillStyle(0);
   MT2PreCut_MET_SUSY_380_09->SetLineColor(2);
   MT2PreCut_MET_SUSY_380_09->SetLineWidth(4);
   MT2PreCut_MET_SUSY_380_09->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_380_09->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_380_09->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_380_09->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_380_09->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_380_09->GetYaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_380_09->GetYaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_380_09->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_380_09->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_380_09->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_380_09->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_380_09->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_380_09->Draw("samehist");
   
   TH1D *MT2PreCut_MET_SUSY_240_6010 = new TH1D("MT2PreCut_MET_SUSY_240_6010","",11,30,360);
   MT2PreCut_MET_SUSY_240_6010->SetBinContent(1,2.372331);
   MT2PreCut_MET_SUSY_240_6010->SetBinContent(2,5.907893);
   MT2PreCut_MET_SUSY_240_6010->SetBinContent(3,4.194847);
   MT2PreCut_MET_SUSY_240_6010->SetBinContent(4,1.827563);
   MT2PreCut_MET_SUSY_240_6010->SetBinContent(5,0.6791403);
   MT2PreCut_MET_SUSY_240_6010->SetBinContent(6,0.168776);
   MT2PreCut_MET_SUSY_240_6010->SetBinContent(7,0.130948);
   MT2PreCut_MET_SUSY_240_6010->SetBinContent(8,0.04838683);
   MT2PreCut_MET_SUSY_240_6010->SetBinContent(11,0.0490901);
   MT2PreCut_MET_SUSY_240_6010->SetBinContent(12,0.02619845);
   MT2PreCut_MET_SUSY_240_6010->SetBinError(1,0.2477809);
   MT2PreCut_MET_SUSY_240_6010->SetBinError(2,0.3901747);
   MT2PreCut_MET_SUSY_240_6010->SetBinError(3,0.3290146);
   MT2PreCut_MET_SUSY_240_6010->SetBinError(4,0.2156922);
   MT2PreCut_MET_SUSY_240_6010->SetBinError(5,0.1309626);
   MT2PreCut_MET_SUSY_240_6010->SetBinError(6,0.06396103);
   MT2PreCut_MET_SUSY_240_6010->SetBinError(7,0.05859988);
   MT2PreCut_MET_SUSY_240_6010->SetBinError(8,0.0343412);
   MT2PreCut_MET_SUSY_240_6010->SetBinError(11,0.0347185);
   MT2PreCut_MET_SUSY_240_6010->SetBinError(12,0.02619845);
   MT2PreCut_MET_SUSY_240_6010->SetEntries(601);
   MT2PreCut_MET_SUSY_240_6010->SetDirectory(0);
   MT2PreCut_MET_SUSY_240_6010->SetStats(0);
   MT2PreCut_MET_SUSY_240_6010->SetFillStyle(0);
   MT2PreCut_MET_SUSY_240_6010->SetLineColor(3);
   MT2PreCut_MET_SUSY_240_6010->SetLineWidth(4);
   MT2PreCut_MET_SUSY_240_6010->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_240_6010->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_240_6010->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_240_6010->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_240_6010->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_240_6010->GetYaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_240_6010->GetYaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_240_6010->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_240_6010->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_240_6010->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_240_6010->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_240_6010->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_240_6010->Draw("samehist");
   
   TH1D *MT2PreCut_MET_SUSY_240_8011 = new TH1D("MT2PreCut_MET_SUSY_240_8011","",11,30,360);
   MT2PreCut_MET_SUSY_240_8011->SetBinContent(1,1.991682);
   MT2PreCut_MET_SUSY_240_8011->SetBinContent(2,5.044326);
   MT2PreCut_MET_SUSY_240_8011->SetBinContent(3,3.590347);
   MT2PreCut_MET_SUSY_240_8011->SetBinContent(4,1.134067);
   MT2PreCut_MET_SUSY_240_8011->SetBinContent(5,0.5148755);
   MT2PreCut_MET_SUSY_240_8011->SetBinContent(6,0.1782234);
   MT2PreCut_MET_SUSY_240_8011->SetBinContent(7,0.1036113);
   MT2PreCut_MET_SUSY_240_8011->SetBinContent(8,0.07344698);
   MT2PreCut_MET_SUSY_240_8011->SetBinContent(9,0.02680272);
   MT2PreCut_MET_SUSY_240_8011->SetBinError(1,0.2259311);
   MT2PreCut_MET_SUSY_240_8011->SetBinError(2,0.361687);
   MT2PreCut_MET_SUSY_240_8011->SetBinError(3,0.3038993);
   MT2PreCut_MET_SUSY_240_8011->SetBinError(4,0.1712721);
   MT2PreCut_MET_SUSY_240_8011->SetBinError(5,0.1127916);
   MT2PreCut_MET_SUSY_240_8011->SetBinError(6,0.06740902);
   MT2PreCut_MET_SUSY_240_8011->SetBinError(7,0.05181103);
   MT2PreCut_MET_SUSY_240_8011->SetBinError(8,0.04253487);
   MT2PreCut_MET_SUSY_240_8011->SetBinError(9,0.02680272);
   MT2PreCut_MET_SUSY_240_8011->SetEntries(493);
   MT2PreCut_MET_SUSY_240_8011->SetDirectory(0);
   MT2PreCut_MET_SUSY_240_8011->SetStats(0);
   MT2PreCut_MET_SUSY_240_8011->SetFillStyle(0);
   MT2PreCut_MET_SUSY_240_8011->SetLineColor(4);
   MT2PreCut_MET_SUSY_240_8011->SetLineWidth(4);
   MT2PreCut_MET_SUSY_240_8011->SetMarkerStyle(20);
   MT2PreCut_MET_SUSY_240_8011->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_240_8011->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_240_8011->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_240_8011->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_240_8011->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_240_8011->GetYaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_240_8011->GetYaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_240_8011->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_240_8011->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET_SUSY_240_8011->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET_SUSY_240_8011->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET_SUSY_240_8011->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET_SUSY_240_8011->Draw("samehist");
   TLatex *   tex = new TLatex(0.13,0.943,"");
tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.68,0.943,"#sqrt{s} = 8 TeV, L = 19.60 fb^{-1}");
tex->SetNDC();
   tex->SetTextSize(0.0305);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *MT2PreCut_MET12 = new TH1F("MT2PreCut_MET12","",11,30,360);
   MT2PreCut_MET12->SetMinimum(0.00540596);
   MT2PreCut_MET12->SetMaximum(10430.44);
   MT2PreCut_MET12->SetDirectory(0);
   MT2PreCut_MET12->SetStats(0);

   ci = TColor::GetColor("#000099");
   MT2PreCut_MET12->SetLineColor(ci);
   MT2PreCut_MET12->GetXaxis()->SetTitle("MET");
   MT2PreCut_MET12->GetXaxis()->SetLabelFont(42);
   MT2PreCut_MET12->GetXaxis()->SetLabelSize(0.035);
   MT2PreCut_MET12->GetXaxis()->SetTitleSize(0.035);
   MT2PreCut_MET12->GetXaxis()->SetTitleFont(42);
   MT2PreCut_MET12->GetYaxis()->SetTitle("Events");
   MT2PreCut_MET12->GetYaxis()->SetLabelFont(42);
   MT2PreCut_MET12->GetYaxis()->SetLabelSize(0.05);
   MT2PreCut_MET12->GetYaxis()->SetTitleSize(0.05);
   MT2PreCut_MET12->GetYaxis()->SetTitleOffset(1.3);
   MT2PreCut_MET12->GetYaxis()->SetTitleFont(42);
   MT2PreCut_MET12->GetZaxis()->SetLabelFont(42);
   MT2PreCut_MET12->GetZaxis()->SetLabelSize(0.035);
   MT2PreCut_MET12->GetZaxis()->SetTitleSize(0.035);
   MT2PreCut_MET12->GetZaxis()->SetTitleFont(42);
   MT2PreCut_MET12->Draw("sameaxis");
   
   TLegend *leg = new TLegend(0.7080537,0.5380245,0.9077181,0.9182149,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("MT2PreCut_MET_QCD","QCD","f");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cccc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2PreCut_MET_W","W","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2PreCut_MET_ZX","ZX","f");

   ci = TColor::GetColor("#006600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2PreCut_MET_Top","Top","f");

   ci = TColor::GetColor("#3366cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#3366cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2PreCut_MET_WW","WW","f");

   ci = TColor::GetColor("#000066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2PreCut_MET_Higgs","Higgs","f");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2PreCut_MET_data","data","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2PreCut_MET_SUSY_180_60","180_60","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2PreCut_MET_SUSY_380_0","380_1","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2PreCut_MET_SUSY_240_60","240_60","l");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2PreCut_MET_SUSY_240_80","240_80","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   MET_ratio_AllSUSY_plotpad_MET_MT2PreCut->Modified();
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->cd();
  
// ------------>Primitives in pad: MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut
   TPad *MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut = new TPad("MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut", "Pad containing the ratio",0,0.01863354,0.9967105,0.2189441);
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->Draw();
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->cd();
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->Range(-25.73977,-0.8571431,391.2762,2.214286);
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->SetFillColor(0);
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->SetBorderMode(0);
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->SetBorderSize(2);
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->SetLeftMargin(0.1336634);
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->SetRightMargin(0.075);
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->SetTopMargin(0.06976745);
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->SetBottomMargin(0.2790698);
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->SetFrameBorderMode(0);
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->SetFrameBorderMode(0);
   
   TH1D *h1_copy13 = new TH1D("h1_copy13","",11,30,360);
   h1_copy13->SetBinContent(1,1);
   h1_copy13->SetBinContent(2,1);
   h1_copy13->SetBinContent(3,1);
   h1_copy13->SetBinContent(4,1);
   h1_copy13->SetBinContent(5,1);
   h1_copy13->SetBinContent(6,1);
   h1_copy13->SetBinContent(7,1);
   h1_copy13->SetBinContent(8,1);
   h1_copy13->SetBinContent(9,1);
   h1_copy13->SetBinContent(10,1);
   h1_copy13->SetBinContent(11,1);
   h1_copy13->SetBinError(1,0.09518197);
   h1_copy13->SetBinError(2,0.04293792);
   h1_copy13->SetBinError(3,0.08919702);
   h1_copy13->SetBinError(4,0.1472436);
   h1_copy13->SetBinError(5,0.3107699);
   h1_copy13->SetBinError(6,0.376088);
   h1_copy13->SetBinError(7,0.746788);
   h1_copy13->SetBinError(8,0.6637677);
   h1_copy13->SetBinError(9,0.8566829);
   h1_copy13->SetBinError(10,1.028988);
   h1_copy13->SetBinError(11,1.351875);
   h1_copy13->SetMinimum(0);
   h1_copy13->SetMaximum(2);
   h1_copy13->SetEntries(24.70836);
   h1_copy13->SetDirectory(0);
   h1_copy13->SetStats(0);
   h1_copy13->SetFillColor(1);
   h1_copy13->SetFillStyle(3001);
   h1_copy13->SetLineColor(ci);
   h1_copy13->SetLineWidth(2);
   h1_copy13->SetMarkerColor(ci);
   h1_copy13->GetXaxis()->SetTitle("MET");
   h1_copy13->GetXaxis()->SetLabelFont(42);
   h1_copy13->GetXaxis()->SetLabelSize(0);
   h1_copy13->GetXaxis()->SetTitleSize(0.2);
   h1_copy13->GetXaxis()->SetTickLength(0.09);
   h1_copy13->GetXaxis()->SetTitleOffset(0.5);
   h1_copy13->GetXaxis()->SetTitleFont(42);
   h1_copy13->GetYaxis()->SetTitle("Data / MC");
   h1_copy13->GetYaxis()->SetNdivisions(509);
   h1_copy13->GetYaxis()->SetLabelFont(42);
   h1_copy13->GetYaxis()->SetLabelSize(0.19);
   h1_copy13->GetYaxis()->SetTitleSize(0.18);
   h1_copy13->GetYaxis()->SetTitleOffset(0.36);
   h1_copy13->GetYaxis()->SetTitleFont(42);
   h1_copy13->GetZaxis()->SetLabelFont(42);
   h1_copy13->GetZaxis()->SetLabelSize(0.035);
   h1_copy13->GetZaxis()->SetTitleSize(0.035);
   h1_copy13->GetZaxis()->SetTitleFont(42);
   h1_copy13->Draw("E2");
   
   TH1D *h2_copy14 = new TH1D("h2_copy14","",11,30,360);
   h2_copy14->SetBinContent(1,1.033459);
   h2_copy14->SetBinContent(2,1.039671);
   h2_copy14->SetBinContent(3,1.335009);
   h2_copy14->SetBinContent(4,1.350353);
   h2_copy14->SetBinContent(5,1.160418);
   h2_copy14->SetBinContent(6,1.449225);
   h2_copy14->SetBinContent(7,1.850201);
   h2_copy14->SetBinContent(8,2.773724);
   h2_copy14->SetBinContent(9,8.290395);
   h2_copy14->SetBinContent(10,29.26886);
   h2_copy14->SetBinError(1,0.07328316);
   h2_copy14->SetBinError(2,0.0397501);
   h2_copy14->SetBinError(3,0.1048321);
   h2_copy14->SetBinError(4,0.2000685);
   h2_copy14->SetBinError(5,0.3515265);
   h2_copy14->SetBinError(6,0.5826355);
   h2_copy14->SetBinError(7,1.280315);
   h2_copy14->SetBinError(8,2.354063);
   h2_copy14->SetBinError(9,9.692861);
   h2_copy14->SetBinError(10,29.69612);
   h2_copy14->SetMinimum(0.4);
   h2_copy14->SetMaximum(3);
   h2_copy14->SetEntries(2.496493);
   h2_copy14->SetDirectory(0);
   h2_copy14->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   h2_copy14->SetFillColor(ci);
   h2_copy14->SetLineWidth(2);
   h2_copy14->SetMarkerStyle(20);
   h2_copy14->GetXaxis()->SetLabelFont(42);
   h2_copy14->GetXaxis()->SetLabelSize(0.035);
   h2_copy14->GetXaxis()->SetTitleSize(0.035);
   h2_copy14->GetXaxis()->SetTitleFont(42);
   h2_copy14->GetYaxis()->SetLabelFont(42);
   h2_copy14->GetYaxis()->SetLabelSize(0.035);
   h2_copy14->GetYaxis()->SetTitleSize(0.035);
   h2_copy14->GetYaxis()->SetTitleFont(42);
   h2_copy14->GetZaxis()->SetLabelFont(42);
   h2_copy14->GetZaxis()->SetLabelSize(0.035);
   h2_copy14->GetZaxis()->SetTitleSize(0.035);
   h2_copy14->GetZaxis()->SetTitleFont(42);
   h2_copy14->Draw("Esame");
   TLine *line = new TLine(30,1,360,1);
   line->SetLineStyle(7);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1D *h1_copy15 = new TH1D("h1_copy15","",11,30,360);
   h1_copy15->SetBinContent(1,1);
   h1_copy15->SetBinContent(2,1);
   h1_copy15->SetBinContent(3,1);
   h1_copy15->SetBinContent(4,1);
   h1_copy15->SetBinContent(5,1);
   h1_copy15->SetBinContent(6,1);
   h1_copy15->SetBinContent(7,1);
   h1_copy15->SetBinContent(8,1);
   h1_copy15->SetBinContent(9,1);
   h1_copy15->SetBinContent(10,1);
   h1_copy15->SetBinContent(11,1);
   h1_copy15->SetBinError(1,0.09518197);
   h1_copy15->SetBinError(2,0.04293792);
   h1_copy15->SetBinError(3,0.08919702);
   h1_copy15->SetBinError(4,0.1472436);
   h1_copy15->SetBinError(5,0.3107699);
   h1_copy15->SetBinError(6,0.376088);
   h1_copy15->SetBinError(7,0.746788);
   h1_copy15->SetBinError(8,0.6637677);
   h1_copy15->SetBinError(9,0.8566829);
   h1_copy15->SetBinError(10,1.028988);
   h1_copy15->SetBinError(11,1.351875);
   h1_copy15->SetMinimum(0);
   h1_copy15->SetMaximum(2);
   h1_copy15->SetEntries(24.70836);
   h1_copy15->SetDirectory(0);
   h1_copy15->SetStats(0);
   h1_copy15->SetFillColor(1);
   h1_copy15->SetFillStyle(3001);
   h1_copy15->SetLineColor(ci);
   h1_copy15->SetLineWidth(2);
   h1_copy15->SetMarkerColor(ci);
   h1_copy15->GetXaxis()->SetTitle("MET");
   h1_copy15->GetXaxis()->SetLabelFont(42);
   h1_copy15->GetXaxis()->SetLabelSize(0);
   h1_copy15->GetXaxis()->SetTitleSize(0.2);
   h1_copy15->GetXaxis()->SetTickLength(0.09);
   h1_copy15->GetXaxis()->SetTitleOffset(0.5);
   h1_copy15->GetXaxis()->SetTitleFont(42);
   h1_copy15->GetYaxis()->SetTitle("Data / MC");
   h1_copy15->GetYaxis()->SetNdivisions(509);
   h1_copy15->GetYaxis()->SetLabelFont(42);
   h1_copy15->GetYaxis()->SetLabelSize(0.19);
   h1_copy15->GetYaxis()->SetTitleSize(0.18);
   h1_copy15->GetYaxis()->SetTitleOffset(0.36);
   h1_copy15->GetYaxis()->SetTitleFont(42);
   h1_copy15->GetZaxis()->SetLabelFont(42);
   h1_copy15->GetZaxis()->SetLabelSize(0.035);
   h1_copy15->GetZaxis()->SetTitleSize(0.035);
   h1_copy15->GetZaxis()->SetTitleFont(42);
   h1_copy15->Draw("sameaxis");
   MET_ratio_AllSUSY_ratiopad_MET_MT2PreCut->Modified();
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->cd();
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->Modified();
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->cd();
   MET_ratio_AllSUSYc_ratio_MET_MT2PreCut->SetSelected(MET_ratio_AllSUSYc_ratio_MET_MT2PreCut);
}
