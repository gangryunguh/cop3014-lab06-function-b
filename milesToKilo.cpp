// This program converts kilometers to miles or miles to kilometers

#include <iostream>
using namespace std;

const double KILOTOMILES = .621;
const double MILESTOKILOS = 1.61;

float  convertKiloToMiles(float kilo);
float  convertMilesToKilo(float miles);

int main()
{
   int index;       // indication of type of conversion 1 for miles to kilo  2 for kilo to miles.
   float distance;  // the distance to be converted

   cout << "Please input " << endl
        << "1 Convert miles to kilometers" << endl
        << "2 Convert kilometers to miles" << endl
        << "3 Quit" << endl << endl;
   cin >> index;

   while (index == 1 || index == 2)
   {
      if (index == 1)
      {
         cout << endl << "Please input the miles to be converted" << endl;
         cin >> distance;

         cout << endl << distance << " miles = " << convertMilesToKilo(distance)
              << " kilometers." << endl << endl;
      }
      else
      {
         cout << endl << "Please input the kilometers to be converted" << endl;
         cin >> distance;

         cout << endl << distance <<" kilometers = " << convertKiloToMiles(distance)
              << " miles." << endl << endl;
      }

       cout << "Please input " << endl
            << "1 Convert miles to kilometers" << endl
            << "2 Convert kilometers to miles" << endl
            << "3 Quit" << endl << endl;
       cin >> index;
   }

   return 0;
}

//********************************************************************
//                     convertKiloToMiles
//
//  task:          This function converts kilometers to miles
//  data in:       the number of kilometers
//  data returned: the equivalent number of miles
//********************************************************************
float  convertKiloToMiles(float kilo)
{
   // implement
}

//********************************************************************
//                     convertMilesToKilo
//
//  task:          This function converts miles to kilometers
//  data in:       the number of miles
//  data returned: the equivalent number of kilometers
//********************************************************************
float  convertMilesToKilo(float miles)
{
   // implement
}