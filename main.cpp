// 1.

#include<iostream>
using namespace std;


int main(){

    int base, height, area;

    cout << "What is the base of the triangle?\n";
    cin >> base;
    
    cout << "What is the height of the triangle?\n";
    cin >> height;

    area = .5 * base * height;

    cout << "The area of the triangle is " << area << endl;
    return 0;
    
}

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
