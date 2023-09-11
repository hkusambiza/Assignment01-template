#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int numStudents, numTests;

    cout << "Enter number of students: ";
    cin >> numStudents;

    cout << "Enter the number of tests for each student: ";
    cin >> numTests;

    // Create arrays to store student names and test scores
    string studentNames[numStudents];
    double testScores[numStudents][numTests];
    double studentAverages[numStudents] = {0.0};
    double testAverages[numTests] = {0.0};

    // Input student names and test scores
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin.ignore();
        getline(cin, studentNames[i]);

        cout << "Enter the " << numTests << " test scores for " << studentNames[i] << ": ";
        for (int j = 0; j < numTests; ++j) {
            cin >> testScores[i][j];
            studentAverages[i] += testScores[i][j];
            testAverages[j] += testScores[i][j];
        }
        studentAverages[i] /= numTests;
    }

    // Calculate class average
    double classAverage = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        classAverage += studentAverages[i];
    }
    classAverage /= numStudents;

    // Calculate test averages
    for (int j = 0; j < numTests; ++j) {
        testAverages[j] /= numStudents;
    }

    // Display student averages
    cout << "Student Grades:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << studentNames[i] << "'s average score: " << fixed << setprecision(1) << studentAverages[i] << endl;
    }

    // Display class average
    cout << "\nClass Average: " << fixed << setprecision(1) << classAverage << endl;

    // Display test averages
    cout << "\nAverage Test Scores:" << endl;
    for (int j = 0; j < numTests; ++j) {
        cout << "Test " << j + 1 << " Average Score: " << fixed << setprecision(1) << testAverages[j] << endl;
    }

    return 0;
}

