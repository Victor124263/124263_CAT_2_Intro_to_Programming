#include <iostream>
#include <cctype> // library necessary for the use of isalpha and tolower
using namespace std;

int main() {
    char inputChar;

    // Input character from the user
    cout << "Enter a character: ";
    cin >> inputChar;

    // Determine if the input is a letter
    if (isalpha(inputChar)) {
        // Convert the character to lowercase
        char lowercaseChar = tolower(inputChar);

        // Determine if it's a vowel or a consonant
        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
            cout << "The character '" << inputChar << "' is a vowel." << endl;
        } else {
            cout << "The character '" << inputChar << "' is a consonant." << endl;
        }
    } else {
        cout << "Error: Not a valid letter." << endl;
    }

    return 0;
}
