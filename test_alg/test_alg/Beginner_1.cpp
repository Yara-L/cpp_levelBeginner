#include <iostream>
using namespace std;

int main() {
	unsigned const int DIGITS = 5;
	unsigned int num;

	cout << "Please enter 5 digit number: ";
	cin >> num;

	if (num > 9999 && num <= 99999) {
		cout << "1 digit is " << (num / 10000) << endl;
		cout << "2 digit is " << (num / 1000) % 10 << endl;
		cout << "3 digit is " << (num / 100) % 10 << endl;
		cout << "4 digit is " << (num / 10) % 10 << endl;
		cout << "5 digit is " << num % 10 << endl;
	}
	else {
		cout << "Please enter a 5 digit number." << endl;
	}

	return 0;
}