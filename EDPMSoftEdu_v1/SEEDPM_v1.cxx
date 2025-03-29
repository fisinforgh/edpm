/*
##########################################################################
#                                                                         #
# NOTICE OF COPYRIGHT                                                     #
# Software Educativo Engineering Dragged Parabolic Motion                 #
# SEEDPM                                                                  #
#                                                                         #
# Copyright (C) 2025                                                      #
#                                                                         #
# Authors:								  #
#   [1] Julián Salamanca*						  #
#   [2] Diego Julián Rodríguez-Patarroyo**				  #
#   [3] Marco Antonio Ramírez-Ramos***                			  #
#                                                                         #
#   [1] jasalamanca@udistrital.edu.co (profesor Universidad Distrital)    #
#   [2] djrodriguezp@udistrital.edu.co (profesor Universidad Distrital)   #
#   [3] maramirezramos@utep.edu	       			   		  #
#									  #
#  * Grupo de Física e Informática (FISINFOR)		     		  #
#  ** Grupo de Laboratorio de Fuentes Alternas de Energía (LIFAE)	  #
#  *,** Universidad Distrital Francisco José de Caldas (Bogotá, Colombia) #	
#   *** University of Texas at El Paso (UTEP) 	  			  #
#       (USA)                                                             #
# Web page:								  #
#   https://github.com/fisinforgh/edpm                                    #
#                                                                         #
# This program is free software; you can redistribute it and/or modify    #
# it under the terms of the GNU General Public License as published by    #
# the Free Software Foundation; either version 2 of the License, or       #
# (at your option) any later version.                                     #
#                                                                         #
# This program is distributed in the hope that it will be useful,         #
# but WITHOUT ANY WARRANTY; without even the implied warranty of          #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           #
# GNU General Public License for more details:                            #
#                                                                         #
#               http://www.gnu.org/copyleft/gpl.html                      #
#                                                                         #
###########################################################################
*/
// Mainframe macro generated from application: /home/fisinfor/software/root/bin/root.exe
// By ROOT version 6.32.10 on 2025-03-05 14:46:10

#ifndef ROOT_TGDockableFrame
#include "TGDockableFrame.h"
#endif
#ifndef ROOT_TGMdiDecorFrame
#include "TGMdiDecorFrame.h"
#endif
#ifndef ROOT_TG3DLine
#include "TG3DLine.h"
#endif
#ifndef ROOT_TGMdiFrame
#include "TGMdiFrame.h"
#endif
#ifndef ROOT_TGMdiMainFrame
#include "TGMdiMainFrame.h"
#endif
#ifndef ROOT_TGMdiMenu
#include "TGMdiMenu.h"
#endif
#ifndef ROOT_TGColorDialog
#include "TGColorDialog.h"
#endif
#ifndef ROOT_TGListBox
#include "TGListBox.h"
#endif
#ifndef ROOT_TGNumberEntry
#include "TGNumberEntry.h"
#endif
#ifndef ROOT_TGScrollBar
#include "TGScrollBar.h"
#endif
#ifndef ROOT_TGComboBox
#include "TGComboBox.h"
#endif
#ifndef ROOT_TGuiBldHintsEditor
#include "TGuiBldHintsEditor.h"
#endif
#ifndef ROOT_TRootBrowser
#include "TRootBrowser.h"
#endif
#ifndef ROOT_TGuiBldNameFrame
#include "TGuiBldNameFrame.h"
#endif
#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGMenu
#include "TGMenu.h"
#endif
#ifndef ROOT_TGFileDialog
#include "TGFileDialog.h"
#endif
#ifndef ROOT_TGShutter
#include "TGShutter.h"
#endif
#ifndef ROOT_TGButtonGroup
#include "TGButtonGroup.h"
#endif
#ifndef ROOT_TGCommandPlugin
#include "TGCommandPlugin.h"
#endif
#ifndef ROOT_TGCanvas
#include "TGCanvas.h"
#endif
#ifndef ROOT_TGFSContainer
#include "TGFSContainer.h"
#endif
#ifndef ROOT_TGFontDialog
#include "TGFontDialog.h"
#endif
#ifndef ROOT_TGuiBldEditor
#include "TGuiBldEditor.h"
#endif
#ifndef ROOT_TGColorSelect
#include "TGColorSelect.h"
#endif
#ifndef ROOT_TGTextEdit
#include "TGTextEdit.h"
#endif
#ifndef ROOT_TGButton
#include "TGButton.h"
#endif
#ifndef ROOT_TRootContextMenu
#include "TRootContextMenu.h"
#endif
#ifndef ROOT_TGFSComboBox
#include "TGFSComboBox.h"
#endif
#ifndef ROOT_TGLabel
#include "TGLabel.h"
#endif
#ifndef ROOT_TGView
#include "TGView.h"
#endif
#ifndef ROOT_TGMsgBox
#include "TGMsgBox.h"
#endif
#ifndef ROOT_TRootGuiBuilder
#include "TRootGuiBuilder.h"
#endif
#ifndef ROOT_TGFileBrowser
#include "TGFileBrowser.h"
#endif
#ifndef ROOT_TGTab
#include "TGTab.h"
#endif
#ifndef ROOT_TGListView
#include "TGListView.h"
#endif
#ifndef ROOT_TGSplitter
#include "TGSplitter.h"
#endif
#ifndef ROOT_TGTextEditor
#include "TGTextEditor.h"
#endif
#ifndef ROOT_TRootCanvas
#include "TRootCanvas.h"
#endif
#ifndef ROOT_TGStatusBar
#include "TGStatusBar.h"
#endif
#ifndef ROOT_TGListTree
#include "TGListTree.h"
#endif
#ifndef ROOT_TGuiBldGeometryFrame
#include "TGuiBldGeometryFrame.h"
#endif
#ifndef ROOT_TGToolTip
#include "TGToolTip.h"
#endif
#ifndef ROOT_TGToolBar
#include "TGToolBar.h"
#endif
#ifndef ROOT_TRootEmbeddedCanvas
#include "TRootEmbeddedCanvas.h"
#endif
#ifndef ROOT_TCanvas
#include "TCanvas.h"
#endif
#ifndef ROOT_TGuiBldDragManager
#include "TGuiBldDragManager.h"
#endif
#ifndef ROOT_TGHtmlBrowser
#include "TGHtmlBrowser.h"
#endif
#include <TApplication.h>
#include <TGClient.h>
#include <TF1.h>
#include <TImage.h>
#include <TLatex.h>
#include <TPaveText.h>
#include <TCurlyLine.h>
#include <TEllipse.h>
#include <TGraph.h>
#include <TLine.h>
#include <TAxis.h>
#include <TMarker.h>
#include <TLegend.h>
#include <TSystem.h>
#include <TStyle.h>
#include <TArrow.h>
#include <TString.h>
#include <TSystem.h>
#include <TBox.h>
#include "Riostream.h"

#include <GuiTypes.h>
#include <algorithm>

#include "SEEDPM_v1.h"
#include "include/odeSEEDPM.h"

