// jb 8x8
#include <iostream>
#include <stdio.h>
int jb (); //define int jb(); function

int main()
{
	jb();//call jb function
	return 0;
}
// start of jb() function
int jb(){
	int r,c;//row and column
	int red, green, blue;
	int val = 0;
	int m[8][8] = {
		{0,1,1,3,3,1,1,0} ,
		{0,1,1,3,3,1,1,0} ,
		{0,1,1,3,3,1,1,0} ,
		{2,2,2,3,3,2,2,2} , 
		{2,2,2,3,3,2,2,2} ,
		{0,1,1,3,3,1,1,0} ,
		{0,1,1,3,3,1,1,0},
		{0,1,1,3,3,1,1,0} 
      };
      
		red = 0; green = 0; blue = 0;
		for ( r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
				val = m[r][c];
				switch (val){
					case 0:
						red = 0; green = 0; blue = 0;
						break;
					case 1: //Pink
						red = 255; green = 156; blue = 221;
						break;
					case 2: //Purple
						red = 160; green = 0; blue = 216;
						break;
					case 3: 
						red = 23; green = 73; blue = 75;
						break;
					  default: //bluegreen
						red = 255; green = 255; blue = 0;
						break; 
					}// end select
					 //output the colors
					 std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
					}// end c
					 std::cout<<"\n";
				}//end r 
			return 0;
	}//end jb() function
					
