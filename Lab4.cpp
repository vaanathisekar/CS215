#include <iostream>
using namespace std;

int calculateCheckDigit(int number) {
    int digits[8];
    for (int i = 7; i >= 0; i--) {
        digits[i] = number % 10;
        number /= 10;
    }

    int sumOdd = 0;
    int sumEven = 0;

    // Calculate sum of odd digits
    for (int i = 7; i >= 0; i -= 2) {
        sumOdd += digits[i];
    }

    // Calculate sum of even digits x2
    for (int i = 6; i >= 0; i -= 2) {
        int doubled = digits[i] * 2;
        sumEven += (doubled / 10) + (doubled % 10);
    }

    int totalSum = sumOdd + sumEven;
    int checkDigit = (10 - (totalSum % 10)) % 10;
    return checkDigit;
}

bool isValid(int number) {
    return (number % 10) == calculateCheckDigit(number - (number % 10));
}

int main()
{
    while (true) {
        int creditCardNumber;
        cout << "Please enter the 8-digit credit card number (enter -1 to quit): ";
        cin >> creditCardNumber;

        // Quit Program
        if (creditCardNumber == -1) {
            cout << "Thank you for using \"Credit Card Number Validation\"!" << endl;
            return 0;
        }

        // Run Credit Check
        if (isValid(creditCardNumber)) {
            cout << "Number is valid." << endl;
        }
        else {
            int correctCheckDigit = calculateCheckDigit(creditCardNumber - (creditCardNumber % 10));
            cout << "Number is invalid." << endl;
            cout << "Check digit should have been " << correctCheckDigit << endl;
        }  
    }
    return 0;
}