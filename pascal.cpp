#include <iostream>
using namespace std;

long pascal(int nth){
	long x = 0, y = 1, next = 0;
	for (int w = 1; w <= nth; w++){
		if (w < 3){
			next = x + y;
			x = y;
			y = next;
		}
		else {
			next = next * 2;
		}
	}
	return next;
}

int main(){
	int nth;
	cout << "Enter the nth term : ";
	cin >> nth;
	cout << " = " << pascal(nth);
}
// only 1 to 31 term can be display.