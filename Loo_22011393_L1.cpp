/*
ID: 22011393
Name: Loo Hong Sheng
Group 1
*/

#include <iostream>
#include <string>

using namespace std;

// Define the structure
struct Student {
    string name;
    string id;
    string contact;
    string email;
};

int main() {
    const int numStudents = 2; // Change this number as needed
    Student students[numStudents];

    // Input student data
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;

        cout << "ID: ";
        cin >> students[i].id;

        cout << "Name: ";
        cin.ignore(); // Clear newline left in buffer
        getline(cin, students[i].name);

        cout << "Contact: ";
        cin >> students[i].contact;

        // Generate email based on name and ID
        students[i].email = students[i].name;
        // Replace spaces with underscores
        for (char& c : students[i].email) {
            if (c == ' ') c = '_';
        }
        students[i].email += "_" + students[i].id + "@utp.edu.my";

        cout << endl;
    }

    // Output student data
    for (int i = 0; i < numStudents; i++) {
        cout << "****************" << endl;
        cout << "Student " << i + 1 << endl;
        cout << "id: " << students[i].id << endl;
        cout << "name: " << students[i].name << endl;
        cout << "contact: " << students[i].contact << endl;
        cout << "email: " << students[i].email << endl;
        cout << "****************" << endl << endl;
    }

    return 0;
}