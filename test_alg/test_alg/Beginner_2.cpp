#include <iostream>
using namespace std;

int main() {
	unsigned int a, b, c, x;
	
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	x = (a + b - c / a) + c * a * a - (a + b);

	cout << "X = " << x << endl;

	return 0;
}