MyMainFrame::MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h){
  
  TString spathHIDEN_FILE(gSystem->HomeDirectory());
  //cout << "spathHIDEN_FILE: " << spathHIDEN_FILE << endl;
  spathHIDEN_FILE.Append("/.pathDIR_EDPMSoftEdu_v1.txt");
  //cout << "spathHIDEN_FILE: " << spathHIDEN_FILE << endl;
  ifstream inHidenFile;
  inHidenFile.open(spathHIDEN_FILE);
  
  string spathICONS;
  getline(inHidenFile,spathICONS);
  pathDIR_ICONS.Append(spathICONS);
  pathDIR_ICONS.Append("/icons/");
  //cout << pathDIR_ICONS  << endl;

  //pathDIR_ICONS.Append(gSystem->pwd());
  //pathDIR_ICONS.Append("/icons/");
  //cout << pathDIR_ICONS << endl;

  
   // main frame
   TGMainFrame *fMainFrameSEEDPM = new TGMainFrame(gClient->GetRoot(),10,10,kMainFrame | kVerticalFrame);
   fMainFrameSEEDPM->SetName("fMainFrameSEEDPM");
   //fMainFrame3731->SetLayoutBroken(kTRUE);

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame4320 = new TGHorizontalFrame(fMainFrameSEEDPM,1452,682,kHorizontalFrame | kRaisedFrame);
   fHorizontalFrame4320->SetName("fHorizontalFrame4320");
   //fHorizontalFrame4320->SetLayoutBroken(kTRUE);

   // vertical frame PARAMETERS
   TGVerticalFrame *fVerticalFrame1250 = new TGVerticalFrame(fHorizontalFrame4320,348,680,kVerticalFrame | kRaisedFrame);
   fVerticalFrame1250->SetName("fVerticalFrame1250");

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame1266 = new TGHorizontalFrame(fVerticalFrame1250,272,116,kHorizontalFrame);
   fHorizontalFrame1266->SetName("fHorizontalFrame1266");

   ULong_t ucolor;        // will reflect user color changes
   gClient->GetColorByName("#ffffcc",ucolor);

   // "Body properties" group frame
   TGGroupFrame *fGroupFrame1646 = new TGGroupFrame(fHorizontalFrame1266,"Body properties",kVerticalFrame,TGGroupFrame::GetDefaultGC()(),TGGroupFrame::GetDefaultFontStruct(),ucolor);
   fGroupFrame1646->SetLayoutBroken(kTRUE);

   TGLabel *fLabel1647 = new TGLabel(fGroupFrame1646,"Mass [ kg ] :",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1647->SetTextJustify(36);
   fLabel1647->SetMargins(0,0,0,0);
   fLabel1647->SetWrapLength(-1);
   fGroupFrame1646->AddFrame(fLabel1647, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel1647->MoveResize(16,16,63,14);
   fNumberEntryM = new TGNumberEntry(fGroupFrame1646, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1646->AddFrame(fNumberEntryM, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryM->MoveResize(16,34,84,20);
   fNumberEntryM->SetNumber(0.2);
   fNumberEntryM->SetLimits(TGNumberFormat::kNELLimitMin, 0.001);

   TGLabel *fLabel1652 = new TGLabel(fGroupFrame1646,"acs radius [ m ] :",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1652->SetTextJustify(36);
   fLabel1652->SetMargins(0,0,0,0);
   fLabel1652->SetWrapLength(-1);
   fGroupFrame1646->AddFrame(fLabel1652, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel1652->MoveResize(16,58,85,14);
   fNumberEntryAR = new TGNumberEntry(fGroupFrame1646, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1646->AddFrame(fNumberEntryAR, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryAR->MoveResize(16,76,84,20);
   fNumberEntryAR->SetNumber(0.01);
   fNumberEntryAR->SetLimits(TGNumberFormat::kNELLimitMin, 0.0);

   fGroupFrame1646->SetLayoutManager(new TGVerticalLayout(fGroupFrame1646));
   fGroupFrame1646->Resize(117,112);
   fHorizontalFrame1266->AddFrame(fGroupFrame1646, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   gClient->GetColorByName("#ccccff",ucolor);

   // "Simulation parameters" group frame
   TGGroupFrame *fGroupFrame1657 = new TGGroupFrame(fHorizontalFrame1266,"Simulation parameters",kVerticalFrame,TGGroupFrame::GetDefaultGC()(),TGGroupFrame::GetDefaultFontStruct(),ucolor);
   fGroupFrame1657->SetLayoutBroken(kTRUE);

   TGLabel *fLabel1658 = new TGLabel(fGroupFrame1657,"Time interval [ s ] :",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1658->SetTextJustify(36);
   fLabel1658->SetMargins(0,0,0,0);
   fLabel1658->SetWrapLength(-1);
   fGroupFrame1657->AddFrame(fLabel1658, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel1658->MoveResize(16,16,97,14);
   fNumberEntryTI = new TGNumberEntry(fGroupFrame1657, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1657->AddFrame(fNumberEntryTI, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryTI->MoveResize(16,34,84,20);
   fNumberEntryTI->SetNumber(0.1);
   fNumberEntryTI->SetLimits(TGNumberFormat::kNELLimitMin, 0.0);

   TGLabel *fLabel1663 = new TGLabel(fGroupFrame1657,"Time STEP interval :",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1663->SetTextJustify(36);
   fLabel1663->SetMargins(0,0,0,0);
   fLabel1663->SetWrapLength(-1);
   fGroupFrame1657->AddFrame(fLabel1663, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel1663->MoveResize(16,58,110,14);
   fNumberEntryTS = new TGNumberEntry(fGroupFrame1657, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1657->AddFrame(fNumberEntryTS, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryTS->MoveResize(16,76,84,20);
   fNumberEntryTS->SetNumStyle(TGNumberFormat::kNESInteger);
   fNumberEntryTS->SetNumber(50);
   fNumberEntryTS->SetLimits(TGNumberFormat::kNELLimitMin, 0.0);

   fGroupFrame1657->SetLayoutManager(new TGVerticalLayout(fGroupFrame1657));
   fGroupFrame1657->Resize(147,112);
   fHorizontalFrame1266->AddFrame(fGroupFrame1657, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   fVerticalFrame1250->AddFrame(fHorizontalFrame1266, new TGLayoutHints(kLHintsLeft | kLHintsCenterX | kLHintsTop));

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame1279 = new TGHorizontalFrame(fVerticalFrame1250,346,404,kHorizontalFrame);
   fHorizontalFrame1279->SetName("fHorizontalFrame1279");

   // vertical frame
   TGVerticalFrame *fVerticalFrame1288 = new TGVerticalFrame(fHorizontalFrame1279,150,400,kVerticalFrame);
   fVerticalFrame1288->SetName("fVerticalFrame1288");

   gClient->GetColorByName("#99cccc",ucolor);

   // "Initial conditions" group frame
   TGGroupFrame *fGroupFrame1670 = new TGGroupFrame(fVerticalFrame1288,"Initial conditions",kVerticalFrame,TGGroupFrame::GetDefaultGC()(),TGGroupFrame::GetDefaultFontStruct(),ucolor);

   TGLabel *fLabel1671 = new TGLabel(fGroupFrame1670,"x(0) [ m ] :",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1671->SetTextJustify(36);
   fLabel1671->SetMargins(0,0,0,0);
   fLabel1671->SetWrapLength(-1);
   fGroupFrame1670->AddFrame(fLabel1671, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryX0 = new TGNumberEntry(fGroupFrame1670, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1670->AddFrame(fNumberEntryX0, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryX0->SetNumber(0.0);

   TGLabel *fLabel1676 = new TGLabel(fGroupFrame1670,"y(0) [ m ] :",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1676->SetTextJustify(36);
   fLabel1676->SetMargins(0,0,0,0);
   fLabel1676->SetWrapLength(-1);
   fGroupFrame1670->AddFrame(fLabel1676, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryY0 = new TGNumberEntry(fGroupFrame1670, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1670->AddFrame(fNumberEntryY0, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryY0->SetNumber(0.0);

   TGLabel *fLabel1681 = new TGLabel(fGroupFrame1670,"vx(0) [ m/s ] :",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1681->SetTextJustify(36);
   fLabel1681->SetMargins(0,0,0,0);
   fLabel1681->SetWrapLength(-1);
   fGroupFrame1670->AddFrame(fLabel1681, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryVX0 = new TGNumberEntry(fGroupFrame1670, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1670->AddFrame(fNumberEntryVX0, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryVX0->SetNumber(1.0);
   //fNumberEntryTS->SetNumStyle(TGNumberFormat::kNESInteger);
   //fNumberEntryVY0->SetLimits(TGNumberFormat::kNELLimitMin, 0.0);

   TGLabel *fLabel1686 = new TGLabel(fGroupFrame1670,"vy(0) [ m/s ] :",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1686->SetTextJustify(36);
   fLabel1686->SetMargins(0,0,0,0);
   fLabel1686->SetWrapLength(-1);
   fGroupFrame1670->AddFrame(fLabel1686, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryVY0 = new TGNumberEntry(fGroupFrame1670, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1670->AddFrame(fNumberEntryVY0, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryVY0->SetNumber(3.0);

   fGroupFrame1670->SetLayoutManager(new TGVerticalLayout(fGroupFrame1670));
   fGroupFrame1670->Resize(116,196);
   fVerticalFrame1288->AddFrame(fGroupFrame1670, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   TGFont *ufont;         // will reflect user font changes
   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   TGGC   *uGC;           // will reflect user GC changes
   // graphics context changes
   GCValues_t valpFrame1691;
   valpFrame1691.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valpFrame1691.fForeground);
   gClient->GetColorByName("#e8e8e8",valpFrame1691.fBackground);
   valpFrame1691.fFillStyle = kFillSolid;
   valpFrame1691.fFont = ufont->GetFontHandle();
   valpFrame1691.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valpFrame1691, kTRUE);

   gClient->GetColorByName("#ffcccc",ucolor);

   // "Medium properties" group frame
   TGGroupFrame *fGroupFrame1691 = new TGGroupFrame(fVerticalFrame1288,"Medium properties",kVerticalFrame,uGC->GetGC(),ufont->GetFontStruct(),ucolor);

   TGLabel *fLabel1692 = new TGLabel(fGroupFrame1691,"Density [ kg/m3 ] :",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1692->SetTextJustify(36);
   fLabel1692->SetMargins(0,0,0,0);
   fLabel1692->SetWrapLength(-1);
   fGroupFrame1691->AddFrame(fLabel1692, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryRHO = new TGNumberEntry(fGroupFrame1691, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1691->AddFrame(fNumberEntryRHO, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryRHO->SetNumber(0.9);
   fNumberEntryRHO->SetLimits(TGNumberFormat::kNELLimitMin, 0.0);

   TGLabel *fLabel1697 = new TGLabel(fGroupFrame1691,"Drag Coeff.",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1697->SetTextJustify(36);
   fLabel1697->SetMargins(0,0,0,0);
   fLabel1697->SetWrapLength(-1);
   fGroupFrame1691->AddFrame(fLabel1697, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryDC = new TGNumberEntry(fGroupFrame1691, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1691->AddFrame(fNumberEntryDC, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryDC->SetNumber(0.4);
   fNumberEntryDC->SetLimits(TGNumberFormat::kNELLimitMin, 0.0);

   TGLabel *fLabel1702 = new TGLabel(fGroupFrame1691,"Displaced Vol. [ m3 ]:",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1702->SetTextJustify(36);
   fLabel1702->SetMargins(0,0,0,0);
   fLabel1702->SetWrapLength(-1);
   fGroupFrame1691->AddFrame(fLabel1702, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryVD = new TGNumberEntry(fGroupFrame1691, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1691->AddFrame(fNumberEntryVD, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryVD->SetNumber(0.2);
   fNumberEntryVD->SetLimits(TGNumberFormat::kNELLimitMin, 0.0);

   TGLabel *fLabel1707 = new TGLabel(fGroupFrame1691,"g [ m/s2 ] :",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel1707->SetTextJustify(36);
   fLabel1707->SetMargins(0,0,0,0);
   fLabel1707->SetWrapLength(-1);
   fGroupFrame1691->AddFrame(fLabel1707, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryG = new TGNumberEntry(fGroupFrame1691, (Double_t) 0,10,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame1691->AddFrame(fNumberEntryG, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntryG->SetNumber(9.76);
   fNumberEntryG->SetLimits(TGNumberFormat::kNELLimitMin, 0.0);

   fGroupFrame1691->SetLayoutManager(new TGVerticalLayout(fGroupFrame1691));
   fGroupFrame1691->Resize(146,196);
   fVerticalFrame1288->AddFrame(fGroupFrame1691, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   fHorizontalFrame1279->AddFrame(fVerticalFrame1288, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   // vertical frame
   TGVerticalFrame *fVerticalFrame4239 = new TGVerticalFrame(fHorizontalFrame1279,188,338,kVerticalFrame);
   fVerticalFrame4239->SetName("fVerticalFrame4239");

   // "Physics state at time t " group frame
   TGGroupFrame *fGroupFrame1713 = new TGGroupFrame(fVerticalFrame4239,"Physics state at time t ");
   fGroupFrame1713->SetLayoutBroken(kTRUE);
   fLabelXT = new TGLabel(fGroupFrame1713,"x(t) [ m ] ");
   fLabelXT->SetTextJustify(36);
   fLabelXT->SetMargins(0,0,0,0);
   fLabelXT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelXT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelXT->MoveResize(16,16,160,14);
   fLabelYT = new TGLabel(fGroupFrame1713,"y(t) [ m ] ");
   fLabelYT->SetTextJustify(36);
   fLabelYT->SetMargins(0,0,0,0);
   fLabelYT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelYT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelYT->MoveResize(16,34,160,14);
   fLabelVT = new TGLabel(fGroupFrame1713,"v(t) [ m/s ]");
   fLabelVT->SetTextJustify(36);
   fLabelVT->SetMargins(0,0,0,0);
   fLabelVT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelVT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelVT->MoveResize(16,52,160,14);
   fLabelVXT = new TGLabel(fGroupFrame1713,"vx(t) [ m/s ]");
   fLabelVXT->SetTextJustify(36);
   fLabelVXT->SetMargins(0,0,0,0);
   fLabelVXT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelVXT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelVXT->MoveResize(16,70,160,14);
   fLabelVYT = new TGLabel(fGroupFrame1713,"vy(t) [ m/s ]");
   fLabelVYT->SetTextJustify(36);
   fLabelVYT->SetMargins(0,0,0,0);
   fLabelVYT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelVYT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelVYT->MoveResize(16,88,160,14);
   fLabelFDT = new TGLabel(fGroupFrame1713,"FD(t) [ N ]");
   fLabelFDT->SetTextJustify(36);
   fLabelFDT->SetMargins(0,0,0,0);
   fLabelFDT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelFDT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelFDT->MoveResize(16,106,160,14);
   fLabelFDXT = new TGLabel(fGroupFrame1713,"FDx(t) [ N ]");
   fLabelFDXT->SetTextJustify(36);
   fLabelFDXT->SetMargins(0,0,0,0);
   fLabelFDXT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelFDXT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelFDXT->MoveResize(16,124,160,14);
   fLabelFDYT = new TGLabel(fGroupFrame1713,"FDy(t) [ N ]");
   fLabelFDYT->SetTextJustify(36);
   fLabelFDYT->SetMargins(0,0,0,0);
   fLabelFDYT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelFDYT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelFDYT->MoveResize(16,142,160,14);
   fLabelFNT = new TGLabel(fGroupFrame1713,"Fn(t) [ N ]");
   fLabelFNT->SetTextJustify(36);
   fLabelFNT->SetMargins(0,0,0,0);
   fLabelFNT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelFNT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelFNT->MoveResize(16,160,160,14);
   fLabelFNXT = new TGLabel(fGroupFrame1713,"Fnx(t) [ N ]");
   fLabelFNXT->SetTextJustify(36);
   fLabelFNXT->SetMargins(0,0,0,0);
   fLabelFNXT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelFNXT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelFNXT->MoveResize(16,178,160,14);
   fLabelFNYT = new TGLabel(fGroupFrame1713,"Fny(t) [ N ]");
   fLabelFNYT->SetTextJustify(36);
   fLabelFNYT->SetMargins(0,0,0,0);
   fLabelFNYT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelFNYT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelFNYT->MoveResize(16,196,160,14);
   fLabelEKT = new TGLabel(fGroupFrame1713,"Ek(t) [ J ]");
   fLabelEKT->SetTextJustify(36);
   fLabelEKT->SetMargins(0,0,0,0);
   fLabelEKT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelEKT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelEKT->MoveResize(16,214,160,14);
   fLabelEPT = new TGLabel(fGroupFrame1713,"Ep [ J ]");
   fLabelEPT->SetTextJustify(36);
   fLabelEPT->SetMargins(0,0,0,0);
   fLabelEPT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelEPT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelEPT->MoveResize(16,232,160,14);
   fLabelET = new TGLabel(fGroupFrame1713,"E [ J ]");
   fLabelET->SetTextJustify(36);
   fLabelET->SetMargins(0,0,0,0);
   fLabelET->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelET, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelET->MoveResize(16,250,160,14);
   fLabelDELTA_ET = new TGLabel(fGroupFrame1713,"delta_E [ J ]");
   fLabelDELTA_ET->SetTextJustify(36);
   fLabelDELTA_ET->SetMargins(0,0,0,0);
   fLabelDELTA_ET->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelDELTA_ET, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelDELTA_ET->MoveResize(16,268,160,14);
   fLabelANGLE = new TGLabel(fGroupFrame1713,"Angle [ deg ]");
   fLabelANGLE->SetTextJustify(36);
   fLabelANGLE->SetMargins(0,0,0,0);
   fLabelANGLE->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelANGLE, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelANGLE->MoveResize(16,286,160,14);
   fLabelCT = new TGLabel(fGroupFrame1713,"Current time [ s ]");
   fLabelCT->SetTextJustify(36);
   fLabelCT->SetMargins(0,0,0,0);
   fLabelCT->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelCT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelCT->MoveResize(16,310,160,14);
   fLabelCS = new TGLabel(fGroupFrame1713,"Current STEP");
   fLabelCS->SetTextJustify(36);
   fLabelCS->SetMargins(0,0,0,0);
   fLabelCS->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelCS, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelCS->MoveResize(16,328,160,14);

   fLabelFE = new TGLabel(fGroupFrame1713,"Fe [ N ]");
   fLabelFE->SetTextJustify(36);
   fLabelFE->SetMargins(0,0,0,0);
   fLabelFE->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelFE, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelFE->MoveResize(16,352,160,14);
   fLabelMG = new TGLabel(fGroupFrame1713,"mg [ N ]");
   fLabelMG->SetTextJustify(36);
   fLabelMG->SetMargins(0,0,0,0);
   fLabelMG->SetWrapLength(-1);
   fGroupFrame1713->AddFrame(fLabelMG, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabelMG->MoveResize(16,370,160,14);

   
   //missed angle label. Fixing


   
   fGroupFrame1713->SetLayoutManager(new TGVerticalLayout(fGroupFrame1713));
   //fGroupFrame1713->Resize(184,334);
   fGroupFrame1713->Resize(184,394);
   
   fVerticalFrame4239->AddFrame(fGroupFrame1713, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   fHorizontalFrame1279->AddFrame(fVerticalFrame4239, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   fVerticalFrame1250->AddFrame(fHorizontalFrame1279, new TGLayoutHints(kLHintsNormal));

   fHorizontalFrame4320->AddFrame(fVerticalFrame1250, new TGLayoutHints(kLHintsExpandY));

   // ICONS by hand

   TGIcon *SEEDPMicon = new TGIcon(fVerticalFrame1250, pathDIR_ICONS + "logoEDPM.png");
   SEEDPMicon->SetName("logoEDPM");
   fVerticalFrame1250->AddFrame(SEEDPMicon, new TGLayoutHints(kLHintsCenterX | kLHintsCenterY,2,2,2,2));
   SEEDPMicon->MoveResize(1,1,90,60);

   TGIcon *UDicon = new TGIcon(fVerticalFrame1250, pathDIR_ICONS + "logoUD.png");
   UDicon->SetName("logoUD");
   fVerticalFrame1250->AddFrame(UDicon, new TGLayoutHints(kLHintsCenterX | kLHintsCenterY,2,2,2,2));
   UDicon->MoveResize(1,1,180,70);

   fVerticalFrame1250->MoveResize(1,1,348,680);


   //================================================================================
   
   // vertical frame canvas and buttons
   TGVerticalFrame *fVerticalFrame4329 = new TGVerticalFrame(fHorizontalFrame4320,1102,680,kVerticalFrame);
   fVerticalFrame4329->SetName("fVerticalFrame4329");

   // embedded canvas
   fECanvas = new TRootEmbeddedCanvas(0,fVerticalFrame4329,1098,592,kSunkenFrame);
   fECanvas->SetName("fECanvas");
   //Int_t wfRootEmbeddedCanvas4338 = fRootEmbeddedCanvas4338->GetCanvasWindowId();
   //TCanvas *c123 = new TCanvas("c123", 10, 10, wfRootEmbeddedCanvas4338);
   //fRootEmbeddedCanvas4338->AdoptCanvas(c123);
   fVerticalFrame4329->AddFrame(fECanvas, new TGLayoutHints(kLHintsCenterX | kLHintsTop | kLHintsExpandX | kLHintsExpandY,2,2,2,2));

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame4915 = new TGHorizontalFrame(fVerticalFrame4329,608,52,kHorizontalFrame);
   fHorizontalFrame4915->SetName("fHorizontalFrame4915");

   // "Plots" group frame
   TGGroupFrame *fGroupFrame1752 = new TGGroupFrame(fHorizontalFrame4915,"Plots",kHorizontalFrame);
   TGLabel *fLabel1753 = new TGLabel(fGroupFrame1752,"Y-axis");
   fLabel1753->SetTextJustify(36);
   fLabel1753->SetMargins(0,0,0,0);
   fLabel1753->SetWrapLength(-1);
   fGroupFrame1752->AddFrame(fLabel1753, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   gClient->GetColorByName("#ffffff",ucolor);

   // combo box
   fComboBoxYAXIS = new TGComboBox(fGroupFrame1752,-1,kHorizontalFrame | kSunkenFrame | kOwnBackground);
   fComboBoxYAXIS->AddEntry("t [ s ] ",0);
   fComboBoxYAXIS->AddEntry("x [ m ] ",1);
   fComboBoxYAXIS->AddEntry("y [ m ] ",2);
   fComboBoxYAXIS->AddEntry("vx [ m/s ] ",3);
   fComboBoxYAXIS->AddEntry("vy [ m/s ] ",4);
   fComboBoxYAXIS->AddEntry("v [ m/s ] ",5);
   fComboBoxYAXIS->AddEntry("FDx [ N ] ",6);
   fComboBoxYAXIS->AddEntry("FDy [ N ] ",7);
   fComboBoxYAXIS->AddEntry("FD [ N ] ",8);
   fComboBoxYAXIS->AddEntry("Fnx [ N ] ",9);
   fComboBoxYAXIS->AddEntry("Fny [ N ] ",10);
   fComboBoxYAXIS->AddEntry("Fn [ N ] ",11);
   fComboBoxYAXIS->AddEntry("Ek [ J ] ",12);
   fComboBoxYAXIS->AddEntry("Ep [ J ] ",13);
   fComboBoxYAXIS->AddEntry("E [ J ] ",14);
   fComboBoxYAXIS->AddEntry("delta_E [ J ] ",15);
   fComboBoxYAXIS->AddEntry("Angle [ deg ] ",15);

   fComboBoxYAXIS->Resize(102,20);
   fComboBoxYAXIS->Select(2);
   fGroupFrame1752->AddFrame(fComboBoxYAXIS, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   TGLabel *fLabel1772 = new TGLabel(fGroupFrame1752,"X-axis");
   fLabel1772->SetTextJustify(36);
   fLabel1772->SetMargins(0,0,0,0);
   fLabel1772->SetWrapLength(-1);
   fGroupFrame1752->AddFrame(fLabel1772, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   gClient->GetColorByName("#ffffff",ucolor);

   // combo box
   fComboBoxXAXIS = new TGComboBox(fGroupFrame1752,-1,kHorizontalFrame | kSunkenFrame | kOwnBackground);
   fComboBoxXAXIS->AddEntry("t [ s ] ",0);
   fComboBoxXAXIS->AddEntry("x [ m ] ",1);
   fComboBoxXAXIS->AddEntry("y [ m ] ",2);
   fComboBoxXAXIS->AddEntry("vx [ m/s ] ",3);
   fComboBoxXAXIS->AddEntry("vy [ m/s ] ",4);
   fComboBoxXAXIS->AddEntry("v [ m/s ] ",5);
   fComboBoxXAXIS->AddEntry("FDx [ N ] ",6);
   fComboBoxXAXIS->AddEntry("FDy [ N ] ",7);
   fComboBoxXAXIS->AddEntry("FD [ N ] ",8);
   fComboBoxXAXIS->AddEntry("Fnx [ N ] ",9);
   fComboBoxXAXIS->AddEntry("Fny [ N ] ",10);
   fComboBoxXAXIS->AddEntry("Fn [ N ] ",11);
   fComboBoxXAXIS->AddEntry("Ek [ J ] ",12);
   fComboBoxXAXIS->AddEntry("Ep [ J ] ",13);
   fComboBoxXAXIS->AddEntry("E [ J ] ",14);
   fComboBoxXAXIS->AddEntry("delta_E [ J ] ",15);
   fComboBoxXAXIS->AddEntry("Angle [ deg ] ",15);

   fComboBoxXAXIS->Resize(102,20);
   fComboBoxXAXIS->Select(0);
   fGroupFrame1752->AddFrame(fComboBoxXAXIS, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   fGroupFrame1752->SetLayoutManager(new TGHorizontalLayout(fGroupFrame1752));
   fGroupFrame1752->Resize(316,52);
   fHorizontalFrame4915->AddFrame(fGroupFrame1752, new TGLayoutHints(kLHintsLeft | kLHintsTop,52,0,0,0));

   // "Show vectors" group frame
   TGGroupFrame *fGroupFrame1746 = new TGGroupFrame(fHorizontalFrame4915,"Show unitary vectors",kHorizontalFrame);
   fGroupFrame1746->SetLayoutBroken(kTRUE);
   fCheckButtonMG = new TGCheckButton(fGroupFrame1746,"mg");
   fCheckButtonMG->SetTextJustify(36);
   fCheckButtonMG->SetMargins(0,0,0,0);
   fCheckButtonMG->SetWrapLength(-1);
   fGroupFrame1746->AddFrame(fCheckButtonMG, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fCheckButtonMG->MoveResize(16,16,42,15);
   fCheckButtonFE = new TGCheckButton(fGroupFrame1746,"Fe");
   fCheckButtonFE->SetTextJustify(36);
   fCheckButtonFE->SetMargins(0,0,0,0);
   fCheckButtonFE->SetWrapLength(-1);
   fGroupFrame1746->AddFrame(fCheckButtonFE, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fCheckButtonFE->MoveResize(62,16,39,15);
   fCheckButtonFD = new TGCheckButton(fGroupFrame1746,"FD");
   fCheckButtonFD->SetTextJustify(36);
   fCheckButtonFD->SetMargins(0,0,0,0);
   fCheckButtonFD->SetWrapLength(-1);
   fGroupFrame1746->AddFrame(fCheckButtonFD, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fCheckButtonFD->MoveResize(105,16,41,15);
   fCheckButtonFN = new TGCheckButton(fGroupFrame1746,"Fn");
   fCheckButtonFN->SetTextJustify(36);
   fCheckButtonFN->SetMargins(0,0,0,0);
   fCheckButtonFN->SetWrapLength(-1);
   fGroupFrame1746->AddFrame(fCheckButtonFN, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fCheckButtonFN->MoveResize(150,16,39,15);
   fCheckButtonV = new TGCheckButton(fGroupFrame1746,"v");
   fCheckButtonV->SetTextJustify(36);
   fCheckButtonV->SetMargins(0,0,0,0);
   fCheckButtonV->SetWrapLength(-1);
   fGroupFrame1746->AddFrame(fCheckButtonV, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fCheckButtonV->MoveResize(193,16,31,15);

   fGroupFrame1746->SetLayoutManager(new TGHorizontalLayout(fGroupFrame1746));
   fGroupFrame1746->Resize(240,47);
   fHorizontalFrame4915->AddFrame(fGroupFrame1746, new TGLayoutHints(kLHintsLeft | kLHintsCenterX | kLHintsTop));

   fVerticalFrame4329->AddFrame(fHorizontalFrame4915, new TGLayoutHints(kLHintsLeft | kLHintsCenterX | kLHintsTop));

   gClient->GetColorByName("#999999",ucolor);
   TGHorizontal3DLine *fHorizontal3DLine5337 = new TGHorizontal3DLine(fVerticalFrame4329,152,8,kRaisedFrame,ucolor);
   fHorizontal3DLine5337->SetName("fHorizontal3DLine5337");
   fVerticalFrame4329->AddFrame(fHorizontal3DLine5337, new TGLayoutHints(kLHintsCenterX | kLHintsTop));

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame4362 = new TGHorizontalFrame(fVerticalFrame4329,347,24,kHorizontalFrame);
   fHorizontalFrame4362->SetName("fHorizontalFrame4362");
   fTextButtonDRAW = new TGTextButton(fHorizontalFrame4362,"&Draw",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   fTextButtonDRAW->SetTextJustify(36);
   fTextButtonDRAW->SetMargins(0,0,0,0);
   fTextButtonDRAW->SetWrapLength(-1);
   fTextButtonDRAW->Resize(37,20);
   fHorizontalFrame4362->AddFrame(fTextButtonDRAW, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   
   
   fTextButtonSTOP = new TGTextButton(fHorizontalFrame4362,"&Stop",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   fTextButtonSTOP->SetTextJustify(36);
   fTextButtonSTOP->SetMargins(0,0,0,0);
   fTextButtonSTOP->SetWrapLength(-1);
   fTextButtonSTOP->Resize(33,20);
   
   fHorizontalFrame4362->AddFrame(fTextButtonSTOP, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButtonCLEAR = new TGTextButton(fHorizontalFrame4362,"&Clear",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   fTextButtonCLEAR->SetTextJustify(36);
   fTextButtonCLEAR->SetMargins(0,0,0,0);
   fTextButtonCLEAR->SetWrapLength(-1);
   fTextButtonCLEAR->Resize(38,20);
   fHorizontalFrame4362->AddFrame(fTextButtonCLEAR, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButtonEXIT = new TGTextButton(fHorizontalFrame4362,"&Exit",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   fTextButtonEXIT->SetTextJustify(36);
   fTextButtonEXIT->SetMargins(0,0,0,0);
   fTextButtonEXIT->SetWrapLength(-1);
   fTextButtonEXIT->Resize(28,20);
   fHorizontalFrame4362->AddFrame(fTextButtonEXIT, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButtonHELP = new TGTextButton(fHorizontalFrame4362,"&Help",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   fTextButtonHELP->SetTextJustify(36);
   fTextButtonHELP->SetMargins(0,0,0,0);
   fTextButtonHELP->SetWrapLength(-1);
   fTextButtonHELP->Resize(34,20);
   fHorizontalFrame4362->AddFrame(fTextButtonHELP, new TGLayoutHints(kLHintsLeft | kLHintsTop,159,2,2,2));

   fTextButtonDRAW->Connect("Clicked()","MyMainFrame",this,"DoDraw()");
   fTextButtonSTOP->Connect("Clicked()","MyMainFrame",this,"DoStop()");
   fTextButtonHELP->Connect("Clicked()","MyMainFrame",this,"DoHelp()");
   
   fTextButtonSTOP->SetState(kButtonDisabled, kTRUE);
   fTextButtonCLEAR->SetState(kButtonDisabled, kTRUE);
   fTextButtonEXIT->SetCommand("gApplication->Terminate(0)");

   DoHelp();
   fTextButtonHELP->SetState(kButtonDisabled, kTRUE);
   
   fVerticalFrame4329->AddFrame(fHorizontalFrame4362, new TGLayoutHints(kLHintsCenterX | kLHintsTop));

   fHorizontalFrame4320->AddFrame(fVerticalFrame4329, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fVerticalFrame4329->MoveResize(349,1,1102,680);

  


   
   fMainFrameSEEDPM->AddFrame(fHorizontalFrame4320, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   
   fMainFrameSEEDPM->SetMWMHints(kMWMDecorAll,
                        kMWMFuncAll,
                        kMWMInputModeless);
   fMainFrameSEEDPM->MapSubwindows();

   fMainFrameSEEDPM->Resize(fMainFrameSEEDPM->GetDefaultSize());
   fMainFrameSEEDPM->MapWindow();
   fMainFrameSEEDPM->Resize(1541,913);
}

void MyMainFrame::DoStop() {
  if(optBreak == 0){
    fTextButtonSTOP->TGTextButton::SetText("&Run");
    fTextButtonHELP->SetState(kButtonDisabled, kTRUE);
    fTextButtonSTOP->SetTextColor(kGreen,kFALSE);
    optBreak = 1;
  }
  else{
    optBreak = 0;
    fTextButtonSTOP->TGTextButton::SetText("&Stop");
    fTextButtonCLEAR->TGTextButton::SetState(kButtonDisabled, kTRUE);
    fTextButtonSTOP->TGTextButton::SetState(kButtonUp, kTRUE);
  }
}

void MyMainFrame::DoClear() {
  fTextButtonDRAW->TGTextButton::SetState(kButtonUp, kTRUE);
  fTextButtonHELP->SetState(kButtonUp, kTRUE);
  fTextButtonSTOP->TGTextButton::SetText("&Stop");
  fTextButtonSTOP->TGTextButton::SetState(kButtonDisabled, kTRUE);
  
}

  
void MyMainFrame::DoHelp() {
  TCanvas *c1 = fECanvas->GetCanvas();
  c1->SetFillColor(18);
  c1->Clear();
  c1->Update();
  
  TImage *img2 = TImage::Open( pathDIR_ICONS + "logoFisinfor_v2.png");
  TImage *img3 = TImage::Open( pathDIR_ICONS + "logoLIFAE.png");
  
  TPad *pad1 = new TPad("pad1","This is pad1",0.01,0.8,0.99,0.97);
  TPad *pad3 = new TPad("pad3","This is pad3",0.01,0.02,0.70,0.79);
  TPad *pad4 = new TPad("pad4","This is pad4",0.71,0.31,0.99,0.79);
  TPad *pad5 = new TPad("pad5","This is pad5",0.77,0.01,0.93,0.30);
  pad5->Divide(1,2);
  
  pad1->SetFillColor(0);
  pad3->SetFillColor(0);
  pad4->SetFillColor(0);
  pad5->SetFillColor(0);

  pad1->Draw();
  pad3->Draw();
  pad4->Draw();
  pad5->Draw();

  pad5->cd(1);
  img2->Draw();
  pad5->cd(2);
  img3->Draw();
    
  pad1->cd();
  TLatex *t1 = new TLatex(0.5, 0.75,"EDPM #color[2]{Soft}#color[4]{Edu}");
  TLatex *t2 = new TLatex(0.5, 0.45,"*Engineering Dragged Parabolic Motion #color[2]{Software}#color[4]{Education}");
  TLatex *t3 = new TLatex(0.5, 0.15,"Creditos: UNIVERSIDAD DISTRITAL FRANCISCO JOSE DE CALDAS");
  t1->SetTextAlign(22);
  t1->SetTextSize(0.3);
  t2->SetTextAlign(21);
  t2->SetTextSize(0.2);
  t3->SetTextAlign(22);
  t3->SetTextSize(0.2);
  t1->Draw();
  t2->Draw();
  t3->Draw();

  TPaveText *pave = new TPaveText(0.0,0.05,0.42,0.97);
  pave->SetTextAlign(10);
  pave->SetTextFont(42);
  pave->SetTextSize(0.03);
  pave->SetFillColor(kCyan-10);

  pave->AddText(" ");
  pave->AddText("#font[62]{Dragged Force:}");
  pave->AddText(" ");
  pave->AddText("#vec{FD} = -(1/2)#rhoC_{D}Av^{2}#hat{v}");
  pave->AddText("#rho: Medium density");
  pave->AddText("A: Average Body's cross section");
  pave->AddText("AC radius: Average cross section radius");
  pave->AddText("C_{D}: Dragged coefficient");
  pave->AddText("#vec{v}=v#hat{v} Body's velocity");
  pave->AddText("#font[62]{Differential equation of motion (DEM):}");
  pave->AddText(" ");
  pave->AddText("Net torce: #vec{F}_{n} = #vec{FD} + #vec{F}_{e} + m#vec{g}");
  pave->AddText(" ");
  pave->AddText("Buoyant force: #vec{F}_{e} = #rhogV_{d}#hat{j}");
  pave->AddText("g: Gravitational acceleration");
  pave->AddText("m: Body mass");
  pave->AddText("#bf{Note:} In this dragged model, body");
  pave->AddText("cross section is assume to be, in");
  pave->AddText("average(a), equivalent to the circle's");
  pave->AddText("cross section(cs), computed by cicle's");
  pave->AddText("average radius: #piR^{2}_{acs}");
  pave->AddText("EDPM show only unitary vectors");
  pave->AddText("#font[62]{EDPM uses ODEINT C++ library}");
  pave->AddText("to solve the DEM");

  TPaveText *pavegui = new TPaveText(0.43,0.05,0.99,0.97);
  pavegui->SetTextAlign(10);
  pavegui->SetTextFont(42);
  pavegui->SetTextColor(0);
  pavegui->SetTextSize(0.03);
  pavegui->SetFillColor(kRed-6);

  pavegui->AddText(" ");
  pavegui->AddText(" To run a simulation press #font[62]{DRAW} ");
  pavegui->AddText(" To stop a simulation press #font[62]{STOP}. It changes to");
  pavegui->AddText(" #font[62]{RUN}. To continue a simulation press #font[62]{RUN} ");
  pavegui->AddText(" To clear gui press #font[62]{CLEAR} ");
  pavegui->AddText(" To pop-up this gui 'Help' press #font[62]{HELP} ");
  pavegui->AddText(" Note: ctrl + the underlined key to activate buttons:"); 
  pavegui->AddText("       i.e  ctrl+d to activate #font[62]{DRAW}");
  pavegui->AddText(" Please, keep in mind the EDPM software is intended");
  pavegui->AddText(" for educational purposes only. It is suggested to run");
  pavegui->AddText(" simulations by thinking of a decent time interval and ");
  pavegui->AddText(" number of steps (it would cost an slowdown in cpu");
  pavegui->AddText(" performance).");
  pavegui->AddText(" ");
  pavegui->AddText("   Without further ado, #scale[1.2]{#font[62]{lets hands ON !!}}");
  pavegui->AddText("   Check your buttons and press #font[62]{DRAW!!}");


  TPaveText *pavecred = new TPaveText(0.01,0.01,0.99,0.97);
  pavecred->SetTextAlign(10);
  pavecred->SetTextFont(42);
  pavecred->SetTextColor(0);
  pavecred->SetTextSize(0.045);
  pavecred->SetFillColor(kBlue-6);

  pavecred->AddText(" ");
  pavecred->AddText(" Autores: ");
  pavecred->AddText(" #font[62]{Julian A Salamanca B}, PHD* ");
  pavecred->AddText(" GRUPO DE INVESTIGACION FISINFOR ");
  pavecred->AddText(" FACULTAD DE CIENCIAS Y EDUCACION");
  pavecred->AddText(" #font[62]{Diego J Rodriguez P, PHD}");
  pavecred->AddText(" GRUPO DE INVESTIGACION LIFAE*");
  pavecred->AddText(" FACULTAD DE INGENIERIA ");
  pavecred->AddText(" Profesores #font[72]{UNIVERSIDAD DISTRITAL}");
  pavecred->AddText(" #font[72]{FRANCISCO JOSE DE CALDAS}");
  
  pad3->cd();
  pave->Draw();
  pavegui->Draw();
  
  pad4->cd();
  pavecred->Draw();
  
  
  
  c1->Update();


}


void MyMainFrame::DoDraw() {

  gStyle->SetTitleFontSize(0.08);
  //  gStyle->SetNdivisions(505);
  gStyle->SetNdivisions(505,"Y");
  gStyle->SetNdivisions(505,"X");
  gStyle->SetLabelSize(0.06,"X");
  gStyle->SetLabelSize(0.06,"Y");
  gStyle->SetTitleOffset(0.01);
  
  gStyle->SetTitleXOffset(0.70);
  gStyle->SetTitleYOffset(1.4);

  gStyle->SetLabelOffset(0.002,"X");
  gStyle->SetLabelOffset(0.002,"Y");

  gStyle->SetTitleXSize(0.08);
  gStyle->SetTitleYSize(0.08);
  gStyle->SetGridColor(4);
  gStyle->SetOptFit(1);
  gStyle->SetOptStat("e");

  gStyle->SetPadTopMargin(0.01); 
  gStyle->SetPadBottomMargin(0.15); 
  gStyle->SetPadLeftMargin(0.25); 
  gStyle->SetPadRightMargin(0.01);

  optBreak = 0;
  fTextButtonDRAW->SetState(kButtonDisabled, kTRUE);
  fTextButtonCLEAR->SetState(kButtonDisabled, kTRUE);
  fTextButtonSTOP->SetState(kButtonUp, kTRUE);
  fTextButtonHELP->SetState(kButtonDisabled, kTRUE);
  
  TCanvas *fCanvas = fECanvas->GetCanvas();
  fCanvas->Clear();
  fCanvas->Update();
  fCanvas->Divide(2,1);

  Int_t optMg=fCheckButtonMG->GetState();
  Int_t optFe=fCheckButtonFE->GetState();
  Int_t optFD=fCheckButtonFD->GetState();
  Int_t optFn=fCheckButtonFN->GetState();
  Int_t optV =fCheckButtonV->GetState();
  Int_t optS =fNumberEntryTS->GetNumber();
  Int_t ms=100;
  
  TGraph *gr_pm, *gr_vars;
  TLatex *tFDx, *tFDy, *tFD;
  TString *sXaxis, *sYaxis;
  
  TArrow *arrow_mg, *arrow_Fe, *arrow_FDx, *arrow_FDy, *arrow_FD, *arrow_Fnx, *arrow_Fny, *arrow_Fn;
  TArrow *arrow_v, *arrow_vx, *arrow_vy;  
  TMarker *mBody, *mBody_vars;
  const int nstep = optS; //steps
  const Double_t dt = fNumberEntryTI->GetNumber();

  //model cero is a sphere, 1 will be area average model
  //if 1, the cross section must be to reduced a circle'a área

  Double_t r_acs   =fNumberEntryAR->GetNumber();
  Double_t m   =fNumberEntryM->GetNumber();
  Double_t c   =fNumberEntryDC->GetNumber();
  Double_t rho =fNumberEntryRHO->GetNumber();
  Double_t A   = r_acs*r_acs*TMath::Pi();
  Double_t Vd  =fNumberEntryVD->GetNumber();
  Double_t g   =fNumberEntryG->GetNumber();

  Double_t tt[nstep];
  Double_t x[nstep];
  Double_t y[nstep];
  Double_t vx[nstep];
  Double_t vy[nstep];
  Double_t v[nstep];

  Double_t FDx[nstep];
  Double_t FDy[nstep];
  Double_t FD[nstep];
  Double_t Fe =rho*Vd*g;
  Double_t Fn[nstep];
  Double_t Fnx[nstep];
  Double_t Fny[nstep];
  
  Double_t Ek[nstep];
  Double_t Ep[nstep];
  Double_t E[nstep];
  Double_t delta_E[nstep];
  Double_t Angle[nstep];

  Double_t arr_gr_Xvars[nstep];
  Double_t arr_gr_Yvars[nstep];
  
  Double_t grXmax, grXmin, grYmax, grYmin;
  
  tt[0] = 0.0;
  x[0]  = fNumberEntryX0->GetNumber();
  vx[0] = fNumberEntryVX0->GetNumber();
  y[0]  = fNumberEntryY0->GetNumber();
  vy[0] = fNumberEntryVY0->GetNumber();

  v[0] = sqrt(vx[0]*vx[0] + vy[0]*vy[0]);

  if(v[0] != 0){
    Angle[0] = TMath::ACos(vx[0]/v[0]);
  }
  else{
    Angle[0] = 0.0;
  }
  
  Ek[0] = 0.5*m*(vx[0]*vx[0] + vy[0]*vy[0]);
  Ep[0] = m*g*y[0];
  E[0] = Ek[0] + Ep[0];
  delta_E[0] = E[0] - Ek[0] + Ep[0];

    
    
  
  FD[0] = 0.5*rho*v[0]*v[0]*c*A;
  FDx[0] = -0.5*c*A*rho*v[0]*vx[0];
  FDy[0] = -0.5*rho*v[0]*vy[0]*c*A;
  
  Fnx[0] = FDx[0];
  Fny[0] = FDy[0] + Fe -m*g;
  Fn[0]  = sqrt(Fnx[0]*Fnx[0] + Fny[0]*Fny[0]);
  
  runge_kutta4< state_type > rk4;
  ppositionXY posXY(m,c,rho,A,Vd,g );
  state_type psi = {{x[0], vx[0], y[0], vy[0] }};

  cout << Fn[0] << " " << FD[0] << endl;
  
  
  for( size_t i=0 ; i<nstep-1 ; ++i ){

    gSystem->ProcessEvents();  // handle GUI events
    
    tt[i+1] = tt[i] + dt;
    rk4.do_step( posXY , psi , tt[i+1] , dt );
    //cout << "x(t): " << psi[0] << " vx(t): " << psi[1] << " y(t):  " << psi[2] << " vy(t): " << psi[3] << " t: " << tt[i] <<  endl;
    //cout << "FDx(t): " << FDx[i] << " FDy(t): " << FDy[i] << " Fnx(t):  " << Fnx[i] << " Fny(t): " << Fny[i] <<  endl;
    
    x[i+1]  = psi[0];
    vx[i+1] = psi[1];
    y[i+1]  = psi[2];
    vy[i+1] = psi[3];

    v[i+1]  = sqrt(vx[i+1]*vx[i+1] + vy[i+1]*vy[i+1]);

    if(v[i+1] != 0){
      Angle[i+1] = TMath::ACos(vx[i+1]/v[i+1])*180/TMath::Pi();
    }
    else{
      Angle[i+1] = 0.0;
    }

    FD[i+1] = 0.5*rho*c*A*v[i+1]*v[i+1];
    FDx[i+1] = -0.5*rho*c*A*v[i+1]*vx[i+1];
    FDy[i+1] = -0.5*rho*c*A*v[i+1]*vy[i+1];

    Fnx[i+1] = FDx[i+1];
    Fny[i+1] = FDy[i+1] + Fe -m*g;
    Fn[i+1]  = sqrt(Fnx[i+1]*Fnx[i+1] + Fny[i+1]*Fny[i+1]);
        
    Ek[i+1] = 0.5*m*(psi[1]*psi[1] + psi[3]*psi[3]);
    Ep[i+1] = m*g*psi[2];
    E[i+1]  = Ek[i+1] + Ep[i+1];
    delta_E[i+1] = E[0] -(Ek[i+1] + Ep[i+1]);

        
    char cValVar[50];
    sprintf(cValVar, "x(t) = %0.4f [ m ]" , (float)x[i+1]);
    fLabelXT->SetTitle(cValVar);
    sprintf(cValVar, "y(t) = %0.4f [ m ]" , (float)y[i+1]);
    fLabelYT->SetTitle(cValVar);
    sprintf(cValVar, "v(t) = %0.4f [ m/s ]" , (float)v[i+1]);
    fLabelVT->SetTitle(cValVar);
    sprintf(cValVar, "vx(t) = %0.4f [ m/s ]" , (float)vx[i+1]);
    fLabelVXT->SetTitle(cValVar);
    sprintf(cValVar, "vy(t) = %0.4f [ m/s ]" , (float)vy[i+1]);
    fLabelVYT->SetTitle(cValVar);
    sprintf(cValVar, "FD(t) = %0.4f [ N ]" , (float)FD[i+1]);
    fLabelFDT->SetTitle(cValVar);
    sprintf(cValVar, "FDx(t) = %0.4f [ N ]" , (float)FDx[i+1]);
    fLabelFDXT->SetTitle(cValVar);
    sprintf(cValVar, "FDy(t) = %0.4f [ N ]" , (float)FDy[i+1]);
    fLabelFDYT->SetTitle(cValVar);
    sprintf(cValVar, "Fn(t) = %0.4f [ N ]" , (float)Fn[i+1]);
    fLabelFNT->SetTitle(cValVar);
    sprintf(cValVar, "Fnx(t) = %0.4f [ N ]" , (float)Fnx[i+1]);
    fLabelFNXT->SetTitle(cValVar);
    sprintf(cValVar, "Fny(t) = %0.4f [ N ]" , (float)Fny[i+1]);
    fLabelFNYT->SetTitle(cValVar);
    sprintf(cValVar, "Ek(t) = %0.4f [ J ]" , (float)Ek[i+1]);
    fLabelEKT->SetTitle(cValVar);
    sprintf(cValVar, "Ep(t) = %0.4f [ J ]" , (float)Ep[i+1]);
    fLabelEPT->SetTitle(cValVar);
    sprintf(cValVar, "E(t) = %0.4f [ J ]" , (float)E[i+1]);
    fLabelET->SetTitle(cValVar);
    sprintf(cValVar, "delta_E(t) = %0.4f [ J ]" , (float)delta_E[i+1]);
    fLabelDELTA_ET->SetTitle(cValVar);
    sprintf(cValVar, "Angle(t) = %0.3f [ deg ]" , (float)Angle[i+1]);
    fLabelANGLE->SetTitle(cValVar);
    sprintf(cValVar, "Current time = %0.4f [ s ]" , (float)tt[i+1]);
    fLabelCT->SetTitle(cValVar);
    sprintf(cValVar, "Current STEP = %0.4f" , (float)(i+1));
    fLabelCS->SetTitle(cValVar);

    sprintf(cValVar, "Fe [ N ] = %0.4f" , (float)Fe);
    fLabelFE->SetTitle(cValVar);
    sprintf(cValVar, "mg [ N ] = %0.4f" , (float)(m*g));
    fLabelMG->SetTitle(cValVar);
    
    Int_t optXaxis = fComboBoxXAXIS->GetSelected();
    Int_t optYaxis = fComboBoxYAXIS->GetSelected();

    //Int_t optXaxis = 12;
    //Int_t optYaxis = 8; 

    switch(optXaxis){
    case 0:
      copy(tt, tt + (i+1), arr_gr_Xvars);
      sXaxis = new TString("Time [s]");
      break;
    case 1: copy(x, x + (i+1), arr_gr_Xvars);
      sXaxis = new TString("x [m]");
      break;
    case 2: copy(y, y + (i+1), arr_gr_Xvars);
      sXaxis = new TString("y [m]");
      break;
    case 3: copy(vx, vx + (i+1), arr_gr_Xvars);
      sXaxis = new TString("vx [m/s]");
      break;
    case 4: copy(vy, vy + (i+1), arr_gr_Xvars);
      sXaxis = new TString("vy [m/s]");
      break;
    case 5: copy(v, v + (i+1), arr_gr_Xvars);
      sXaxis = new TString("v [m/s]");
      break;
    case 6: copy(FDx, FDx + (i+1), arr_gr_Xvars);
      sXaxis = new TString("FDx [N]");
      break;
    case 7: copy(FDy, FDy + (i+1), arr_gr_Xvars);
      sXaxis = new TString("FDy [N]");
      break;
    case 8: copy(FD, FD + (i+1), arr_gr_Xvars);
      sXaxis = new TString("FD [N]");
      break;
    case 9: copy(Fnx, Fnx + (i+1), arr_gr_Xvars);
      sXaxis = new TString("Fnx [N]");
      break;
    case 10: copy(Fny, Fny + (i+1), arr_gr_Xvars);
      sXaxis = new TString("Fny [N]");
      break;
    case 11: copy(Fn, Fn + (i+1), arr_gr_Xvars);
      sXaxis = new TString("Fn [N]");
      break;
    case 12: copy(Ek, Ek + (i+1), arr_gr_Xvars);
      sXaxis = new TString("Ek [J]");
      break;
    case 13: copy(Ep, Ep + (i+1), arr_gr_Xvars);
      sXaxis = new TString("Ep [J]");
      break;
    case 14: copy(E, E + (i+1), arr_gr_Xvars);
      sXaxis = new TString("E [J]");
      break;
    case 15: copy(delta_E, delta_E + (i+1), arr_gr_Xvars);
      sXaxis = new TString("delta_E [J]");
      break;
    case 16: copy(Angle, Angle + (i+1), arr_gr_Xvars);
      sXaxis = new TString("Angle [deg]");
      break;
    }

    switch(optYaxis){
    case 0:
      copy(tt, tt + (i+1), arr_gr_Yvars);
      sYaxis = new TString("Time [s]");
      break;
    case 1: copy(x, x + (i+1), arr_gr_Yvars);
      sYaxis = new TString("x [m]");
      break;
    case 2: copy(y, y + (i+1), arr_gr_Yvars);
      sYaxis = new TString("y [m]");
      break;
    case 3: copy(vx, vx + (i+1), arr_gr_Yvars);
      sYaxis = new TString("vx [m/s]");
      break;
    case 4: copy(vy, vy + (i+1), arr_gr_Yvars);
      sYaxis = new TString("vy [m/s]");
      break;
    case 5: copy(v, v + (i+1), arr_gr_Yvars);
      sYaxis = new TString("v [m/s]");
      break;
    case 6: copy(FDx, FDx + (i+1), arr_gr_Yvars);
      sYaxis = new TString("FDx [N]");
      break;
    case 7: copy(FDy, FDy + (i+1), arr_gr_Yvars);
      sYaxis = new TString("FDy [N]");
      break;
    case 8: copy(FD, FD + (i+1), arr_gr_Yvars);
      sYaxis = new TString("FD [N]");
      break;
    case 9: copy(Fnx, Fnx + (i+1), arr_gr_Yvars);
      sYaxis = new TString("Fnx [N]");
      break;
    case 10: copy(Fny, Fny + (i+1), arr_gr_Yvars);
      sYaxis = new TString("Fny [N]");
      break;
    case 11: copy(Fn, Fn + (i+1), arr_gr_Yvars);
      sYaxis = new TString("Fn [N]");
      break;
    case 12: copy(Ek, Ek + (i+1), arr_gr_Yvars);
      sYaxis = new TString("Ek [J]");
      break;
    case 13: copy(Ep, Ep + (i+1), arr_gr_Yvars);
      sYaxis = new TString("Ep [J]");
      break;
    case 14: copy(E, E + (i+1), arr_gr_Yvars);
      sYaxis = new TString("E [J]");
      break;
    case 15: copy(delta_E, delta_E + (i+1), arr_gr_Yvars);
      sYaxis = new TString("delta_E [J]");
      break;
    case 16: copy(Angle, Angle + (i+1), arr_gr_Yvars);
      sXaxis = new TString("Angle [deg]");
      break;
    }

    //    cout << x[i+1] << " " << arr_gr_Xvars[i+1] << " "<< y[i+1]  << "" << arr_gr_Yvars[i+1] << endl;
    cout << i << " " << *sXaxis << " " << arr_gr_Xvars[i] << " " << arr_gr_Yvars[i] << " " <<  *sYaxis << endl;
    //cout << Fn[0] << " " << *sXaxis << " " << arr_gr_Xvars[0] << " " << arr_gr_Yvars[0] << " " <<  *sYaxis << endl;

    int aaa;
      //cin >> aaa;
    
    Double_t arrXmax=*max_element(x,x+i);
    Double_t arrXmin=*min_element(x,x+i);
    Double_t arrYmax=*max_element(y,y+i);
    Double_t arrYmin=*min_element(y,y+i);
    Double_t normVec = TMath::Abs(arrYmax-arrYmin);
    Double_t offSetText = 1.05;
    
    if(i>1){
    gr_pm = new TGraph(i+1, x, y);
    TString title_XY("Dragged motion;x [m];y [m]");
    gr_pm->SetTitle(title_XY);
    gr_pm->SetLineWidth(6);
    gr_pm->SetLineColor(37);
    gr_pm->SetLineStyle(6);

    gr_vars = new TGraph(i, arr_gr_Xvars, arr_gr_Yvars);
    TString title_vars(";");
    title_vars.Append(*sXaxis);
    title_vars.Append(";");
    title_vars.Append(*sYaxis);
    gr_vars->SetTitle(title_vars);

    if(vx[0] != 0){
      if(i == 0){
	gr_pm->GetXaxis()->SetLimits(x[0]-vx[0]*100*dt, x[0] + vx[0]*100*dt);
	gr_pm->GetYaxis()->SetRangeUser(y[0]-vy[0]*100*dt, y[0] + vy[0]*100*dt);
      }
      else{
	gr_pm->GetXaxis()->SetLimits(arrXmin - TMath::Abs(arrXmax-arrXmin)/2, arrXmax + TMath::Abs(arrXmax-arrXmin)/2);
	gr_pm->GetYaxis()->SetRangeUser(arrYmin - TMath::Abs(arrYmax-arrYmin), arrYmax + TMath::Abs(arrYmax-arrYmin));
      }
    }
    else{
      if(i == 0){
	gr_pm->GetXaxis()->SetLimits(x[0]-0.1, x[0] + 0.1);
	gr_pm->GetYaxis()->SetRangeUser(y[0]-vy[0]*100*dt, y[0] + vy[0]*100*dt);
      }
      else{
	gr_pm->GetXaxis()->SetLimits(arrXmin - 0.1, arrXmax + 0.1);
	gr_pm->GetYaxis()->SetRangeUser(arrYmin - TMath::Abs(arrYmax-arrYmin), arrYmax + TMath::Abs(arrYmax-arrYmin));
      }
    }
    TLatex *posIni = new TLatex(x[0], y[0], "(x_{0}, y_{0})");
    posIni->SetTextAlign(22);
    posIni->SetTextSize(0.06);

    mBody = new TMarker();
    mBody->SetMarkerStyle(40);
    mBody->SetMarkerSize(3);
    mBody->SetMarkerColor(kBlue);
    mBody_vars = new TMarker();
    mBody_vars->SetMarkerStyle(40);
    mBody_vars->SetMarkerSize(4);
    mBody_vars->SetMarkerColor(kBlue);
    
    TLatex *tmg = new TLatex(x[i]*offSetText, y[i]-normVec*0.57, "#color[9]{#hat{mg}}");
    tmg->SetTextAlign(22);
    tmg->SetTextSize(0.05);
    arrow_mg  = new TArrow();
    arrow_mg->SetLineColor(9);
    arrow_mg->SetLineWidth(6);
    arrow_mg->SetAngle(60);
    
    TLatex *tFe = new TLatex(x[i]*offSetText, y[i]+normVec*0.57, "#color[46]{#hat{Fe}}");
    tFe->SetTextAlign(22);
    tFe->SetTextSize(0.05);
    arrow_Fe  = new TArrow();
    arrow_Fe->SetLineColor(46);
    arrow_Fe->SetLineWidth(6);
    arrow_Fe->SetAngle(60);

    if(c!=0.0){
    tFDx = new TLatex(x[i] + FDx[i]/FD[i]*normVec*0.5, y[i]*offSetText,"#color[14]{#hat{FDx}}");
    tFDx->SetTextAlign(22);
    tFDx->SetTextSize(0.03);
    arrow_FDx  = new TArrow();
    arrow_FDx->SetLineColor(14);
    arrow_FDx->SetLineWidth(2);
    arrow_FDx->SetAngle(60);
    
    tFDy = new TLatex(x[i]*offSetText, y[i] + FDy[i]/FD[i]*normVec*0.5,"#color[14]{#hat{FDy}}");
    tFDy->SetTextAlign(22);
    tFDy->SetTextSize(0.03);
    arrow_FDy  = new TArrow();
    arrow_FDy->SetLineColor(14);
    arrow_FDy->SetLineWidth(2);
    arrow_FDy->SetAngle(60);

    tFD = new TLatex(x[i] + FDx[i]/FD[i]*normVec*0.45, y[i] + FDy[i]/FD[i]*normVec*0.5, "#color[12]{#hat{FD}}");
    tFD->SetTextAlign(22);
    tFD->SetTextSize(0.05);
    arrow_FD  = new TArrow();
    arrow_FD->SetLineColor(12);
    arrow_FD->SetLineWidth(3);
    arrow_FD->SetAngle(60);
    }//if(c!=0)

    TLatex *tFnx = new TLatex(x[i] + Fnx[i]/Fn[i]*normVec*0.5, y[i]*offSetText,"#color[800]{#hat{Fnx}}");
    tFnx->SetTextAlign(22);
    tFnx->SetTextSize(0.03);
    arrow_Fnx  = new TArrow();
    arrow_Fnx->SetLineColor(800);
    arrow_Fnx->SetLineWidth(2);
    arrow_Fnx->SetAngle(60);
    
    TLatex *tFny = new TLatex(x[i]*offSetText, y[i] + Fny[i]/Fn[i]*normVec*0.5,"#color[800]{#hat{Fny}}");
    tFny->SetTextAlign(22);
    tFny->SetTextSize(0.03);
    arrow_Fny  = new TArrow();
    arrow_Fny->SetLineColor(800);
    arrow_Fny->SetLineWidth(2);
    arrow_Fny->SetAngle(60);

    TLatex *tFn = new TLatex(x[i] + Fnx[i]/Fn[i]*normVec*0.5, y[i] + Fny[i]/Fn[i]*normVec*0.5,
			     "#color[800]{#hat{Fn}}");
    tFn->SetTextAlign(22);
    tFn->SetTextSize(0.05);
    arrow_Fn  = new TArrow();
    arrow_Fn->SetLineColor(800);
    arrow_Fn->SetLineWidth(3);
    arrow_Fn->SetAngle(60);
    
    TLatex *tvx = new TLatex(x[i] + vx[i]/v[i]*normVec*0.5, y[i]*offSetText,"#color[30]{#hat{vx}}");
    tvx->SetTextAlign(22);
    tvx->SetTextSize(0.03);
    arrow_vx  = new TArrow();
    arrow_vx->SetLineColor(30);
    arrow_vx->SetLineWidth(2);
    arrow_vx->SetAngle(60);
    
    TLatex *tvy = new TLatex(x[i]*offSetText, y[i] + vy[i]/v[i]*normVec*0.5,"#color[30]{#hat{vy}}");
    tvy->SetTextAlign(22);
    tvy->SetTextSize(0.03);
    arrow_vy  = new TArrow();
    arrow_vy->SetLineColor(30);
    arrow_vy->SetLineWidth(2);
    arrow_vy->SetAngle(60);

    TLatex *tv = new TLatex(x[i] + vx[i]/v[i]*normVec*0.5, y[i] + vy[i]/v[i]*normVec*0.5,
			     "#color[8]{#hat{v}}");
    tv->SetTextAlign(22);
    tv->SetTextSize(0.05);
    arrow_v  = new TArrow();
    arrow_v->SetLineColor(8);
    arrow_v->SetLineWidth(3);
    arrow_v->SetAngle(60);

    fCanvas->cd(1)->SetGrid();
    gr_pm->Draw("AC");
    mBody->DrawMarker(x[i], y[i]);
    posIni->Draw("same");

    if(optMg == 1){
      arrow_mg->DrawArrow(x[i], y[i], x[i], y[i]-normVec*0.5, 0.015, ">");
      tmg->Draw("same");
    }
    if(optFe == 1){
      arrow_Fe->DrawArrow(x[i], y[i], x[i], y[i]+normVec*0.5, 0.015, ">");
      tFe->Draw("same");
    }

    if(optFD == 1){
      if(c!=0.0){
	arrow_FDx->DrawArrow(x[i], y[i], x[i] + FDx[i]/FD[i]*normVec*0.5, y[i], 0.015, ">");
	arrow_FDy->DrawArrow(x[i], y[i], x[i], y[i] + FDy[i]/FD[i]*normVec*0.5, 0.015, ">");
	arrow_FD ->DrawArrow(x[i], y[i], x[i] + FDx[i]/FD[i]*normVec*0.5, y[i] + FDy[i]/FD[i]*normVec*0.5, 0.015, ">");
	tFDx->Draw("same");
	tFDy->Draw("same");
	tFD->Draw("same");
      }
    }
    if(optFn == 1){
	arrow_Fnx->DrawArrow(x[i], y[i], x[i] + Fnx[i]/Fn[i]*normVec*0.5, y[i], 0.015, ">");
	arrow_Fny->DrawArrow(x[i], y[i], x[i], y[i] + Fny[i]/Fn[i]*normVec*0.5, 0.015, ">");
	arrow_Fn ->DrawArrow(x[i], y[i], x[i] + Fnx[i]/Fn[i]*normVec*0.5, y[i] + Fny[i]/Fn[i]*normVec*0.5, 0.015, ">");
	tFnx->Draw("same");
	tFny->Draw("same");
	tFn->Draw("same");
    }
    
    if(optV == 1){
      arrow_vx->DrawArrow(x[i], y[i], x[i] + vx[i]/v[i]*normVec*0.5, y[i], 0.015, ">");
      arrow_vy->DrawArrow(x[i], y[i], x[i], y[i] + vy[i]/v[i]*normVec*0.5, 0.015, ">");
      arrow_v ->DrawArrow(x[i], y[i], x[i] + vx[i]/v[i]*normVec*0.5, y[i] + vy[i]/v[i]*normVec*0.5, 0.015, ">");
      tvx->Draw("same");
      tvy->Draw("same");
      tv->Draw("same");
    }
    
    fCanvas->cd(2)->SetGrid();
    gr_vars->Draw("AP*");
    mBody_vars->DrawMarker(arr_gr_Xvars[i-1], arr_gr_Yvars[i-1]);
    
    fCanvas->Update();
    fCanvas->Modified();
    
    usleep(ms*500);
    while(optBreak==1){
      gSystem->ProcessEvents();
      fTextButtonCLEAR->SetState(kButtonUp, kTRUE);
      fTextButtonCLEAR-> Connect("Clicked()", "TCanvas", fCanvas, "Clear()");
      fTextButtonCLEAR-> Connect("Clicked()", "TCanvas", fCanvas, "Update()");
      fTextButtonCLEAR->Connect("Clicked()", "MyMainFrame", this, "DoClear()");
    }
    if(i==nstep-3){
      fTextButtonDRAW->TGTextButton::SetState(kButtonUp, kTRUE);
      fTextButtonSTOP->SetText("Stop");
      fTextButtonSTOP->SetState(kButtonDisabled, kTRUE);
      fTextButtonCLEAR->SetState(kButtonUp, kTRUE);
      fTextButtonCLEAR-> Connect("Clicked()", "TCanvas", fCanvas, "Clear()");
      fTextButtonCLEAR-> Connect("Clicked()", "TCanvas", fCanvas, "Update()");

    }
    
    if(i<nstep-2){
      delete gr_pm;
      delete gr_vars;
      

    }
    }//if(i>1)    
  }
}//DoDraw

MyMainFrame::~MyMainFrame() {
  delete fMainFrameSEEDPM;
}

void seedpm_v1() {
   // Popup the GUI...
   new MyMainFrame(gClient->GetRoot(),200,200);
}
int main(int argc, char **argv) {
  TApplication theApp("App",&argc,argv);
  seedpm_v1();
  theApp.Run();
  return 0;
}
