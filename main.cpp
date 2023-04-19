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

// #include <iostream>
// #include <iomanip>
// #include <cmath>
// #include <string>
// using namespace std;

// int main()
// {
//     const double
//         TEST_WEIGHT = .6,
//         QUIZ_WEIGHT = .2,
//         HOME_WEIGHT = .1,
//         ATTENDANCE_WEIGHT = .1;

//     double
//         testOne,
//         testTwo,
//         testThr,
//         quizOne,
//         quizTwo,
//         quizThr,
//         homeOne,
//         homeTwo,
//         homeThr,
//         attendance,
//         testAvg,
//         quizAvg,
//         homeAvg,
//         testScoreTotal,
//         quizScoreTotal,
//         homeScoreTotal,
//         attendanceScore,
//         testScoreWeighted,
//         quizScoreWeighted,
//         homeScoreWeighted,
//         attendanceScoreWeighted,
//         averageWeighted,
//         average;

//     string grade;

//     cout << setw(8) << " " << "INPUT THE TEST DATA \n";
//     cout << setw(40) << left << "Enter the grade for test 1: ";
//     cin >> testOne;
//     cout << setw(40) << left << "Enter the grade for test 2: ";
//     cin >> testTwo;
//     cout << setw(40) << left << "Enter the grade for test 3: ";
//     cin >> testThr;

//     cout << "-------------------------------------------------------\n";

//     cout << setw(8) << " " << "INPUT THE QUIZ DATA \n";
//     cout << setw(40) << left << "Enter the grade for quiz 1: ";
//     cin >> quizOne;
//     cout << setw(40) << left << "Enter the grade for quiz 2: ";
//     cin >> quizTwo;
//     cout << setw(40) << left << "Enter the grade for quiz 3: ";
//     cin >> quizThr;

//     cout << "-------------------------------------------------------\n";

//     cout << setw(8) << " " << "INPUT THE HOMEWORK DATA \n";
//     cout << setw(40) << left << "Enter the grade for homework 1: ";
//     cin >> homeOne;
//     cout << setw(40) << left << "Enter the grade for homework 2: ";
//     cin >> homeTwo;
//     cout << setw(40) << left << "Enter the grade for homework 3: ";
//     cin >> homeThr;

//     cout << "-------------------------------------------------------\n";

//     cout << setw(8) << " " << "Input the Attendance Data \n";
//     cout << setw(40) << left << "Enter the grade for attendance 1: ";
//     cin >> attendance;

//     cout << "-------------------------------------------------------\n";

//     testScoreTotal = testOne + testTwo + testThr;
//     testAvg = testScoreTotal / 3;
//     testScoreWeighted = (testScoreTotal / 3) * TEST_WEIGHT;

//     quizScoreTotal = quizOne + quizTwo + quizThr;
//     quizAvg = quizScoreTotal / 3;
//     quizScoreWeighted = (quizScoreTotal / 3) * QUIZ_WEIGHT;

//     homeScoreTotal = homeOne + homeTwo + homeThr;
//     homeAvg = homeScoreTotal / 3;
//     homeScoreWeighted = (homeScoreTotal / 3) * HOME_WEIGHT;

//     attendanceScoreWeighted = attendance * ATTENDANCE_WEIGHT;

//     average = homeScoreWeighted + testScoreWeighted + quizScoreWeighted + attendanceScoreWeighted;

//     if (average >= 90)
//     {
//         grade = 'A';
//     } else if (average >= 80) {
//         grade = 'B';
//     } else if (average >= 70) {
//         grade = 'C';
//     } else if (average >= 60) {
//         grade = 'D';
//     } else {grade = 'F';}

//     cout << setw(25) << " " << "Results:\n";

//     cout << setw(40) << left << "Test Average: " << fixed << setprecision(2) << testAvg << "\n";
//     cout << setw(40) << left << "Quiz Average: " << quizAvg << "\n";
//     cout << setw(40) << left << "Homework Average: " << homeAvg << "\n";
//     cout << setw(40) << left << "Attendance Average: " << attendance << "\n";

//     cout << "-------------------------------------------------------\n";

//     cout << setw(25) << " " << "Grade Calculation:\n";
//     cout << "\n";
//     cout << setw(40) << left << "Weighted Average: " << testScoreWeighted << " + " << quizScoreWeighted << " + " << homeScoreWeighted << " + " << attendanceScoreWeighted << " = " << average << "\n";
//     cout << setw(40) << left << "Grade Earned: " << grade;
// }

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

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     double
//         lengthOne,
//         lengthTwo,
//         widthOne,
//         widthTwo,
//         areaOne,
//         areaTwo;

//     cout << "please enter the length of rectangle one: ";
//     cin >> lengthOne;
//     cout << "please enter the width of rectangle one: ";
//     cin >> widthOne;

