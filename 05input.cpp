#include <iostream> //cin cout cerr
#include <string>//if we dont have a string we can read from it
#include <sstream> // how to make a stream read out of a string
 
using namespace std;//if we dont have a string we can read form it

int main () {
	string line;
	double x,y,z;
	while (!cin.eof())  //eof is true when we end a file, but if we want it to be true when not to end a file then put!
	 {
	 	getline(cin,line);
	 	istringstream thisline(line);
	 	thisline >>x >>y >>z;
	 	cout << x << "," << y << ", " << z << '\n';

	}

	return 0;
}