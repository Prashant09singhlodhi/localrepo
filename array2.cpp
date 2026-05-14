#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    // Input rows and columns
    if (!(cin >> n >> m)) return 0;

    int arr[n][m];

    // Input array elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The 2D Array is:" << endl;
    // Output array elements in matrix format
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " "; // Space between numbers
        }
        cout << endl; // New line after each row
    }

    return 0;
}
