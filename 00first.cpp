#include <iostream>
#include <cstdint> // now we can use data type portable
using namespace std;

int x=0; // this is global variable nd its initialized to binary 0
int main(){

	cout<<"hello";
	int a=1;
	short int b=2; 
	long c; // in C++ and C if we dont initialize , it takes random variable for c variable
	long long d;
	unsigned int e=2;
	char f= 'x';

	for(int32_t i=0;i<100000;i++); // they will be signed and portable as max is 32767 for an int so we use int32_t,its 32 bits 
	cout << 3 * 4 <<'\n';
	cout << 3 + 4 <<'\n';
	cout << 3 - 4 << '\n';
	cout << 3 / 4 << '\n ';
	cout << 3 % 4 << 4 % 4 << 5 % 4 << 6 % 4 <<'\n'; 
	



} 