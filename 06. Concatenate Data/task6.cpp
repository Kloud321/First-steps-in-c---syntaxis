#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string firstName, lastname, town;
    int age;
 
    cin >> firstName >> lastname >> age >> town;

    cout << "You are " << firstName << " " << lastname << ", a " << age << "-years old person from " << town << "." << endl;

    return 0;

}

