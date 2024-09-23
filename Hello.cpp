#include <iostream>
using namespace std;

// Biolerplate Code
// int main()
// {
//     return 0;
// }


int main()
{
    // Primitive Data Type
    int a = 5; // 4 Bite
    char grade = 'A'; // 1 Bite
    float PI = 3.14f; // 4 Bite
    bool isSafe = true; // 1 Bite
    double price = 100.99; //8 Bite
   cout << "Hello DSA \n Learning DSA " << "By Vineet Tiwari \n";

   // type Casting:- "COnvert data from one type to another type"
   // Two Type : (i) conversion type casting (ii) casting;
   // (i) conversional in 'implicit casting cast data small to big
   // Like:- float(4bite) to double(8bite)  easily convert not add any force;
   char newgrade = 'a'; //1 bite
   int value = newgrade; // 4 bite
   // (ii) Casting in 'explicit casting data big to small 
   // Like:- double(8Bite) to int(4Bite) easly not convert add forcefuly;
   double newprice = 100.99;
   int fixprice = (int)newprice;

   //Input examples:- 
   int TeaPrice;
   cout << "Please enter price a cup of tea: ";
   cin >> TeaPrice;
   cout << "A cup of tea only: " << TeaPrice << " rupees" << endl;

   // Operators
    // 1- Arithmetic = +, -, *(multyply, astrick), /, %(moduler)
    int c = 10;
    int d= 5;
    cout << "Addition (sum):- " << (c + d) << endl;
    cout << "Difference:- " << (c - d) << endl;
    cout << "Procuct:- " << (c * d) << endl;
    cout << "Division:- " << (c / d) << endl;
    cout << "Remender (Modulo):- " << (c % d) << endl;

    // 2- Relational = <, <=, >, >=, ==, !==;
    // 4- Logical = OR (|| call pipe), AND (&& call anpersand), NOT (!) if condition true its return false and if condition false teturn True;

    // 5- Unary Operators 
        // a- increment++ Unary Operators; 
                // a++ means kaam then update; post increment operator;
                // ++a means update then kaam; pre increment operator;
    //Ex:- 
    int e = 10;
    int f = e++;
    cout << "Kamm pahle f = " << f << " update baadme e = " << e << endl; 
       int g = 10;
    int h = g++;
    cout << "update pahle g = " << g << " Kamm baadme h = " << h << endl; 
        // b- decrement-- Unary Operators;
                // a-- means kaam then update; post increment operator;
                // --a means update then kaam; pre increment operator;
    
    return 0;
}


// in c++ if any value in int avoid decimal value Like (100.90) show and store 100;
// double newprice = 100.99;
// int fixprice = (int)newprice;
// out put 100;



// Above All code Outputs:- 
// PS D:\DSAPrograms> g++ Hello.cpp && ./a.exe      
// Hello DSA 
// Learning DSA write by Vineet Tiwari  Senior Software Developer as full stack
// Please enter price a cup of tea: 15
// A cup of tea only: 15 rupees
// Addition (sum):- 15
// Difference:- 5
// Procuct:- 50
// Division:- 2
// Remender (Modulo):- 0
// Kamm pahle f = 10 update baadme e = 11
// update pahle g = 11 Kamm baadme h = 10