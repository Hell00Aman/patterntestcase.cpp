#include <bits/stdc++.h>
using namespace std;

// Function to print a square pattern of stars
void print1(int n) {
    // Outer loop controls the number of rows
    for (int i = 0; i < n; i++) {
        // Inner loop controls the number of columns
        for (int j = 0; j < n; j++) {
            cout << "* ";  // Print star with space
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    int t;
    cin >> t;  // Take number of test cases
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;        // Take input for size of pattern
        print1(n);       // Call function to print pattern
    }
    return 0;
}
