#include <iostream>

using namespace std;

int main()
{
    double meterAmount;
    double discount;
    double finalSum;
    
    cin >> meterAmount;
    
    discount  = 0.18 * (meterAmount * 7.61);
    
    finalSum = (meterAmount * 7.61) - discount;
    
    cout << "The final price is: " << finalSum << " lv." << endl;
    cout << "The discount is: " << discount << " lv."<<  endl;


    return 0;
}
