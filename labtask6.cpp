#include <iostream>
#include "utilities.h"
using namespace std;


int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {1, 2, 2, 3, 3, 4};
    int arr3[] = {};

    cout << "Test Case 1 (Unique mode): ";
    findMode(arr1, 5);

    cout << "Test Case 2 (Multiple modes): ";
    findMode(arr2, 6);

    cout << "Test Case 3 (Empty array): ";
    findMode(arr3, 0);

    return 0;
}
