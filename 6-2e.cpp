
#include <iostream>
using namespace std;
int findSqrRoot(int x); // prototype for a user defined function that

// returns the square root of the number passed to it

// driver is a module that tests a function by simply calling it.
// the main() here is an example of the driver.
int main()
{
    int number;
    cout << "Input the number whose square root you want." << endl;
    cout << "Input a -99 when you would like to quit." << endl;
    cin >> number;
    while (number != -99)
    {

        cout << "The square root of your number is "
             << findSqrRoot(number) << endl;
        cout << "Input the number whose square root you want." << endl;
        cout << "Input a -99 when you would like to quit." << endl;
        cin >> number;
    }
    return 0;
}

// function stub for findSqrtRoot
int findSqrRoot(int x)
{
    cout << "findSqrRoot function was called with " << x
         << " as its argument\n";
    return 0;
}  // This bold section is the stub.