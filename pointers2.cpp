//jb pointers2.cpp

#include <iostream>
using namespace std;

int main(){
	//int one = 1111 , two = 2222;
	int one,two;
	cout<<"one is "<<one<<" "<<&one<<" \n";
	cout<<"two is "<<two<<" "<<&two<<" \n";
	int * p1, * p2;
	p1 = &one;
	p2 = &two;
	*p1 = 1010;
		cout<<"pointer values * "<<*p1<<" "<<*p2<<"\n";
	*p2 = *p1;
		cout<<"pointer values ** "<<*p1<<" "<<*p2<<"\n";
	p1 = p2;
		cout<<"pointer values *** "<<*p1<<" "<<*p2<<"\n";
	*p2 = 2020;
		cout<<"pointer values **** "<<*p1<<" "<<*p2<<"\n";
	cout<<"one is "<<one <<" "<< &one<<" \n";
	cout<<"two is "<<two <<" "<< &two<<" \n";
	cout<<"one two locations "<<&one<<" "<<&two<<" \n";
	cout<<"pointer values "<<*p1<<" "<<*p2<<"\n";
	cout<<"pointer locations "<<&p1<<" "<<&p2<<"\n";
	return 0;
}
