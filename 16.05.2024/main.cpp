#include <iostream>
using namespace std;

int main() {
	int range_start, range_finish, input;
	cout << "Enter first number: ";
	cin >> range_start;
	cout << "Enter second number: ";
	cin >> range_finish;
	if (range_start > range_finish) {
		input = range_start;
		range_start = range_finish;
		range_finish = input;
	}
	
	cout << "Enter number: ";
	cin >> input;
	while (input <= range_start || input >= range_finish) {
		cout << "Enter number again: ";
		cin >> input;
	}
	cout << "Correct number";
}