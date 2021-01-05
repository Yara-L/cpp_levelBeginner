#include <iostream>
#include <string>
using namespace std;

int main() {
	char name[20];
	char surname[30];
	int fn;

	cout << "Name: ";
	cin >> name;
	cout << "Surname: ";
	cin >> surname;
	cout << "F number: F";
	cin >> fn;

	cout << endl;

	for (int i = 0; i < 10; i++) {
		for (int j = 1; j < i; j++) {
			cout << "=";
		}
	}

	cout << "\n* Laboratory work 1" << endl;
	cout << "* FN: F" << fn << endl;
	cout << "* by " << name << surname<< "\n";

	for (int i = 0; i < 10; i++) {
		for (int j = 1; j < i; j++) {
			cout << "=";
		}
	}
		cout << endl;

	return 0;
}