//     cout << "please enter the length of rectangle two: ";
//     cin >> lengthTwo;
//     cout << "please enter the width of rectangle two: ";
//     cin >> widthTwo;

//     areaOne = lengthOne * widthOne;
//     areaTwo = lengthTwo * widthTwo;

//     if (areaOne == areaTwo)
//     {
//         cout << "The rectangles have the exact same area";
//     }
//     else if (areaOne > areaTwo)
//     {
//         cout << "Rectangle one has a greater area than rectangle two";
//     }
//     else
//     {
//         cout << "Rectangle two has a greater area than rectangle one";
//     }

//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     int booksPurchased;

//     cout << "How many books did you purchase?: ";
//     cin >> booksPurchased;

//     if (booksPurchased != 0)
//     {

//         if (booksPurchased == 1)
//         {
//             cout << "You earned 5 points this month!";
//         }
//         else if (booksPurchased == 2)
//         {
//             cout << "You earned 15 points this month!";
//         }
//         else if (booksPurchased == 3)
//         {
//             cout << "You earned 30 points this month!";
//         }
//         else if (booksPurchased >= 4)
//         {
//             cout << "You earned 50 points this month!";
//         }
//     }
//     else
//     {
//         cout << "purchase a book to begin earning points!";
//     }

//     return 0;
// }
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
/*=====================
-----------------------
|Sub     |Freeze|Boil |
-----------------------
|Oxygen  |-362  |-306 |
-----------------------
|Ethyl   |-173  |172  |
-----------------------
|Water   |32    |212  |
-----------------------
|Mercury |-38   |676  |
-----------------------
======================*/
//     int
//         temp,
//         ethylFreeze = -173,
//         ethylBoil = 172,
//         mercuryFreeze = -38,
//         mercuryBoil = 676,
//         oxygenFreeze = -362,
//         oxygenBoil = -306,
//         waterFreeze = 32,
//         waterBoil = 212;

//     cout << "enter a temperature in fahrenheit to check the reaction Oxygen, Ethyl alcohol, Mercury, and Water have at said temperature: ";
//     cin >> temp;

//     cout << "\n=====================================\n";

//     // checks what substances freeze at given temp
//     if (temp <= oxygenFreeze)
//     {
//         cout << "Oxygen, Ethyl alcohol, Mercury, and Water all freeze at that temperature\n";
//     }
//     else if (temp <= ethylFreeze)
//     {
//         cout << "Ethyl alcohol, Mercury, and Water all freeze at that temperature\n";
//     }
//     else if (temp <= mercuryFreeze)
//     {
//         cout << "Mercury, and Water freeze at that temperature\n";
//     }
//     else if (temp <= waterFreeze)
//     {
//         cout << "Water freezes at that temperature\n";
//     }
//     else
//     {
//         cout << "nothing listed freezes at that temperature\n";
//     }

//     // checks what substances freeze at given temp
//     if (temp >= mercuryBoil)
//     {
//         cout << "Oxygen, Ethyl alcohol, Mercury, and Water all boil at that temperature\n";
//     }
//     else if (temp >= waterBoil)
//     {
//         cout << "Ethyl alcohol, Oxygen, and Water all boil at that temperature\n";
//     }
//     else if (temp >= ethylBoil)
//     {
//         cout << "Ethyl alcohol, and Oxygen boil at that temperature\n";
//     }
//     else if (temp >= oxygenBoil)
//     {
//         cout << "Oxygen boils at that temperature\n";
//     }
//     else
//     {
//         cout << "nothing listed boils at that temperature\n";
//     }

//     cout << "=====================================";

//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <cstring>
// using namespace std;

// int main()
// {
//     const double
//         A_GIG_LIMIT = 2,
//         B_GIG_LIMIT = 8,
//         A_PLAN = 39.99,
//         B_PLAN = 59.99,
//         C_PLAN = 79.99,
//         A_GIGS = 2,
//         C_GIGS = 8,
//         GIG_COST = 8;
//     double
//         bSaved,
//         cSaved,
//         gigsUsed,
//         overCost,
//         totalCost;

//     char
//         name[20],
//         plan;

//     cout << "Please enter your first name: ";
//     cin >> name;

//     cout << "Please enter which plan you used(A,B,C): ";
//     cin >> plan;

//     cout << "Please enter how many gigs of data you used: ";
//     cin >> gigsUsed;

//     // "!=" was not working, so I used "return 0;" to execute guard clause

//     if (plan == 'c' || plan == 'C')
//     {
//         cout << "Hi " << name << ", Your plan is $" << C_PLAN << " a month";
//         return 0;
//     }

//     // If plan is not 'c' the code below will run.

