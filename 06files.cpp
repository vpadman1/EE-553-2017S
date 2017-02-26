#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	ofstream f("test.dat");  //ofstream is output file stream
	f << "hello" <<5+2 << '\n';
	for ( int i =0; i< 1000000; i++) // 999999
		f << i;

	// to read in .....  ifstream 



	return 0;




}
