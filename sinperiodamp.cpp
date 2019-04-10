// g+ sinperiodamp.ccp -o sinperiodamp.o
#include <iostream>
#include <cmath>
using namespace std;

double r4(double var)
// r4 ruounds a decimal to 4 decimals
{ double value;
	if (var < 0){
		value = (int)(var * 1000 - 0.00005);
      }
  else{
		value = (int)(var * 1000 + 0.00005);
	}
   return (double)value / 1000;
}

int main(){
double PI=3.14159265;
double a,p,t, rad,sr,aspr;
//t(theta) rad(radian) sr(sine result)
//aspr (amplitued * sine (period*t))
	cout<<"\nInput an amplitued: ";
	cin>>a;
	cout<<"\nInput a period : ";
	cin>>p;
	cout <<"\ntheta\tsin(t)\ta*sin(pt) \n";
	for ( t=0 ; t=360 ; t = t+15 ){
	  rad = t * (PI / 180);
	  sr= sinl(rad);
	  aspr = a*sin(p*rad);
	  cout<<t<<"\t"<<r4(sr)<<"\t\t"<<r4(aspr)<<"\n";
	 }
	 return 0;
   }
