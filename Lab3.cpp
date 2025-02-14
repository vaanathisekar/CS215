#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	cout << "Your wish is my command!" << endl;
	cout << "I will sort three numbers under your wish:" << endl;
	cout << "Enter A for ascending order, D for descending order (A or D) : ";
	char sort;
	cin >> sort;

	// If user does not input "A/a" or "B/b"
	if (sort != 'A' && sort != 'a' && sort != 'D' && sort != 'd') {
		cout << "Invalid choice, quitting the program...";
		return 0;
	}

	cout << "Please enter three integer numbers : ";
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;


	int first;
	int second;
	int third;

	// ASCENDING ORDER
	if (sort == 'A' || sort == 'a') {
		if (num1 <= num2 && num2 <= num3) {
			first = num1;
			second = num2;
			third = num3;
		}
		else if (num1 <= num3 && num3 <= num2) {
			first = num1;
			second = num3;
			third = num2;
		}
		else if (num2 <= num1 && num1 <= num3) {
			first = num2;
			second = num1;
			third = num3;
		}
		else if (num2 <= num3 && num3 <= num1) {
			first = num2;
			second = num3;
			third = num1;
		}
		else if (num3 <= num1 && num1 <= num2) {
			first = num3;
			second = num1;
			third = num2;
		}
		else if (num3 <= num2 && num2 <= num1) {
			first = num3;
			second = num2;
			third = num1;
		}
		cout << "Numbers are sorted in ascending order: " << first << " <= " << second << " <= " << third << endl;
		if (num1 == num2 || num1 == num3 || num2 == num3) {
			cout << "Numbers are in leniently ascending order!" << endl;
		}
		else cout << "Numbers are in strictly ascending order!" << endl;
		return 0;
	}


	// DESCENDING ORDER
	else {
		if (num1 >= num2 && num2 >= num3) {
			first = num1;
			second = num2;
			third = num3;
		}
		else if (num1 >= num3 && num3 >= num2) {
			first = num1;
			second = num3;
			third = num2;
		}
		else if (num2 >= num1 && num1 >= num3) {
			first = num2;
			second = num1;
			third = num3;
		}
		else if (num2 >= num3 && num3 >= num1) {
			first = num2;
			second = num3;
			third = num1;
		}
		else if (num3 >= num1 && num1 >= num2) {
			first = num3;
			second = num1;
			third = num2;
		}
		else if (num3 >= num2 && num2 >= num1) {
			first = num3;
			second = num2;
			third = num1;
		}
		cout << "Numbers are sorted in descending order: " << first << " >= " << second << " >= " << third << endl;
		if (num1 == num2 || num1 == num3 || num2 == num3) {
			cout << "Numbers are in leniently descending order!" << endl;
		}
		else cout << "Numbers are in strictly descending order!" << endl;
		return 0;
	}
}