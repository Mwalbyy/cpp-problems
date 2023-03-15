/////////////////////////////////////////////////////////////////////////////////////////
// TEST
/////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {

//     double
//         mealCharge = 44.50,
//         taxPercentage = .0675,
//         taxTotal,
//         tipPercentage = .15,
//         tipTotal,
//         totalBill;

//     taxTotal = mealCharge * taxPercentage;

//     tipTotal = (taxTotal + mealCharge) * tipPercentage;

//     totalBill = mealCharge + taxTotal + tipTotal;

//     cout << "your meal was $" << mealCharge << ", was taxed $" << taxTotal
//          << ", and included tip $" << tipTotal << ". bringing your total cost to $" << totalBill;
// }

/////////////////////////////////////////////////////////////////////////////////////////
// TEST
/////////////////////////////////////////////////////////////////////////////////////////
// 1.

// #include<iostream>
// using namespace std;

// int main(){

//     int base, height, area;

//     cout << "What is the base of the triangle?\n";
//     cin >> base;

//     cout << "What is the height of the triangle?\n";
//     cin >> height;

//     area = .5 * base * height;

//     cout << "The area of the triangle is " << area << endl;
//     return 0;

// }

// ------------------------------------------------------------------------------------
// 2.

// #include<iostream>
// using namespace std;

// int main(){

// int bal,  finalBal, interestEarned ;
// float rate;

// cout << "What is your starting balance?\n";
// cin >> bal;

// cout << "What is your annual interest rate?\n";
// cin >> rate;

// finalBal = bal * (rate / 100 + 1);

// interestEarned = finalBal - bal;

// cout << "after 1 year, you will have $" << finalBal << endl;

// cout << "this means that you netted $" << interestEarned << " from interest";
// return 0;

// }
// ------------------------------------------------------------------------------------
// 3.

// #include<iostream>
// using namespace std;

// int main(){

//     float distance, speed, time;

//     cout << "What is the distance to your destination in miles?\n";
//     cin >> distance;

//     cout << "What will your average speed be in Mph?\n";
//     cin >> speed;

//     time = distance / speed;

//     cout << "your will reach your destination in " << (time * 60) << " minutes";

//     return 0;

// }

//  ------------------------------------------------------------------------------------
// 4.
// #include<iostream>
// using namespace std;

// int main(){

//     float semOne, semTwo, semThr, final, avg;

//     cout << "Please tell me your test scores from semesters 1-3\n";
//     cin >> semOne;
//     cin >> semTwo;
//     cin >> semThr;

//     cout << "Please tell me your test score for your final exam\n";
//     cin >> final;

//     avg = (semOne + semTwo + semThr + (final * 2)) / 5;

//     cout << "Your average score for the year is " << avg << "%\n";

//     return 0;
// }

//  ------------------------------------------------------------------------------------
// 5.

// #include<iostream>
// using namespace std;

// int main(){

// float cost, totalCost, taxRate;
// int quantity;

// cout << "How much does the item you are buying cost?\n";
// cin >> cost;

// cout << "How many of this item are you purchasing?\n";
// cin >> quantity;

// taxRate = 1.06;

// totalCost = (cost * quantity) * taxRate;

// cout << "Your total cost including tax is $" << totalCost;

// return 0;
// }

//  ------------------------------------------------------------------------------------
// 6.

// #include <iostream>
// using namespace std;

// int main()
// {

//     int intX, intY, answer;
//     string result;

//     cout << "please enter two numbers you would like to divide\n";
//     cin >> intX;
//     cin >> intY;

//     if (intY == 0){cout << "Unable to perform the division";}

//         answer = intX / intY;

//         cout << "your answer is: " << answer;

//     return 0;
// }
//  ------------------------------------------------------------------------------------
// Chapter 2. HW
//  ------------------------------------------------------------------------------------
// 1.
// #include <iostream>
// using namespace std;

// int main()
// {

//     int valueOne = 50, valueTwo = 100, total;

//     total = valueOne + valueTwo;

//     cout << total;

//     return 0;

// }

//  ------------------------------------------------------------------------------------
// 2.
// #include <iostream>
// using namespace std;

// int main()
// {

//     int gallons = 16, miles = 312, mpg;

//     mpg = miles / gallons;

//     cout << "your car gets " << mpg << " miles per gallon";

//     return 0;

// }

//  ------------------------------------------------------------------------------------
// 2.

// #include <iostream>
// using namespace std;

// int main()
// {

//     double pantPrice = 103.45, pantQuantity, shirtPrice = 54.32, shirtQuantity,
//            hatPrice = 34.56, hatQuantity, tax = 1.0725, total, taxTotal,
//            grandTotal;

//     cout << "How many pants did you sell this week?\n";
//     cin >> pantQuantity;

//     cout << "How many shirts did you sell this week?\n";
//     cin >> shirtQuantity;

