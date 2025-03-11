###########################################################################
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

#! /bin/bash

#This script install EDPMSoftEdu software

sep="/"
sus="_"
sdot="."
deskEXT="desktop"
cont=0

cd
homeDIR=$(pwd)
echo "Home folder: $homeDIR/"
echo " "

_ROOT="root.exe"
#_ROOT="rooot.exe"

Black='\033[0;30m'        # Black
Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
Yellow='\033[0;33m'       # Yellow
Blue='\033[0;34m'         # Blue
Purple='\033[0;35m'       # Purple
Cyan='\033[0;36m'         # Cyan
White='\033[0;37m'        # White
Color_Off='\033[0m'       # Text Reset
Bg_red='\033[0;41m'

echo "Verifying dependencies ..."
odeintDIR="/usr/include/boost/numeric/odeint"

#if /sbin/ldconfig -p | grep libboost > /dev/null ;
if [ -d $odeintDIR ];
then
    if [ $(ls -1 $odeintDIR | wc -l) -gt 0 ];
    then
	echo -e "Odeint Boost library found !!  ${Green}\u2714 \u2714 ${Color_Off} "
	echo "Number of file in $odeintDIR : $(ls -1 $odeintDIR | wc -l)"
	echo "Note: It will be necessary for g++ compilation"
	echo "      #include <boost/numeric/odeint.hpp> // odeint function definitions"
    else
	echo -e "\u274c Please install boost library:"
	echo "sudo apt-get install libboost-all-dev"
	echo "Visit: https://www.boost.org/"
	warnInfoLIB1=$(echo " "
		      echo -e "\u274c libboost NOT found"
		      echo "sudo apt-get install libboost-all-dev"
		      echo "Visit: https://www.boost.org/"
		      echo " ")
	zenity --info --text="$warnInfoLIB1" --ok-label="Exit install"
	echo "bye"
	sleep 1
	exit 1
    fi
else
    echo -e "\u274c libboost NOT found"
    echo "Please install boost library:"
    echo "sudo apt-get install libboost-all-dev"
    echo "Visit: https://www.boost.org/"
    warnInfoLIB2=$(echo " "
		   echo -e "\u274c libboost NOT found"
		   echo "sudo apt-get install libboost-all-dev"
		   echo "Visit: https://www.boost.org/"
		   echo " ")
    zenity --info --text="$warnInfoLIB2" --ok-label="Exit install"
    echo "bye"
    sleep 1
    exit 1
fi

    
if command -v $_ROOT > /dev/null ;
then
    echo -e "ROOT System-wide install found it! ${Green}\u2714 \u2714 ${Color_Off}"
    $_ROOT --version
    let "cont = 1"
    pathROOTEXE="$_ROOT"
    pathROOTCLING="rootcling"
    pathROOTCONFIG="root-config"
else
    echo "NO ROOT system-wide install found."
    echo "---> Looking for user's ROOT install at $homeDIR..."
    check=$(find $homeDIR/ -iname $_ROOT | cat | wc -l)
    if [ $check -ne 0 ];
    then
	echo " "
	echo -e "User's ROOT install found it!!${Green}\u2714 \u2714 ${Color_Off} $_ROOT at:"
	find $homeDIR/ -iname $_ROOT
	echo " "
	pathROOTEXE=$(find $homeDIR/ -iname $_ROOT)
	pathROOTCLING=$(find $homeDIR/ -iname rootcling)
	pathROOTCONFIG=$(find $homeDIR/ -iname root-config)
	let "cont = 2"
    else
	echo " "
	echo -e "${Red} \u274c ${Color_Off} ${Blue}$_ROOT${Color_Off} command ${Bg_red}NOT${Color_Off} found"
	echo " Please install ROOT-CERN "
	echo " https://root.cern/install/"
	echo " We recommend install precompiled version. Go to 'Download a pre-compiled binary distribution' section for further info."
	echo " "
	warnInfo=$(echo " "
		   echo -e "\u274c $_ROOT$ NOT$ found"
		   echo " Please install ROOT-CERN "
		   echo " https://root.cern/install/"
		   echo " We recommend install precompiled version. Go to 'Download a pre-compiled binary distribution' section for further info."
		   echo " ")
	zenity --info --text="$warnInfo" --ok-label="Exit install"
	echo "bye"
	sleep 1
	exit 1
    fi
