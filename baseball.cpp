// This program will input the wins and losses of a baseball team and outputs the percentage of wins
// It uses three value returning functions

#include <iostream>
#include <iomanip>
using namespace std;

int findWins();                           // function that inputs wins
int findLosses();                         // function that inputs losses
float findPercentWins(int win, int lose); // function that calculates percentage of wins

int main()
{
   int win, lose;
   float winPercent;

   cout << fixed << showpoint << setprecision(2);
   win = findWins();     //call to function that inputs wins
   lose = findLosses();  //call to function that inputs losses
   winPercent = findPercentWins(win,lose);
   cout << "The percentage of wins is " << winPercent * 100 << " %" << endl;

   return 0;
}

//  *********************************************************************
//                           findWins
//
//   task:          This function inputs the number of wins
//   data in:       none
//   data returned: number of wins
//
//   ********************************************************************
int findWins()
{

   cout << "Please input the number of wins" << endl;


   return win;
}

//  *********************************************************************
//                           findLosses
//
//   task:          This function inputs the number of losses
//   data in:       none
//   data returned: number of losses
//
//   ********************************************************************
int findLosses()
{

   cout << "Please input the number of losses" << endl;

   return loss;
}

//  *********************************************************************
//                           findPercentWins
//
//   task:          This function finds the percentage of wins over loses
//   data in:       number of wins and number of losses
//   data returned: percentage of wins over losses
//
//   ********************************************************************
float findPercentWins(int win, int lose)
{
}