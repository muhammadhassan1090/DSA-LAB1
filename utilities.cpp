#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>
using namespace std; 

int Indices(int arr[], int size, int key, int Indices[]) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            Indices[count] = i;
            count++;
        }
    }
    return count;
}

void TestCaseEmpty() {
    int array[] = {};
    int size = 0;
    int key = 9;
    int indices[] = {};
    int count = Indices(array, size, key, indices);
    int sizee = sizeof(indices) / sizeof(indices[0]);
    if (sizee == 0) {
        cout << "Test Case 1 : Passes" << endl;
    }
    else { cout << "Test Case 1 : Failed";}
}


void TestCaseNo() {
    int array[] = { 1, 2, 3, 4,5, 6, };
    int size = 6;
    int key = 9;
    int indices[6];
    int count = Indices(array, size, key, indices);
    if (count == 0) {
        cout << "Test Case 2 : Passes" << endl;
    }
    else { cout << "Test Case 3 : Failed";}
}

void TestCaseMultiple() {
    int array[] = { 1, 2, 3, 4,5, 5, 5, 6 };
    int size = 8;
    int key = 5;
    int indices[8];
    int count = Indices(array, size, key, indices);
    if (count != 0 && count != 1) {
        cout << "Test Case 3 : Passes" << endl;
    }
    else { cout << "Test Case 3 : Failed";}

}


int naiveSearch(string text, string pattern) {
    if (pattern.empty())
        return 0;

    int n = text.size();
    int m = pattern.size();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i;
    }
    return -1;
}

void generatePascalsTriangle(int n) {
    int triangle[5][5]; 

    for (int i = 0; i < n; i++) {
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

void findMode(int arr[], int n) {
    if (n == 0) {
        cout << "(empty)" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    int maxFreq = 1, currentFreq = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentFreq++;
        } else {
            if (currentFreq > maxFreq) maxFreq = currentFreq;
            currentFreq = 1;
        }
    }
    if (currentFreq > maxFreq) maxFreq = currentFreq;

    
    currentFreq = 1;
    for (int i = 1; i <= n; i++) {
        if (i < n && arr[i] == arr[i - 1]) {
            currentFreq++;
        } else {
            if (currentFreq == maxFreq) cout << arr[i - 1] << " ";
            currentFreq = 1;
        }
    }
    cout << endl;
}

#endif
