/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
  
   int amountDogFood;
   int amountCatFood;
   
   double finalSum;
   
   cin >> amountDogFood >> amountCatFood;
   
   finalSum = amountDogFood * 2.50 + amountCatFood * 4;
   
   cout << finalSum <<" lv." << endl;

    return 0;
}