//     if (plan == 'a' || plan == 'A')
//     {
//         // If the amount of gigs exceeds the given limit, the extra cost will be added and displayed
//         if (gigsUsed > A_GIG_LIMIT)
//         {
//             overCost = (gigsUsed - A_GIG_LIMIT) * GIG_COST;
//             totalCost = overCost + A_PLAN;
//             cout << "Hi " << name << ", your plan cost $" << A_PLAN << " with an additional charge of $"
//                  << overCost << " bringing your total to $" << totalCost << "\n";
//             // if the extra gigs bring the total over the cost of the next plan up, the code below will show potential savings
//             if (totalCost > B_PLAN)
//             {
//                 bSaved = totalCost - B_PLAN;
//                 cout << fixed << setprecision(2) << "You could have saved $" << bSaved << " if you switched to B plan\n";
//                 if (totalCost > C_PLAN)
//                 {
//                     cSaved = totalCost - C_PLAN;
//                     cout << fixed << setprecision(2) << "You could have saved $" << cSaved << " if you switched to C plan";
//                     return 0;
//                 }
//                 else
//                 {
//                     return 0;
//                 }
//             }
//             else
//             {
//                 return 0;
//             }
//         }
//         else
//         {
//             cout << "your plan is $" << A_PLAN << " a month";
//         }
//     }
//     else if (plan == 'b' || plan == 'B')
//     {
//         if (gigsUsed > B_GIG_LIMIT)
//         {
//             overCost = (gigsUsed - B_GIG_LIMIT) * GIG_COST;
//             totalCost = overCost + B_PLAN;
//             cout << fixed << setprecision(2) << "Hi " << name << ", your plan cost $" << B_PLAN << " with an additional charge of $"
//                  << overCost << " bringing your total to $" << totalCost << "\n";

//             if (totalCost > C_PLAN)
//             {
//                 cSaved = totalCost - C_PLAN;
//                 cout << fixed << setprecision(2) << "You could have saved $" << cSaved << " if you switched to C plan\n";
//             }
//         }
//         else
//         {
//             cout << fixed << setprecision(2) << "Hi " << name << ", your plan is $" << B_PLAN << " a month";
//         }
//     }
//     else
//     {
//         cout << "Please enter a valid plan name(A,B,C)";
//     }
// }

// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <cstring>
// using namespace std;

// int main()
// {
//     int index = 32;

//     while (index <= 137)
//     {
//         cout << (char)index << " ";
//         if (index % 16 == 0)
//         {
//             cout << "\n";
//         };
//         index++;
//     }
// }

// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <cstring>
// using namespace std;

// int main()
// {
//     int randomNum,
//         userNum;

//     randomNum = rand() % 100 + 1;

//     cout << "please guess a number from 1-100: \n";
//     cin >> userNum;

//     while(randomNum != userNum) {
//         if(randomNum > userNum) {
//             cout << "Guess Higher!\n";
//             cin >> userNum;
//         } else {
//             cout << "Guess Lower!\n";
//             cin >> userNum;
//         }
//     }

//     cout << "You guessed the correct number!";
// }

// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <cstring>
// using namespace std;

// int main()
// {
//     double numStudents,
//         avgGrade;

//     string grade;

//     cout << "Enter the number of students: ";
//     cin >> numStudents;

//     const int NUM_STUDENTS = numStudents;

//     int *gradesArray = new int[NUM_STUDENTS];

//     for (int i = 1; i <= NUM_STUDENTS; i++)
//     {
//         cout << "Enter the grade for student " << i << ": ";
//         cin >> gradesArray[i];
//     }

//     cout << "\nGrades:\n";

//     int sum = 0;

//     for (int i = 1; i <= NUM_STUDENTS; i++)
//     {
//         sum += gradesArray[i];
//         if (gradesArray[i] >= 90)
//         {
//             grade = 'A';
//         }
//         else if (gradesArray[i] >= 80)
//         {
//             grade = 'B';
//         }
//         else if (gradesArray[i] >= 70)
//         {
//             grade = 'C';
//         }
//         else if (gradesArray[i] >= 60)
//         {
//             grade = 'D';
//         }
//         else
//         {
//             grade = 'F';
//         }

//         cout << "Student " << i << ": " << gradesArray[i] << " (" << grade << ")\n";

//         if (i == NUM_STUDENTS)
//         {
//             avgGrade = sum / NUM_STUDENTS;
//             cout << "\nAverage grade: "
//                  << avgGrade;
//         }
//     }
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     for (int i = 0; i <= 30; i++)
//     {
//         int tempF;
//         tempF = 9/5 * i + 32;

//         cout << i << " celsius ==> " << tempF << " fahrenheit\n";
//     }

// }

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int userNum,
        sum = 0,
        condition = 0;

    cout << "Please enter a positive number: ";
    cin >> userNum;

    while (condition == 0)
    {

        if (userNum > 0)
        {
            condition++;
            for (int i = 0; i < userNum; i++)
            {
                sum += i;
            }
            cout << "your sum is: " << sum;
        }
        else
        {
            cout << "Please enter a positive number: ";
            cin >> userNum;
        }
    }
}