#include <iostream>
using namespace std;

// find smallest and largest valuse;

int findSmallandLArgestValue() {
    int marks[] = {99, 54, 56, 76, 65};
    int size = sizeof(marks) / sizeof(int);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i = 0; i < size; i++) {
        // if(marks[i] < smallest) {
        //     smallest = marks[i];
        // }
        // or
        smallest = min(marks[i], smallest);

        // if(marks[i] > largest) {
        //     largest = marks[i];
        // }
        // or

        largest = max(marks[i], largest);
    }
    cout << "Size of marks is " << sizeof(marks) / sizeof(int) << endl;
    cout << "Smallest value is " << smallest << endl;
    cout << "largest value is " << largest << endl;
    return 0;
}

//pass by reference (ishame main data ko dusare function me direct pass kar dete h to main function me bhi data updated milta h)
void passByReference(int arr[], int sz) {
    cout << "called change function \n";
    for(int i = 0; i < sz; i++) {
        arr[i] = arr[i] * 2;
    }
}

//pass by value (ishame main data ko dusare function me direct pass kar dete h to main function me bhi data updated milta h)
void passByValue(int a) {
    cout << "called passByValue function \n";
    a = 5; // a value updated only in this scope;
}

//Linear Search
int findTargetValue(int arr[], int sz, int targ ) {
    for(int i = 0; i < sz; i++) {
        if(arr[i] == targ){
            return i;
        }
    }
    return -1;
}

int main() {
    findSmallandLArgestValue();
    int arr[] = {1, 2, 3}; // non-primitive data type Mutable (the value or properties can be modified). 
    int sz = sizeof(arr) / sizeof(int);
     cout << "in main function arr size " << sz << endl;
    passByReference(arr, sz);
    cout << "in main function \n";
    for(int i = 0; i < sz; i++) {
        cout << arr[i] << ", "; // value is changed;
    }
    cout << "in main function pass by value \n";
    int a = 2;   // primitive data type Immutable (cannot be changed).
    passByValue(a);
    cout << "in main function print a value " << a << endl; // a value is not changed;

    //Linear Search examples bellow;
    // Find target value any value in array;
    int valIndx = findTargetValue(arr, sz, 2);
    cout << "Find 2 in array " << valIndx << endl;//
}