#include <iostream>
using namespace std;

//Function Santax

// returnType printVineet() {
 //  work // 
 // return [Type];
// }

// int printVineet() {   // return type int;
//  work;
//   return 0;
// }

// char printVineet() {   // return type charcter;
//  work;
//   return 'Vineet';
// }

// bool printVineet() {   // return type boolean;
//  work;
//   return true;
// }

// double printVineet() {   // return type double decimal value;
//  work
//   return 100.99;
// }

// void printVineet() {   // return type void this function does not return any thing jinka return type void hota h vo kuch bhi return nahi karte h;
//  cout << "Vineet Tiwari";
// }

// Pass By Value
// copy of argument is passed to function 
int sum (int a, int b) {
    a = 10;
    b = 20;
    return a + b;

}

// Qs. Calculate sum of digits  of a number 

int calSumOfDigits() {
    int digi = 12345;
    int sum = 0;
    while(digi > 0) {
        int lastdigi = digi % 10;
        digi /= 10;
        sum += lastdigi;
    }
    return sum;
}

//Qs. Calculate nCr binomial coefficient for n and r. // binomial coefficient(द्विपद गुणांक);
//   n                n!
//    C        =  ------------
//      r          r! (n-r)!

//   8                8!               8 * 7 * 6   (8 ka factorial 8 , 7 ,6)
//    C        =  ------------   =   -------------- = 28
//      2          2! (8-2)!           2! * 6!

int findFactorialOfAnyNum(int n) {
    int fac = 1;
    for(int i = 1; i <= n; i++) {
        fac *= i;
    }
    return fac;
}

int nCr(int n, int r) {
    int nFct = findFactorialOfAnyNum(n);
    int rFct = findFactorialOfAnyNum(r);
    int nmr = findFactorialOfAnyNum(n - r);
    int factorial = nFct/(rFct * nmr);
    return factorial;
}

// Print nth Fibonacci(0112358....etc) Ex 0+1= 1+1 = 2 + 1 = 3 + 3 = 5 + 3 = 8......etc // series;
int fibonacci(int n) {
    int fib = 0;
    char ser;
  for(int i = 0; i <= n; i++) {
    //cout << "Print i " << i << endl;
    fib = (fib) + (fib);
    cout << "Print i - fib " << i << fib << endl;
    ser += (char)fib;
    //cout << "Print ser " << ser << endl;
  }
  return ser;
}


int main () {
    //printVineet(); // need call to function beacuse function not call auto maticaly;

    int a = 5;
    int b = 6;
    cout << " sum of a and b according pass by value " <<  sum(a, b) << endl;
    cout << " sum of a and b is " << a + b << endl;

    
    cout << "Calculate sum of 12345  sum is " << calSumOfDigits() << endl;
    cout << "Find nCr binomal coefficient  of n and r where n = 5 and r = 6 " << nCr(a,b) << endl;
    cout << "Print nth Fibonacci  of 7th " << fibonacci(7) << endl;
    return 0;
}