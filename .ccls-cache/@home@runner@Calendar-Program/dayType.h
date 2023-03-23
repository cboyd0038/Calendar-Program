#ifndef Circle_H 
#define Circle_H

#include <iostream>
using namespace std;

class DayType
{
public:
  DayType();
  
  DayType(int);
   
  void printDay();
  
  int setDay(int);
  
  int previousDay();

  int nextDay(int);

private:
  string day;
  int dayNumber;
};

#endif
