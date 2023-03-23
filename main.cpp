// Input/Output library
#include <iostream>

// String library 
#include <string>

// math library
#include <cmath>

// library for use of 'setprecision'
#include <iomanip>

// Your custom dayType header file!!
#include "dayType.h"

// code for the cout, cin functionalities
using namespace std;


int main ()
{
  DayType userInput;
  
// 1.Create a day object using the default constructor 
// and use the print function to display the
// instance variable. The output should be “Sunday”.

  cout << "1. Default constructor." << endl;
  cout << "   The output should be Sunday.  ";
  userInput.printDay();
  cout << endl;
  
// 2. Display the previous day (output should be “Saturday”).

  cout << "2. Next day." << endl;
  cout << "   The output should be Saturday.  ";
  userInput.previousDay();
  userInput.printDay();
  cout << endl;
  
// 3. Display the next day (output should be “Monday”).

  cout << "3. Previous Day." << endl;
  cout << "   The output should be Monday.  ";
  userInput.nextDay(2);
  userInput.printDay();
  cout << endl;
  
// 4. Create a day object using the constructor 
// with parameters and initialize the object to “Monday”.

  cout << "4. Constructor with parameters." << endl;
  cout << "   The output should be Monday.  ";
  DayType secondObject;
  secondObject.setDay(2);
  secondObject.printDay();
  cout << endl;
  
// 5. Use get function to display the value of the 
// instance variable (should be “Monday”).

  cout << "5. Display the value of the instance variable." << endl;
  cout << "   The output should be Monday:  ";
  secondObject.printDay();
  cout << endl;
  
// 6. Using the second object, add 3 days to the 
// current day and display the new day value
// (should be “Thursday”).

  secondObject.nextDay(3); 
  cout << "6. After adding 3 days." << endl;
  cout << "   The output should be Thursday.  ";
  secondObject.printDay();
  cout << endl;
  
// 7. Use the second object to call add 30 days to 
// the current day and display the new day 
// value (should be “Saturday”)

  secondObject.nextDay(30); 
  cout << "7. After adding 30 days." << endl;
  cout << "   The output should be Saturday.  ";
  secondObject.printDay();
  cout << endl;
  
// 8. Use the second object to add 365 days to the 
// current day and display the new day value
// (should be “Sunday")

  secondObject.nextDay(365); 
  cout << "8. After adding 365 days." << endl;
  cout << "   The output should be Sunday.  ";
  secondObject.printDay();
  cout << endl;  

  
  return 0;
}