#include <iostream>
using namespace std;

void main() {
	int i;
	for (i =1;i <=10;i++) {
		cout << i;
	}
	cout << '\n';
	float x;
	for (x=0.0; x < 10.0f; x+=0.1f){
		cout << x << ' ';
	}
	cout <<'\n';
	float y;
	for ( y=0.0; y < 1000.0f; y+=0.1f){
		cout << x << ' ';
	}
}

/*

1/2 =0.5
1/4=0.25
1/10=0.1
1/3=0.3333 its repetitive ,not a good fration
 for a computer storing in base 2 c^-1, 2^-2, 2^-3 ,1/2,1/4,1/8,...



*/