#include <iostream>
using namespace std;

int main() {
	char letter = 'a';

	cout << "Please enter a letter in lower case: ";
	cin >> letter;

	if (letter != tolower(letter)) {
		cout << "Please enter a letter in lower case and try again.\n\n";
	}
	else {
		cout << "This is the your letter in upper case: ";
		letter = toupper(letter);
		cout << letter << "\n\n";
	}

	return 0;
}