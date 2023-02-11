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

//     int bal,  finalBal, interestEarned ;
//     float rate;

//     cout << "What is your starting balance?\n";
//     cin >> bal;

//     cout << "What is your annual interest rate?\n";
//     cin >> rate;

//     finalBal = bal * (rate / 100 + 1);

//     interestEarned = finalBal - bal;

//     cout << "after 1 year, you will have $" << finalBal << endl;

//     cout << "this means that you netted $" << interestEarned << " from interest";
//     return 0;

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

//     float cost, totalCost, taxRate;
//     int quantity;

//     cout << "How much does the item you are buying cost?\n";
//     cin >> cost;

//     cout << "How many of this item are you purchasing?\n";
//     cin >> quantity;

//     taxRate = 1.06;

//     totalCost = (cost * quantity) * taxRate;

//     cout << "Your total cost including tax is $" << totalCost;

//     return 0;
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
#include <iostream>
using namespace std;

int main()
{

    int gallons = 16, miles = 312, mpg;

    mpg = miles / gallons;

    cout << "your car gets " << mpg << " miles per gallon";

    return 0;

}

