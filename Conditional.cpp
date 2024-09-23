#include <iostream>
using namespace std;

// ASCII values:-
    // A - Z  in 65 -90  Likes  A = 65, B = 66 ...... Z = 90;
    // a - z  in 97 - 122  Likes  a = 97, b = 98 ...... Z = 122;

int main() {
    // Find character lowercase and uppercase;
      cout << "Find character lowercase and uppercase \n";
    char ch;
    cout << "Please enter any charcter: " << endl;
    cin >> ch;
    if(ch >= 'a' && ch <= 'z') {
        cout << "Lowercase \n";
    } else {
        cout << "Uppercase \n";
    }
    // According ASCII values
     cout << "According ASCII values \n";
    if(ch >= 97 && ch <= 122) {
        cout << "Lowercase \n";
    } else {
        cout << "Uppercase \n";
    }


    // While loop 
    // Pirint number 1 to 5;
    int num = 1;
    cout << "Pirint number 1 to 5 \n";
    while(num <= 5) {
        cout << num++ << " ";
    }
    cout << "\n";
    //  for loop
    // for loop for(initialization; condition; updation(increment/decrement);) {
     // work
    // }

    // Check number is prime or not;
    // Number is two types Prime Number and Non-Prime number
// Prime number is [2,3,5,7,9,11 -------n]
    // Factors if number is 7
    // check Factors:-    1 * 7
    //                    7 * 1
    // number of factors 2;
// Non- Prime number is [4,6,8,10,12, .........n]
  // Factors if number is 6
    // check Factors:-    1 * 6
    //                    2 * 3
    //                    3 * 2
    //                    6 * 1
    // number of factors 4;
     cout << "Check number is prime or not \n";
    int n;
     cout << "Please enter any number:- ";
    cin >> n;
    bool isPrime = true;
    for(int i = 2; i <= n-1; i++) {
        if(n % i == 0) {
            isPrime == false;
            break;
        }
    }

    if(isPrime) {
        cout << n << " is prime number \n"; 
    } else {
        cout << n << " is not a prime number \n"; 
    }


  // Find any number Factors 
  cout << "Find any number Factors \n";
   int Fnum;
   cout << "Please enter number:- ";
   cin >> Fnum;
   for(int i = 1; i <= Fnum; i++) {
     if(Fnum % i == 0) {
        cout << "Facor number is " << i << " " << endl;
     }
   }
 cout << "\n Print numbers of start in waries design";
   int start;
   cout << "Please enter number:- ";
   cin >> start;
   for(int i = 1; i <= start; i++) {
     for(int j = 1; j <= i; j++) {
        cout << "* ";
     }
     cout << endl;
   }

   for(int i = start; i >= 1; i--) {
     for(int j = i; j >= 1; j--) {
        cout << "* ";
     }
     cout << endl;
   }

   for(int i = 1; i <= start; i++) {
    for(int k = start - i; k >= 1; k--) {
        cout << "  ";
    }
    for(int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
   }

    for(int i = 1; i <= start; i++) {
        for(int k = start - i; k >= 1; k--) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        for(int k = start - i; k >= 1; k--) {
            cout << " ";
        }
    cout << endl;
   }
    return 0;
}

// infinite loop is never stop because is not find false condition;


// Above All code Outputs:- 
// PS D:\DSAPrograms> g++ Conditional.cpp && ./a.exe
// Find character lowercase and uppercase 
// Please enter any charcter: 
// a
// Lowercase 
// According ASCII values 
// Lowercase 
// Pirint number 1 to 5 
// 1 2 3 4 5 
// Check number is prime or not 
// Please enter any number:- 1
// 1 is prime number 
// Find any number Factors 
// Please enter number:- 1
// Facor number is 1

//  Print numbers of start in waries designPlease enter number:- 5
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
//     *     
//    * *
//   * * *
//  * * * *
// * * * * *