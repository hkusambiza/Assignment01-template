#include <iostream>
#include <cmath>

using namespace std;

int main(){
    #include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int numStudents, numTests;

    // Input the number of students and tests
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the number of tests for each student: ";
    cin >> numTests;

    // Create arrays to store student names and test scores
    string studentNames[numStudents];
    double testScores[numStudents][numTests];

    // Input student names and test scores
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> studentNames[i];

        cout << "Enter the " << numTests << " test scores for " << studentNames[i] << ": ";
        for (int j = 0; j < numTests; ++j) {
            cin >> testScores[i][j];
        }
    }

    // Calculate and display student averages
    cout << "\nStudent Grades:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        double sum = 0.0;
        for (int j = 0; j < numTests; ++j) {
            sum += testScores[i][j];
        }
        double average = sum / numTests;

        cout << studentNames[i] << "'s average score: " << fixed << setprecision(1) << average << endl;
    }

    // Calculate and display class average
    double classSum = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        for (int j = 0; j < numTests; ++j) {
            classSum += testScores[i][j];
        }
    }
    double classAverage = classSum / (numStudents * numTests);

    cout << "\nClass Average: " << fixed << setprecision(1) << classAverage << endl;

    // Calculate and display test averages
    cout << "\nAverage Test Scores:" << endl;
    for (int j = 0; j < numTests; ++j) {
        double testSum = 0.0;
        for (int i = 0; i < numStudents; ++i) {
            testSum += testScores[i][j];
        }
        double testAverage = testSum / numStudents;

        cout << "Test " << j + 1 << " Average Score: " << fixed << setprecision(1) << testAverage << endl;
    }

    return 0;
}

    return 0;
}
