#include<iostream>
#include<vector>
#include<algorithm>  // For sort function
using namespace std;

void assign(int arr[], int n) {
    // Corrected to use std::sort, not 'short'
    sort(arr, arr + n); // Sort the array

    int ans[n]; // Array to store the result
    int ptr1 = 0, ptr2 = n - 1;  // Start and end pointers

    // Traverse through the array
    for (int i = 0; i < n; i++) {
        // Pick alternately from the ends of the sorted array
        if (i % 2 == 0) {
            ans[i] = arr[ptr1++];  // Pick from the start, then increment ptr1
        } else {
            ans[i] = arr[ptr2--];  // Pick from the end, then decrement ptr2
        }
    }

    // Print the resulting array
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 1, 1, 3};
    int n1 = sizeof(arr) / sizeof(arr[0]);  // Size of the array

    assign(arr, n1);  // Call the function

    return 0;
}
