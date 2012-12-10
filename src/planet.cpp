//Source code for Planetoid Rescue from Unincorporated Games

#include <stdio.h>

///////////////////////////////////////
//Copyright 2012 Unincorporated Media//
///////////////////////////////////////
//
//
//
///////////////////////////////////////

class ai
{
//This class contains the Artificial Intelegence for enemies.
//The player ship also technically has AI.
//The agent behaves as specified in the function act

 public:

  void act();

};

class weapon
{
//This class contains the information for weapons.
//The weapon is fired when fire is called
 public:

  void fire();

};

class object
{
//This class contains data for objects.
//Objects are defined in seperate files.

 public:

  float loc[3]; //The X, Y, and Z location of the object.

  float rot[3]; //The X, Y, and Z rotation of the object.

  float radius; //The radius for the object's collision with others.

  bool explodes; //Whether of not this object expodes when crashed.

  char model[]; //The file path of the object's model.

  weapon weapon1, weapon2; //The objects weapon.

  float expoldesize; //The radius of the exposion.

  float cameraloc[3]; //This is the location of the camera relative to the object. This is for playable ships only.

  float camerarot[3]; //This is the rotation of the camera relative to the object.

  float scale[3]; //The X, Y, and Z scale of the model.

  int team; //The team of the object.

//List of teams
//
//0: Powerup
//1: Player
//2: Enemy
//3: Red
//4: Orange
//5: Yellow
//6: Green
//7: Blue
//9: Purple

  ai intel; //The AI of the object. Use player for PCs

};

int main(void)
{

 printf("Planetoid Rescue Copyright 2012 Unincorporated Media\n");

 return 0;

}
