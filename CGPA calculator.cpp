#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of courses: ";
    cin >> n;

    vector<float> grade(n);
    vector<float> credit(n);

    float totalCredits = 0;
    float totalGradePoints = 0;

    cout << "\nEnter grade and credit hours for each course:\n";
    cout << "(Format: grade credit)\n\n";

    for(int i = 0; i < n; i++)
    {
        cout << "Course " << i + 1 << ": ";
        cin >> grade[i] >> credit[i];

        totalCredits += credit[i];
        totalGradePoints += grade[i] * credit[i];
    }

    cout << "\n----- COURSE SUMMARY -----\n";

    for(int i = 0; i < n; i++)
    {
        cout << "Course " << i + 1
             << " | Grade: " << grade[i]
             << " | Credit Hours: " << credit[i] << endl;
    }

    cout << "\n----- RESULT -----\n";

    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;

    float gpa = totalGradePoints / totalCredits;

    cout << "GPA / CGPA: " << gpa << endl;

    return 0;
}
