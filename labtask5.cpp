#include <iostream>
#include "utilities.h"
using namespace std;


int main() {
    cout << "Test Case 1 (n = 0):" << endl;
    generatePascalsTriangle(0);

    cout << "Test Case 2 (n = 1):" << endl;
    generatePascalsTriangle(1);

    cout << "Test Case 3 (n = 5):" << endl;
    generatePascalsTriangle(5);

    return 0;
}