fi

if [ $cont -eq 1 ]; then
    infoINS1=$(
	echo "ROOT System install found it!"
	echo "Please click CONTINUE to select EDPMSoftEdu Installation Folder"
	echo " "
	command -v $_ROOT
	$pathROOTEXE -q
	echo "Executables found: "
	echo "rootcling, root-config:"
	echo "$pathROOTCLING"
	echo "$pathROOTCONFIG"
	echo " ")
    echo "$infoINS1" | (zenity --text-info --title="EDPM SoftEdu install" --width=800 --height=400 --ok-label='CONTINUE' --cancel-label='Exit install')
    if [ $? -eq 1 ]; then
	echo "Exit"
	exit 2
    fi   
else
    infoINS2=$(echo "Please click CONTINUE to select installation folder"
	       echo " "
	       echo "Info $_ROOT:"
	       echo "NO ROOT system-wide install found."
	       echo "---> Looking for user's ROOT install at $homeDIR..."
	       echo "User's ROOT install found it!!. $_ROOT at:"
	       echo "$pathROOTEXE"
	       $pathROOTEXE -q
	       echo "rootcling, root-config:"
	       echo "$pathROOTCLING"
	       echo "$pathROOTCONFIG"
	       echo "Please click CONTINUE to select installation folder"
	    )
    echo "$infoINS2" | (zenity --text-info --title="EDPM SoftEdu install" --width=800 --height=400 --ok-label='CONTINUE' --cancel-label='Exit install')
    if [ $? -eq 1 ]; then
	echo "Exit"
	exit 2
    fi   

fi

dirPATH=$(zenity --file-selection   --directory --title="EDPM SoftEdu install Choose a Installation Folder" --width=800 --height=400 )

(zenity --info --text="Please click CONTINUE to select Desktop Folder" --title="EDPM SoftEdu install choose Desktop Folder" --ok-label='CONTINUE' --width=800 --height=400 )

dirDESK=$(zenity --file-selection   --directory --title="EDPM SoftEdu install choose a Desktop Folder" --width=800 --height=400)

