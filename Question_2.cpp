#include <iostream>
using namespace std;

int main() {
    int year;

    // Input a year from the user
    cout << "Enter a year: ";
    cin >> year;

    // Determine whether the given input year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

