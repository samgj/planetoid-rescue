//Source code for Planetoid Rescue from Unincorporated Games

///////////////////////////////////////
//Copyright 2012 Unincorporated Media//
///////////////////////////////////////

//This file is part of Planetoid Rescue.

//Planetoid Rescue is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//Planetoid Rescue is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

//You should have received a copy of the GNU General Public License
//along with Planetoid Rescue.  If not, see <http://www.gnu.org/licenses/>.


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

 void objectcollide(void)
 {
  //This function is used when two objects collide

  if( distance(loc[], object.loc[]) <= radius + object.radius ) //if the two objects are with in each other's radius
  {

   if( explodes == true ) //if this object can explode
   {

    intel = none; //explosions can't think

    model = "models/explode.obj"; //set it to the explosion model

    scale = [explodesize, explodesize, explodesize]; //make it the size of the objects explode radius

    explodes = false; //explosions can't explode

    //delete object after 10 seconds

   }

   if( object.explodes == true ) //if the other object can explode
   {

    object.intel = none;

    object.model = "model/explode.obj";

    object.scale = [object.explodesize, object.explodesize, object.explodesize]

    object.explodes = false;

    //delete object after 10 seconds

   }
  }
 }
};

