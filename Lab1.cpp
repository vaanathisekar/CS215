#include <iostream>
using namespace std;
int main() {
	// Part 1
	cout << "Hi Bipin Thapa Magav," << endl;
	cout << "I am glad you are my TA." << endl;
	cout << "My name is Vaanathi. Nice to meet you" << endl;
	

	// Part 2
	cout << endl;
	cout << "  Let it snow!" << endl;
	cout << endl;
	cout << "    *  *   *" << endl;
	cout << "  * *  * *   *" << endl;
	cout << "*  *   *  *  *  * " << endl;
	cout << "*   *   *   *  *  * " << endl;
	cout << "  *   *  *  *   * " << endl;
	cout << "  *  *  *  *  * " << endl;
	cout << "    *  *  *  *  " << endl;
    cout << endl;
	cout << "       _" << endl;
	cout << "     _[_]_" << endl;
	cout << "     ('>')" << endl;
	cout << "    -( : )-" << endl;
	cout << "     (   )" << endl;

	// Part 3
	cout << "It is a snow day!" << endl;
	cout << endl;
	int number;
	cout << "How many courses do you have today?" << endl;
	cin >> number;
	cout << "Enjoy your " << number << " course(s)!" << endl;
	cout << "Have a beautiful snow day." << endl;

	// Part 4 - collect user input and calculate the time spent
	double hours; // declare a variable to store how many hours
	cout << "How many hours are you going to spend on CS215 every week? " << endl;
	cin >> hours;
	const int HOUR_TO_MIN = 60; //declare a constant: 1 hour = 60 minutes
	const int MIN_TO_SEC = 60; //declare a constant: 1 minute = 60 seconds
	double seconds = hours * HOUR_TO_MIN * MIN_TO_SEC;
	cout << "Good Luck! You will spend " << seconds << " seconds each week on CS215." << endl;

	return 0;
}