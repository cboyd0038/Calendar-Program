#include <iostream>
#include <iomanip>
#include <cstring>
#include "dayType.h"

using namespace std;

DayType::DayType()
{
  setDay(1); 
}

DayType::DayType(int num)
{
  setDay(num);
}
//****************************************************************************
void DayType::printDay()
{
  switch (dayNumber) 
  {
  case 1: day = "Sunday"; 
    break;
  case 2: day = "Monday"; 
    break;
  case 3: day = "Tuesday"; 
    break;
  case 4: day = "Wednesday";
    break;
  case 5: day = "Thursday";
    break;
  case 6: day = "Friday";  
    break;
  case 7: day = "Saturday"; 
    break;
  }
  cout << day << endl;
}
//****************************************************************************

int DayType::setDay(int dayNum)
{
  if ((dayNum >= 1) && (dayNum <= 7))
  {
    dayNumber = dayNum;
  }
  else
  {
    dayNumber = 1; // set to 0 to indicate error?
  }
  return dayNumber;
}



//****************************************************************************
int DayType::previousDay()
{
  if (dayNumber - 1 == 0)
  {
    dayNumber = 7;
  }
  else
  {
    dayNumber = dayNumber - 1;
  }
  return dayNumber;
}



//****************************************************************************
int DayType::nextDay(int num)
{
  if (dayNumber + num == 8)
  {
    dayNumber = 1;
  }
  else if ((dayNumber + num) % 7 == 0) 
  {
    dayNumber = dayNumber + (num % 7);
  }
  else if ((num >= 1) or (num <= 7)) 
  {
    dayNumber = (dayNumber + num) % 7 ;
  }
  return dayNumber;
}