//     cout << "How many hats did you sell this week?\n";
//     cin >> hatQuantity;

//     total = (pantPrice * pantQuantity) + (shirtPrice * shirtQuantity) +
//             (hatPrice * hatQuantity);

//     grandTotal = total * tax;

//     taxTotal = grandTotal - total;

//     cout << "Carson clothing company sold $" << total
//          << " worth of clothes before tax,\n"
//          << "$" << taxTotal << " in tax dollars, bringing the grand total too $"
//          << grandTotal;

//     return 0;
// }

// =====================================================================================

// #include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <string>
// using namespace std;

// int main() {

//   char
//   fNameOne[30],
//   lNameOne[30],
//   fNameTwo[30],
//   lNameTwo[30],
//   fNameThr[30],
//   lNameThr[30]
//   ;

//   int
//   hitsOne,
//   hitsTwo,
//   hitsThr,
//   totalHits
//   ;

//   double
//   appearancesOne,
//   appearancesTwo,
//   appearancesThr,
//   avgOne,
//   avgTwo,
//   avgThr,
//   totalAppearances,
//   totalAvg
//   ;

//   cout << "enter batter 1's first name :\n";
//   cin >> fNameOne;

//   cout << "enter batter 1's Last name :\n";
//   cin >> lNameOne;

//   cout << "How many appearances did batter 1 have? :\n";
//   cin >> appearancesOne;

//   cout << "How many hits did batter 1 have? :\n";
//   cin >> hitsOne;

//   cout << "enter batter 2's first name :\n";
//   cin >> fNameTwo;

//   cout << "enter batter 2's Last name :\n";
//   cin >> lNameTwo;

//   cout << "How many appearances did batter 2 have? :\n";
//   cin >> appearancesTwo;

//   cout << "How many hits did batter 2 have? :\n";
//   cin >> hitsTwo;

//   cout << "enter batter 3's first name :\n";
//   cin >> fNameThr;

//   cout << "enter batter 3's Last name :\n";
//   cin >> lNameThr;

//   cout << "How many appearances did batter 3 have? :\n";
//   cin >> appearancesThr;

//   cout << "How many hits did batter 3 have? :\n";
//   cin >> hitsThr;

//   strcat(fNameOne, " ");
//   strcat(fNameTwo, " ");
//   strcat(fNameThr, " ");

//   avgOne =  static_cast<double>(hitsOne) / appearancesOne;
//   avgTwo =  static_cast<double>(hitsTwo) / appearancesTwo;
//   avgThr =  static_cast<double>(hitsThr) / appearancesThr;

//   totalHits = hitsOne + hitsTwo + hitsThr;

//   totalAppearances = appearancesOne + appearancesTwo + appearancesThr;

//   totalAvg = static_cast<double>(totalHits) / totalAppearances;

//   cout << "----------------------------------\n";

//   cout << "the averages of each player are as follows\n"
//        << strcat(fNameOne,lNameOne) << ": " << setprecision(3) << avgOne <<".\n"
//        << strcat(fNameTwo,lNameTwo) << ": " << setprecision(3) << avgTwo <<".\n"
//        << strcat(fNameThr,lNameThr) << ": " << setprecision(3) << avgThr <<".\n"
//        ;

//   cout << "----------------------------------\n";

//   cout << "the combined stats of all players are as follows\n "
//        << "total hits: "<< setprecision(9) << totalHits << "\n"
//        << " total appearances: " << totalAppearances << "\n"
//        << "average: " << setprecision(3) << totalAvg << "\n"
//        ;

//   cout << "----------------------------------\n";

//   return 0;
// }
// ////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int books;
//     int months;
//     double perMonth;

//     cout << "hi";
//     cin >> books;

//     cout << "hi";
//     cin >> months;

//     perMonth = books / months;

//     cout << "check" << perMonth;

//     return 0;

