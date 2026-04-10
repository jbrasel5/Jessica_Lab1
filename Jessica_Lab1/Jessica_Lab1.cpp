// Edited directly on GitHub
// Jessica_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Reviewed and updated by Harvey Bui on 2024-06-01

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello from Jessica! This is my first Git commit.\n";
    cout << "Git makes collaboration easy!" << endl;
    cout << "Changes made by Harvey Bui!" << endl;
    cout << "Lab 1 completed on 4/6/2026!" << endl;
    cout << "Feature by Jessica: Branching is awesome!" << endl;
    cout << "Student ID: 1234 | Name: Jessica Brasel" << endl;


    // Feature by Harvey and Jessica: Grade calculator with letter grades
    char letterGrade;
    if (averageGrade >= 90) {
        letterGrade = 'A';
        cout << "Pass";
    }
    else if (averageGrade >= 80) {
        letterGrade = 'B';
        cout << "Pass";
    }
    else if (averageGrade >= 70) {
        letterGrade = 'C';
        cout << "Pass";
    }
    else if (averageGrade >= 60) {
        letterGrade = 'D';
        cout << "Pass";
    }
    else {
        letterGrade = 'F';
        cout << "Fail";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
