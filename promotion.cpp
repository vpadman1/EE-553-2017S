#include <iostream>
#include <cstdint>
using namespace std;

int x=0;

int main() {
	float f  = 1.5f;  //if we put 1.5 alone then its double ,accurate upto 7 digits  
	double d = 1.5; // accurate about 15 digits
	long double e =  1.5L; //accurate upto 30 digits
	double Na =6.0022e+23; //exponential notation.
	double d1 = 1 + 1.5; //type promotion - we cant do int and double together so they promote 1 to double (1.0)
	double d2 = 3 /2; // first compute integer 3/2 (1) then convert to 1.0
	double d3 =  1.5f * 3; //  promote 3 --> float(3.0f) --> convtert to double
	// subtle question, does it do the arithemtic at ull double precision? 
	cout << d1 <<'\n' << d2 << '\n' << d3 << '\n';
	cin.get();
}







