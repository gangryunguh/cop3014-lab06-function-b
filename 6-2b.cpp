//
// Created by Gang-Ryung Uh on 2019-06-26.
//
//
// Created by Gang-Ryung Uh on 2019-06-26.
//


#include <iostream>
#include <iomanip>
using namespace std;

// function prototype with default arguments specified
void calNetPay(float& net, int hours=40, float rate=6.00);


int main() {
    int hoursWorked = 20;
    float payRate = 5.00;
    float pay; // net pay calculated by the calNetPay function
    cout << setprecision(2) << fixed << showpoint;
    calNetPay(pay); // call to the function with only 1 parameter
    cout << "The net pay is $" << pay << endl;
    return 0;
}
//**********************************************************************************
// calNetPay
//   task:     This function takes rate and hours and multiples them to
//             get net pay (no deductions in this pay check!!!). It has two
//             default parameters. If the third argument is missing from the
//             call, 6.00 will be passed as the rate to this function. If the
//             second and third arguments are missing from the call, 40 will be
//             passed as the hours and 6.00 will be passed as the rate.
//
//   data in: pay rate and time in hours worked
//   data out: net pay (alters the corresponding actual parameter)
// ********************************************************************************
void calNetPay(float& net, int hours, float rate)
{
    net = hours * rate;
}

/*
calNetPay(pay); The net pay is $ ____________
calNetPay receives the value of _________ for hours and __________ for rate.

calNetPay(pay,hoursWorked); The net pay is $ $ ____________
calNetPay receives the value of _________ for hours and __________ for rate.

calNetPay(pay, hoursWorked, payRate); The net pay is $ $ ____________
calNetPay receives the value of _________ for hours and __________ for rate.


   The following are not correct. List what you think causes the error in each case.

     calNetPay(pay, payRate);
     calNetPay(hoursWorked, payRate);
     calNetPay(payRate);
     calNetPay();

 */