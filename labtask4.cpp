#include <iostream>
#include <string>
#include "utilities"
using namespace std;


int main() {
    cout << "Test Case 1 (Pattern at beginning): "
         << naiveSearch("hello world", "hello") << endl;

    cout << "Test Case 2 (Pattern at end): "
         << naiveSearch("hello world", "world") << endl;

    cout << "Test Case 3 (Pattern not present): "
         << naiveSearch("hello world", "bye") << endl;

    cout << "Test Case 4 (Empty pattern): "
         << naiveSearch("hello world", "") << endl;

    return 0;
}
