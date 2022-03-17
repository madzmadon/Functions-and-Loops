//Madison Evans
//calculate the average score and letter grade earned by a student in any course.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string getStudentName();
int getNumberExams();
double getScoresAndCalculateTotal(int);
double calculateAverage(double, int);
char determineLetterGrade (double);
void displayAverageGrade(string, double, char);

int main(void)
{
    int exams = 0;
    double total = 0.0, average = 0.0;
    string name;
    char letterGrade;
    char repeat;

    do
    {
        name = getStudentName();
        exams = getNumberExams();
        total = getScoresAndCalculateTotal(exams);
        average = calculateAverage(total, exams);
        letterGrade = determineLetterGrade(average);
        displayAverageGrade(name, average, letterGrade);

        cout << "\n\nWould you like to calculate another Experiment (Y or N): ? ";
        cin >> repeat;
        cin.get();
    } while (repeat == 'y' || repeat == 'Y');

    cout << "\n\nEnd of Program.";

    cout << endl << endl;

    return 0;
}


string getStudentName()
{
    string name;
    cout << "\nPlease enter the student’s name: ";
    getline(cin, name);
    
    return name;
}

int getNumberExams()
{
    int exams;
    do
    {
        cout << "Please enter the number of exams taken by the student in the course: ";
        cin >> exams;
        if (exams < 1)
        {
            cout << "ERROR: Enter a value higher than 1.\n";
        }
    }while (exams < 1);
    
    return exams;
}

double getScoresAndCalculateTotal(int exams)
{
    int counter = 1;
    double score;
    double total;
    
    while (counter <= exams)
    {
        cout << "\nEnter the exam scores:";
        cin >> score;
        total = total + score;
        counter++;
    }
    
    return total;
}

double calculateAverage(double total, int exams)
{
    double average = 0;
    average = total / exams;
    
    return average;
}
//stopped here
char determineLetterGrade (double average)
{
    char letterGrade;
    if (average >= 90)
    {
        letterGrade = 'A';
    }else if (average >= 80 && average <90)
    {
        letterGrade = 'B';
    }else if (average >= 70 && average <80)
    {
        letterGrade = 'C';
    }else if (average >= 60 && average <70)
    {
        letterGrade = 'D';
    }else
        letterGrade = 'F';
    
    return letterGrade;
}

void displayAverageGrade(string name, double average, char letterGrade)
{
    cout << fixed << showpoint << setprecision(1);
    cout << endl << endl << "Student Name: " << name << endl
    << "Average: " << average << endl
    << "Letter Graded Earned: " << letterGrade;
    
    
}


