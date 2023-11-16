#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Input three numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Determine the smallest number using switch...case
    int smallestCase;
    if (num1 <= num2 && num1 <= num3) {
        smallestCase = 1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallestCase = 2;
    } else {
        smallestCase = 3;
    }

    switch (smallestCase) {
        case 1:
            cout << "The smallest number is: " << num1 << endl;
            break;
        case 2:
            cout << "The smallest number is: " << num2 << endl;
            break;
        case 3:
            cout << "The smallest number is: " << num3 << endl;
            break;
        default:
            cout << "Error in determining the smallest number." << endl;
            break;
    }

    return 0;
}

