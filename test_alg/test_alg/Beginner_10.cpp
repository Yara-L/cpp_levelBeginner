#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;

	cout << "Enter num1: ";
	cin >> num1;

	cout << "Enter num2: ";
	cin >> num2;
	
	cout << "Enter num3: ";
	cin >> num3;

	if (num1 == num2 || num1 == num3 || num2 == num3) {
		cout << "num1 = " << num1 + 5 << "\nnum2 = " << num2 + 5 << "\nnum3 = " << num3 + 5<< endl;
	} else {
		cout << "\nThere are no equal numbers." << endl;
	}

	return 0;
}