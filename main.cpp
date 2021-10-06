#include <iostream>
#include <cmath>
using namespace std;



int main() {

    int January = 1;
    int Saturday = 1;
    int InitialYear = 2000;
    int InitialMonth = January;
    int InitialDay = Saturday;
    int Day;
    int Year;
    int Month;

    cout << "Input Day :" << endl;
    cin >> Day;
    cout << "Input Month :" << endl;
    cin >> Month;
    cout << "Input Year :" << endl;
    cin >> Year;

    int ChangeInDays = Day - InitialDay;
    int ChangeInMonths = Month - InitialMonth;
    int ChangeInYears = Year - InitialYear;
    int YearsToDays = ChangeInYears*365;
    int MonthsToDays;

    if (ChangeInMonths == 0)
        MonthsToDays = 0;
    else if (ChangeInMonths == 1)
        MonthsToDays = 31;
    else if (ChangeInMonths == 2)
        MonthsToDays = 59;
    else if (ChangeInMonths == 3)
        MonthsToDays = 89;
    else if (ChangeInMonths == 4)
        MonthsToDays = 119;
    else if (ChangeInMonths == 5)
        MonthsToDays = 150;
    else if (ChangeInMonths == 6)
        MonthsToDays = 180;
    else if (ChangeInMonths == 7)
        MonthsToDays = 211;
    else if (ChangeInMonths == 8)
        MonthsToDays = 242;
    else if (ChangeInMonths == 9)
        MonthsToDays = 272;
    else if (ChangeInMonths == 10)
        MonthsToDays = 303;
    else if (ChangeInMonths == 11)
        MonthsToDays = 333;

    int LeapYears;
    LeapYears = (Year/4-Year/100+Year/400)-(InitialYear/4-InitialYear/100+InitialYear/400)+1;



    int DaysTilDate = Day+MonthsToDays+YearsToDays+LeapYears;


    if(ChangeInMonths <= 1)
        DaysTilDate = Day+MonthsToDays+YearsToDays+LeapYears-1;
    else if(ChangeInMonths < 1)
        DaysTilDate = Day+MonthsToDays+YearsToDays+LeapYears;
    else if(ChangeInMonths >= 3)
        DaysTilDate = Day+MonthsToDays+YearsToDays+LeapYears+1;

    if(Year&400 != 0 && ChangeInMonths < 3)
        DaysTilDate = Day+MonthsToDays+YearsToDays+LeapYears;


int DaysDate = (DaysTilDate)%7;
if(DaysDate == 1)
    cout << "The day on the date: " << Day << "/" << Month << "/" << Year << " is Saturday " << endl;
else if(DaysDate == 2)
    cout << "The day on the date: " << Day << "/" << Month << "/" << Year << " is Sunday " << endl;
else if(DaysDate == 3)
    cout << "The day on the date: " << Day << "/" << Month << "/" << Year << " is Monday " << endl;
else if(DaysDate == 4)
    cout << "The day on the date: " << Day << "/" << Month << "/" << Year << " is Tuesday " << endl;
else if(DaysDate == 5)
    cout << "The day on the date: " << Day << "/" << Month << "/" << Year << " is Wednesday " << endl;
else if(DaysDate == 6)
    cout << "The day on the date: " << Day << "/" << Month << "/" << Year << " is Thursday " << endl;
else if(DaysDate == 0)
    cout << "The day on the date: " << Day << "/" << Month << "/" << Year << " is Friday " << endl;




    return 0;


}
