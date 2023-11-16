#include <iostream>
using namespace std;

int main() {
    int limit;

    // Input the limit from the user
    cout << "Enter the limit for prime numbers: ";
    cin >> limit;

    // Generate and print prime numbers up to the specified limit given by the user
    cout << "Prime numbers up to " << limit << " are: ";
    for (int i = 2; i <= limit; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