// }
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    const double
        TEST_WEIGHT = .6,
        QUIZ_WEIGHT = .2,
        HOME_WEIGHT = .1,
        ATTENDANCE_WEIGHT = .1;

    double
        testOne,
        testTwo,
        testThr,
        quizOne,
        quizTwo,
        quizThr,
        homeOne,
        homeTwo,
        homeThr,
        attendance,
        testAvg,
        quizAvg,
        homeAvg,
        testScoreTotal,
        quizScoreTotal,
        homeScoreTotal,
        attendanceScore,
        testScoreWeighted,
        quizScoreWeighted,
        homeScoreWeighted,
        attendanceScoreWeighted,
        averageWeighted,
        average;

    string grade;

    /* 
    Example output shown in Moodle displays a left justified header "INPUT etc." with white space 
    coming before it. I used the code -{setw(8) << " "}- to create the white space before showing the header.
    just leaving a comment to explain the weird code that is probably not needed, but I used to replicate the 
    example as best I could.

    you probably just typed the example output... I've done too much to go back lol
    */

    cout << setw(8) << " " << "INPUT THE TEST DATA \n";
    cout << setw(40) << left << "Enter the grade for test 1: ";
    cin >> testOne;
    cout << setw(40) << left << "Enter the grade for test 2: ";
    cin >> testTwo;
    cout << setw(40) << left << "Enter the grade for test 3: ";
    cin >> testThr;

    cout << "-------------------------------------------------------\n";

    cout << setw(8) << " " << "INPUT THE QUIZ DATA \n";
    cout << setw(40) << left << "Enter the grade for quiz 1: ";
    cin >> quizOne;
    cout << setw(40) << left << "Enter the grade for quiz 2: ";
    cin >> quizTwo;
    cout << setw(40) << left << "Enter the grade for quiz 3: ";
    cin >> quizThr;

    cout << "-------------------------------------------------------\n";

    cout << setw(8) << " " << "INPUT THE HOMEWORK DATA \n";
    cout << setw(40) << left << "Enter the grade for homework 1: ";
    cin >> homeOne;
    cout << setw(40) << left << "Enter the grade for homework 2: ";
    cin >> homeTwo;
    cout << setw(40) << left << "Enter the grade for homework 3: ";
    cin >> homeThr;

    cout << "-------------------------------------------------------\n";

    cout << setw(8) << " " << "Input the Attendance Data \n";
    cout << setw(40) << left << "Enter the grade for attendance 1: ";
    cin >> attendance;

    cout << "-------------------------------------------------------\n";

    testScoreTotal = testOne + testTwo + testThr;
    testAvg = testScoreTotal / 3;
    testScoreWeighted = (testScoreTotal / 3) * TEST_WEIGHT;

    quizScoreTotal = quizOne + quizTwo + quizThr;
    quizAvg = quizScoreTotal / 3;
    quizScoreWeighted = (quizScoreTotal / 3) * QUIZ_WEIGHT;

    homeScoreTotal = homeOne + homeTwo + homeThr;
    homeAvg = homeScoreTotal / 3;
    homeScoreWeighted = (homeScoreTotal / 3) * HOME_WEIGHT;

    attendanceScoreWeighted = attendance * ATTENDANCE_WEIGHT;

    average = homeScoreWeighted + testScoreWeighted + quizScoreWeighted + attendanceScoreWeighted;

    if (average >= 90)
    {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {grade = 'F';}

    cout << setw(25) << " " << "Results:\n";

    cout << setw(40) << left << "Test Average: " << fixed << setprecision(2) << testAvg << "\n";
    cout << setw(40) << left << "Quiz Average: " << quizAvg << "\n";
    cout << setw(40) << left << "Homework Average: " << homeAvg << "\n";
    cout << setw(40) << left << "Attendance Average: " << attendance << "\n";

    cout << "-------------------------------------------------------\n";

    cout << setw(25) << " " << "Grade Calculation:\n";
    cout << "\n";
    cout << setw(40) << left << "Weighted Average: " << testScoreWeighted << " + " << quizScoreWeighted << " + " << homeScoreWeighted << " + " << attendanceScoreWeighted << " = " << average << "\n";
    cout << setw(40) << left << "Grade Earned: " << grade;
}

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     double
//         taxRateTotal = 1.06,
//         countyRate = 1.02,
//         stateRate = 1.04,
//         grandTotal,
//         countyTax,
//         stateTax,
//         totalTax,
//         sales;

//     int year;

//     char month[9];

//     cout << "please enter the month and year\n";
//     cout << "month: ";
//     cin >> month;
//     cout << "year: ";
//     cin >> year;
//     cout << "please enter the total income you made for the month: \n";
//     cout << "\n";

//     cin >> sales;

//     stateTax = sales * stateRate;

//     countyTax = sales * countyRate;

//     totalTax = stateTax + countyTax;

//     grandTotal = sales * taxRateTotal;

//     cout << "Month: " << month << " " << year << "\n";
//     cout << "\n";
//     cout << "---------------------------------------\n";
//     cout << "\n";
//     cout << setw(20) << left << "Total Collected: " << setw(10) << right << "$ " << grandTotal << "\n";
//     cout << "\n";
//     cout << setw(20) << left << "Sales: " << setw(10) << right << "$ " << sales << "\n";
//     cout << "\n";
//     cout << setw(20) << left << "County Sales Tax: " << setw(10) << right << "$ " << countyTax << "\n";
//     cout << "\n";
//     cout << setw(20) << left << "State Sales Tax: " << setw(10) << right << "$ " << stateTax << "\n";
//     cout << "\n";
//     cout << setw(20) << left << "Total Sales Tax: " << setw(10) << right << "$ " << totalTax << "\n";

//     return 0;
// }