tarFILE="EDPMSoftEdu_v1.tar"
pwd
echo "Installation folder: $dirPATH"
echo "Path to Desktop folder: $dirDESK"
echo "Downloading EDPM source files: ... "
echo "wget https://github.com/fisinforgh/edpm/raw/refs/heads/main/$tarFILE -P $dirPATH"
echo "Wait..."
(wget -O $dirPATH/$tarFILE https://github.com/fisinforgh/edpm/raw/refs/heads/main/$tarFILE) | zenity --progress --width=800 --height=400 --auto-close \
										     --title="EDPMSoftEdu_1.0 Install" \
										     --text="Downloading EDPMSofEdu... Please wait ..." \
										     --percentage=10
echo " "

if [ -f $dirPATH/$tarFILE ];
then
    (echo "Please click CONTINUE to install EDPMSoftEdu"
    echo "$tarFILE successfully downloaded!!") | (zenity --text-info --width=800 --height=400  --title="EDPM SoftEdu install" \
						       --ok-label='CONTINUE' --cancel-label='Exit install')
    if [ $? -eq 1 ]; then
	echo "Exit"
	exit 2
    fi    
else
    (echo "wget FAILED. It may possible web page not available"
     echo "Please check your internet connection and try it again"
    ) | (zenity --info --text="$warnInfo" --ok-label="Exit install")
    if [ $? -eq 1 ]; then
	echo "Exit"
	exit 2
    fi
fi


nameDIR="EDPMSoftEdu_v1"
FILE="SEEDPM_v1"

cd $dirPATH
tar xfv $tarFILE
cd $nameDIR

if [ -f "$FILE" ]; then
    rm $FILE
    ($pathROOTCLING -f SEEDPMDict_v1.cxx -c SEEDPM_v1.h SEEDPMLinkDef_v1.h
     g++ -o SEEDPM_v1 SEEDPM_v1.cxx  SEEDPMDict_v1.cxx `$pathROOTCONFIG --cflags --glibs`) | zenity --progress --width=800 --height=400 --auto-close \
												    --title="EDPMSofEdu_1.0 Install" \
												    --text="Compiling EDPM SoftEdu_1.0 software" \
												    --percentage=10
else
    ($pathROOTCLING -f SEEDPMDict_v1.cxx -c SEEDPM_v1.h SEEDPMLinkDef_v1.h
     g++ -o SEEDPM_v1 SEEDPM_v1.cxx  SEEDPMDict_v1.cxx `$pathROOTCONFIG --cflags --glibs`) | zenity --progress --width=800 --height=400 --auto-close \
												    --title="EDPMSofEdu_1.0 Install" \
												    --text="Compiling EDPM SofEdu_1.0 software" \
												    --percentage=10
fi


if [ -f "$FILE" ]; then
    echo "Executable compilation complete"
    (zenity --info --text="EDPMSoftEdu_1.0 executable compilation complete $FILE. \nPlease click CONTINUE to setup EDPM executable globally and  desktop icon "\
	    --title="EDPM SoftEdu install" --ok-label='CONTINUE' --width=800 --height=400 )
else 
    echo "Something went WRONG. Please check requirements"
    echo "and try again"
    (zenity --info --text="Please check g++ compiler and try it again "\
	    --title="EDPM SoftEdu install ERROR" --ok-label='Exit install' --width=800 --height=400 )
    if [ $? -eq 0 ]; then
	echo "Exit"
	exit 2
    fi
fi

# Creating hidden path file..."

echo " "
echo "$dirPATH/$nameDIR" > ~/.pathDIR_$nameDIR.txt

if [ -f $homeDIR/.bash_aliases ]; then
    sed -i "/$nameDIR/d" $homeDIR/.bash_aliases
    echo "# $nameDIR globally available executable " >> $homeDIR/.bash_aliases
    echo "export PATH=\"$dirPATH/$nameDIR:\$PATH\"" >> $homeDIR/.bash_aliases
else
    echo "# $nameDIR globally available executable " >> $homeDIR/.bash_aliases
    echo "export PATH=\"$dirPATH/$nameDIR:\$PATH\"" >> $homeDIR/.bash_aliases
fi

deskFILE=$dirPATH/$nameDIR/$nameDIR$sdot$deskEXT

echo "Configuring desktop file..."

echo "$deskFILE"

echo "[Desktop Entry]" > "$deskFILE"
echo "Version=1.0" >> "$deskFILE"
echo "Type=Application" >> "$deskFILE"
echo "Exec=$dirPATH/$nameDIR/$FILE" >> "$deskFILE"
echo "Icon=$dirPATH/$nameDIR/icons/logoEDPM.png" >> "$deskFILE"
echo "Terminal=false" >> "$deskFILE"
echo "Name=$nameDIR" >> "$deskFILE"
echo "Comment=An object-oriented data analysis framework">> "$deskFILE"
echo "MimeType=application/x-root;text/x-c++src;">> "$deskFILE"
echo "Categories=Science;">> "$deskFILE"

echo "Desktop file: ... "
cat $deskFILE
dirSRCDESK="desktop_file"
infoDESK_FILE=$(echo "Globally executable completed, hidden bash file:"
		echo "$homeDIR/.bash_aliases"
		echo "# EDPMSoftEdu globally available executable "
		echo "export PATH=\"$dirPATH/$nameDIR:\$PATH\""
		echo "\n Desktop file configuration success: \n"; cat $deskFILE ; echo "\n EDPMSofEdu Installation COMPLETED!! \n Please close and enjoy!!")

cp $deskFILE $dirDESK
mv $deskFILE $dirPATH/$nameDIR/$dirSRCDESK

(zenity --info --text="$infoDESK_FILE" --width=800 --height=400  --ok-label='Close' )
echo "Installation COMPLETED!!!"
#(zenity --info --text="INSTALL COMPLETED !!! Please close window "\
#	    --title="EDPM SoftEdu install" --ok-label='Close' --width=800 --height=400  )
exit 0



