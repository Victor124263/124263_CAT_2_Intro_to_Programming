#include <iostream>
#include <string>
using namespace std;

// Hard-coded username and password credentials
const string correctUsername = "user123";
const string correctPassword = "pass123";

// Function to display information about the user
void displayAboutUs() {
    cout << "About Us Page\n";
    cout << "Hello! I enjoy programming in C++ and exploring its various features.\n";
    cout << "Feel free to explore more options from the menu.\n";
}

// Function to display information about services
void displayServices() {
    cout << "Services Page\n";
    cout << "I offer programming services to help others with their projects.\n";
    cout << "Explore more options from the menu.\n";
}

// Function to display full profile information (Fictitious Character)
void displayFullProfile() {
    cout << "Full Profile Page\n";
    cout << "Full Name: Viola Wambui Kariuki\n";
    cout << "Year of Birth: 1980\n";
    cout << "Country: Kenya\n";
    cout << "Citizenship: Kenyan\n";
    cout << "City: Kiambu\n";
    cout << "University: Strathmore University\n";
    cout << "Course: Computer Science\n";
    cout << "Unit Name: Introduction to C++ Programming\n";
    cout << "Hobbies: Coding, Hiking, Football, Cycling\n";
    cout << "Favorite Colour: Yellow\n";
    cout << "Favorite Animal: Cat\n";
}

int main() {
    string username, password;

    // Prompt the user to input login credentials
    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your password: ";
    cin >> password;

    // Check if the credentials entered by the user are correct
    if (username == correctUsername && password == correctPassword) {
        cout << "Login Successful. Welcome to my Simple App!\n";

        int choice;
        do {
            // Display menu options as given in the question brief
            cout << "\nSelect an action to perform:\n";
            cout << "1. Go to About Us Page\n";
            cout << "2. Go to Services Page\n";
            cout << "3. Go to Full Profile Page\n";
            cout << "4. Logout\n";
            cout << "Enter your choice: ";
            cin >> choice;

            // Perform the selected action
            switch (choice) {
                case 1:
                    displayAboutUs();
                    break;
                case 2:
                    displayServices();
                    break;
                case 3:
                    displayFullProfile();
                    break;
                case 4:
                    cout << "Logout Successful.\n";

                    // Prompt the user for login credentials again
                    cout << "Enter your username: ";
                    cin >> username;

                    cout << "Enter your password: ";
                    cin >> password;
                    break;
                default:
                    cout << "Invalid choice. Please enter a valid option.\n";
                    break;
            }
        } while (choice != 4); // Continue the loop until the user chooses to logout
    } else {
        cout << "Login Failed. Incorrect username or password.\n";
    }

    return 0;
}
