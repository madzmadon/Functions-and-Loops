//Madison Evans
//determine if an integer between 10,000 and -10,000, entered by the user, is an even or an odd value and also if it is a negative or positive value.

#include <iostream>
#include <string>

using namespace std;

int getNumber();
string determineEvenOrOdd(int);
string determinePositiveOrNegative(int);
void displayResults(int, string, string);

int main ()
{
    int number;
    char repeat;
    string evenOdd;
    string positiveNegative;
    do
    {
        number = getNumber();
        evenOdd = determineEvenOrOdd(number);
        positiveNegative = determinePositiveOrNegative(number);
        displayResults(number, evenOdd, positiveNegative);
        
        cout << "\n\n Would you like to process another number? < Y or N >  ";
        cin >> repeat;
    }while (repeat == 'y' || repeat == 'Y');
     
     cout << "\n\nEnd of Program." <<endl <<endl;
     
     return 0;
}

int getNumber()
{
    int number;
    cout << "Please enter the number to be determined as even/odd or positive/negative: ";
    cin >> number;
    
    return number;
}

string determineEvenOrOdd(int number)
{
    string evenOdd;
    
    if (number % 2 == 0)
    {
        evenOdd = "Even";
    }else
        evenOdd = "Odd";
    
    
    cout << evenOdd;
    return evenOdd;
}

string determinePositiveOrNegative(int number)
{
    string positiveNegative;
    
    if (number >=0)
    {
        positiveNegative = "Positive";
    }else
        positiveNegative = "Negative";
    
    cout << positiveNegative;
    return positiveNegative;
}

void displayResults (int number, string evenOdd, string positiveNegative)
{
    cout << "The number you entered, " << number << " is a " << positiveNegative << ", " << evenOdd << " value.";
}

