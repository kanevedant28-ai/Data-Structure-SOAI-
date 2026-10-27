#include <iostream>
#include <string>

using namespace std; // Fixed 'uing' to 'using'

struct Student
{
    int rollNo;     // Added space between 'int' and 'rollNo'
    string name;
    float percentage;
};

int main()
{
    Student s[100];
    int n;

    cout << "Enter number of Students: "; // Changed 'count' to 'cout' and ':' to ';'
    cin >> n;
    
    // Input student records
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;
        cout << "Enter Roll Number: ";
        cin >> s[i].rollNo;

        cout << "Enter Name: ";
        cin >> ws;
        getline(cin, s[i].name);

        cout << "Enter Your Percentage: ";
        cin >> s[i].percentage;
    }

    // Display Student Records
    cout << "\n--- Student Records ---\n"; // Fixed '\---'
    cout << "Roll no.\tName\t\tPercentage\n";

    for (int i = 0; i < n; i++)
    {
        cout << s[i].rollNo << "\t\t"
             << s[i].name << "\t\t" // Fixed "t\t" to "\t\t" for alignment
             << s[i].percentage << "%\n";
    }

    return 0;
}