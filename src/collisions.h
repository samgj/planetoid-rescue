#include <SDL.h>

float distance( float a[3], float b[3] ) //use the loc arrays for objects
{

//This is the 3D distance formula that is used for explosions
//  _____________________________
// /(X2-X1)^2+(Y2-Y1)^2+(Z2-Z1)^2

 return sqrt( pow( (b[0]-a[0]), 2) + pow( (b[1]-a[1]), 2) + pow( (b[2]-a[2]), 2))

}

