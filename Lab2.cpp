#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    double CAD;
    cout << "Convert CAD to USD service." << endl;
    cout << "Please enter the amount of Canadian Dollars you want to" << endl;
    std::cout << "exchange (MUST BE A POSITIVE NUMBER): C$ ";
    std::cin >> CAD;
    double conversion = 0.69;
    double USD = CAD * conversion;
    cout << "The exchange for C$" << fixed << setprecision(2) << CAD << " --> $ " << fixed << setprecision(2) << USD << " :" << endl;
    
    // Dollars
    int dollars = floor(USD);
    cout << "Dollars:" << setw(14) << dollars << endl;
    int convertToWholeNumber = 100;
    int changeLeft = round((USD - dollars) * convertToWholeNumber);

    // Quarters
    int quarterValue = 25;
    int numQuarters = floor(changeLeft / quarterValue);
    cout << "Quarters:" << setw(13) << numQuarters << endl;
    changeLeft %= quarterValue;

    // Dimes
    int dimeValue = 10;
    int numDimes = changeLeft / dimeValue;
    cout << "Dimes:" << setw(16) << numDimes << endl;
    changeLeft %= dimeValue;

    // Nickels
    int nickelValue = 5;
    int numNickels = changeLeft / nickelValue;
    cout << "Nickels:" << setw(14) << numNickels << endl;
    changeLeft %= nickelValue;

    // Pennies
    int numPennies = changeLeft;
    cout << "Pennies:" << setw(14) << numPennies << endl;

    return 0;
}
