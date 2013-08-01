//Source code for Planetoid Rescue from Unincorporated Games

//Copyright 2013 Unincorporated Media

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

class button
{
 vec2 loc;

 void action(void)

 void WaitForClick(
			event.type == SDL_MouseButtonUP &
			loc(0) - 250 < event.x < loc(0) + 250 &
			loc(1) - 50 < event.y < loc(1) + 50 &
			event.button == SDL_BUTTON_LEFT
			)
  {
   action();
  }
 }

 char label[];

 void draw(void)
 {
  //This is where the drawing code goes
 }
}
