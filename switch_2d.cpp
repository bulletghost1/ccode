//swtich_2d.cpp
#include <iostream>
#include <cmath>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		char ac = '*';
		char bc = '#';
		char cc = ' ';
		char dc = '|';
		char thechar = ' ';
		char lst = ('*','<','>');
		
		int val = 0;
		int m[8][8] = {
			{3,0,3,0,3,0,3,0} ,
			{0,0,0,0,0,0,0,3} ,
			{3,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,3} ,
			{3,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,3} ,
			{3,0,0,0,0,0,0,0},
			{0,3,0,3,0,3,0,3}
		};

		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
			  val = m[r][c];
			  // switch
			  switch (val);
			  case 1:
				word = "|||";
				break
				case 2: 
				word = "...";
				break
				case 3:
				word = ",,,";
				break
				case 4:
				word = "***";
				break
				default:
				word = ";;;";
				break
			}
			//end switch
			cout<<thechar;
		}
		cout<<endl;
	}
	return 0;
}
