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
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <boost/numeric/odeint.hpp> // odeint function definitions

using namespace std;
using namespace boost::numeric::odeint;

// 4 is because we have 4 equations
typedef std::array<double,4> state_type;

struct ppositionXY
{
  double px_m, px_c, px_rho, px_A, px_Vd, px_g;
  
ppositionXY(double m, double c, double rho, double A, double Vd, double g)
  : px_m(m),px_c(c),px_rho(rho),px_A(A),px_Vd(Vd),px_g(g) { }
  
  void operator()(const state_type &x, state_type &dxdt, double t) const
  {
    dxdt[0] = x[1];
    dxdt[1] = -(1/px_m)*px_c*px_rho*px_A*x[1]*sqrt(x[1]*x[1] + x[3]*x[3]);
    dxdt[2] = x[3];
    dxdt[3] = -(1/px_m)*px_c*px_rho*px_A*x[3]*sqrt(x[1]*x[1] + x[3]*x[3]) + px_rho*px_g*px_Vd/px_m - px_g;
  }
};
