#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> studentNames;
    vector<double> studentGrades;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Input student names and grades
    for (int i = 0; i < numStudents; ++i) {
        string name;
        double grade;

        cout << "Enter student name #" << i + 1 << ": ";
        cin.ignore(); // Ignore any newline character in the input buffer
        getline(cin, name);

        cout << "Enter " << name << "'s grade: ";
        cin >> grade;

        studentNames.push_back(name);
        studentGrades.push_back(grade);
    }

    // Calculate average grade
    double totalGrade = 0.0;
    double highestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];

    for (double grade : studentGrades) {
        totalGrade += grade;

        if (grade > highestGrade) {
            highestGrade = grade;
        }

        if (grade < lowestGrade) {
            lowestGrade = grade;
        }
    }

    double averageGrade = totalGrade / numStudents;

    // Display results
    cout << "\nGrades Summary:\n";
    cout << "-----------------\n";
    cout << "Average Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    // Display individual student names and grades
    cout << "\nStudent Details:\n";
    cout << "-----------------\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << studentNames[i] << ": " << studentGrades[i] << endl;
    }

    return 0;
}
