#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string name;
    int projects, hours;

    cin >> name >> projects;

    // Calculate hours after getting input
    hours = projects * 3;

    // Output the result
    cout << "The architect " << name << " will need " << hours << " hours to complete " << projects << " project/s." << endl;

    return 0;
}
