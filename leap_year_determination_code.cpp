#include <iostream>
using namespace std;

int main() 
{
    unsigned int year;
    bool isLeapYear = false;
    cout << "Enter a year: "; //Take in user input
    cin >> year; // Store user input in year

    // Checking if the year is divisible by 4 to be a leap year
    if (year % 4 == 0) {
        /** Checking if the year is exactly divisible by 100.
        If it is, then it's an end of the century year like 1900 or 2000.
        As a result, we need to confirm further if it's a leap year**/
        if (year % 100 == 0)// Checking if the end of century years are divisible by 400 to be leap years
        {
            if (year % 400 == 0)//If year is exactly divisible by 100 and 400, then its a leap year
            {
                isLeapYear = true; 
            }
        }
        else //if the year is divisible by 4 and not 100 then its a leap year
        { 
            isLeapYear = true;
        }
    }
    if (isLeapYear==true) 
    { 
        cout << year << " is a leap year." << endl;
    }
    else
    { 
        cout << year << " is not a leap year." << endl;
    }
    system("pause");
    return 0; 
}