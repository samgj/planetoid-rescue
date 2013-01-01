//Source code for Planetoid Rescue from Unincorporated Games

//Copyright 2012 Unincorporated Media

//This file is part of Planetoid Rescue

//Planetoid Rescue if free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//Planetoid Rescue is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PATICULAR PURPOSE. See the
//GNU General Public License for more details.

//You should have recieved a copy of the GNU General Public License
//along with Planetoid Rescue. If not see <http://www.gnu.org/licenses/>.

#include <math.h>

float distance( float a[3], float b[3] ) //use the loc arrays for objects
{

//This is the 3D distance formula that is used for explosions
//  _____________________________
// /(X2-X1)^2+(Y2-Y1)^2+(Z2-Z1)^2

 return sqrt( pow( (b[0]-a[0]), 2) + pow( (b[1]-a[1]), 2) + pow( (b[2]-a[2]), 2))

}

