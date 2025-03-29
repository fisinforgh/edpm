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
#include <TQObject.h>
#include <RQ_OBJECT.h>

class TGWindow;
class TGMainFrame;
class TRootEmbeddedCanvas;
class TGNumberEntry;
class TGCheckButton;
class TGTextButton;
class TGLabel;
class TGComboBox;

class MyMainFrame {
  RQ_OBJECT("MyMainFrame")
  private:
  TGMainFrame *fMainFrameSEEDPM;
  TRootEmbeddedCanvas *fECanvas;

  TGNumberEntry *fNumberEntryM;
  TGNumberEntry *fNumberEntryAR;
  TGNumberEntry *fNumberEntryTI;
  TGNumberEntry *fNumberEntryTS;
  
  TGNumberEntry *fNumberEntryX0;
  TGNumberEntry *fNumberEntryY0;
  TGNumberEntry *fNumberEntryVX0;
  TGNumberEntry *fNumberEntryVY0;
  TGNumberEntry *fNumberEntryG;
  TGNumberEntry *fNumberEntryRHO;
  TGNumberEntry *fNumberEntryDC;
  TGNumberEntry *fNumberEntryVD;

  TGComboBox *fComboBoxYAXIS;
  TGComboBox *fComboBoxXAXIS;

  TGLabel *fLabelXT;
  TGLabel *fLabelYT;
  TGLabel *fLabelVT;
  TGLabel *fLabelVXT;
  TGLabel *fLabelVYT;
  TGLabel *fLabelFDT;
  TGLabel *fLabelFDXT;
  TGLabel *fLabelFDYT;
   TGLabel *fLabelFNT;
  TGLabel *fLabelFNXT;
  TGLabel *fLabelFNYT;
  TGLabel *fLabelEPT;
  TGLabel *fLabelEKT;
  TGLabel *fLabelET;
  TGLabel *fLabelDELTA_ET;
  TGLabel *fLabelANGLE;
  TGLabel *fLabelCT;
  TGLabel *fLabelCS; 
  TGLabel *fLabelFE;
  TGLabel *fLabelMG; 

  TGCheckButton *fCheckButtonMG;
  TGCheckButton *fCheckButtonFE;
  TGCheckButton *fCheckButtonFD;
  TGCheckButton *fCheckButtonFN;
  TGCheckButton *fCheckButtonV;

  TGTextButton *fTextButtonDRAW;
  TGTextButton *fTextButtonSTOP;
  TGTextButton *fTextButtonCLEAR;  
  TGTextButton *fTextButtonEXIT;  
  TGTextButton *fTextButtonHELP;
  
  // stop button behavior
  Int_t               optBreak=0;
  //path to icons
  TString pathDIR_ICONS;
  public:
  MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h);
  virtual ~MyMainFrame();

  void DoDraw();
  void DoStop();
  void DoClear();
  void DoHelp();
  
};
