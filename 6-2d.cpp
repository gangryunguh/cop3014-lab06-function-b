

#include <iostream>
#include <iomanip>
using namespace std;
float calNetPay(int hours, float rate);
//int calNetPay(int hours, float rate);
float calNetPay(int hours, float rate, bool);

int main()
{
    int hoursWorked = 20;
    float payRate = 5.00;
    float netPay;
    cout << setprecision(2) << fixed << showpoint;
    netPay = calNetPay(hoursWorked, payRate);
    cout << " The net pay is $" << netPay << endl;
    netPay = calNetPay(hoursWorked, payRate, true);
    cout << " The net pay is $" << netPay << endl;

    return 0;
}

//******************************************************************************
// calNetPay
//        This function takes hours worked and pay rate and multiplies
//        them to get the net pay which is returned to the calling function.
//
//
// task:
// data in: hours worked and pay rate
// data returned: net pay
//
//******************************************************************************
float calNetPay(int hours, float rate)
{
    return hours * rate;
}

float calNetPay(int hours, float rate, bool really)
{
    if (really)
        return hours * rate;
    else
        return 0.0;
}