#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
// Program computes course grades by nested if else loops

{
    // declare variables
    
    double test1, test2, test3, average=0, ave2=0;
    string name;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Please enter Full Name " << endl;
    getline(cin, name);
    cout << "Please enter three test scores" << endl;
    cin >> test1 >> test2 >> test3;
    cout << " Test score 1: " << test1 << " Test score 2: " << test2 << " Test score 3: " << test3 << endl;
    average = (test1 + test2 + test3) / 3; // compute average
    cout << "Hello " << name << "!!";
    cout << " Your average is " << average << endl;

    if (average < 0 || average > 100) // invaild responses

        cout << "You have entered an invalid response" << endl;

    else if (average >= 90) // Course grade A

        cout
            << " Great job! Your course grade is A" << endl;

    else if (average >= 70 && average < 90) // Course Grade A or B
    {
        if (test3 >= 90) // check test 3
            cout << " Good job! your course grade is A" << endl;
        else
            cout << " Good job! your course grade is B" << endl;
    }

    else if (average >= 50 && average < 70) // Course Grade C or D
    {
        ave2 = (test2 + test3) / 2; // compute average of test 2 and test 3
        if (ave2 >= 70)
            cout << "You can do better! Your course grade is C " << endl;
        else
            cout << "You can do better! Your course grade is D " << endl;
    }
    else if (average < 50) // Course Grade F
        cout
            << " Your course grade is F " << endl;

    else // Default response
        cout
            << "Default";
    }
