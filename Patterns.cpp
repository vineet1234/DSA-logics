#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Please provide any number:- "; 
    cin >> n;

    // Print Hollow Diamond Pattern;                                           
    for(int i = 1; i <= n; i++) {
        for(int j = n; j > i; j--) {
            cout << " ";
        }
        cout << "*";
        for(int j = 1; j < (i - 1) * 2; j++) {
            cout << " ";
            
        }
        if(i > 1) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n -1; i >= 1; i--) {
        for(int j = n; j > i; j--) {
            cout << " "; 
        }
        cout << "*";
        for(int j = 1; j < (i - 1) * 2; j++) {
            cout << " ";
        }
        if(i > 1) {
            cout << "*";
        }
        
        cout << endl;
    }

    // Print Butterfly Pattern;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        for(int j = n; j > i; j--) {
            cout << " ";
        }
        for(int j = n; j > i; j--) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
      for(int i = n; i >= 1; i--) {
        for(int j = i; j >= 1 ; j--) {
            cout << "*";
        }
        for(int j = n; j > i; j--) {
            cout << " ";
        }
        for(int j = n; j > i; j--) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    } 
    return 0;
}