#include <bits/stdc++.h>
using namespace std;

int main() {
    int *a = new int[3];
    int *b = new int[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;
    a = new int[5];
    for (int i = 0; i < 3; i++) {
        a[i] = b[i];
    }
    delete[] b;
    int n;
    cin >> n;
    int *c = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    
    int *newArray = new int[3 + n];
    for (int i = 0; i < 3; i++) {
        newArray[i] = a[i];
    }
    for (int i = 0; i < n; i++) {
        newArray[3 + i] = c[i];
    }
    
    delete[] a;
    delete[] c;
    
    // Print the elements of the new array
    for (int i = 0; i < 3 + n; i++) {
        cout << newArray[i] << " ";
    }
    
    delete[] newArray;
    
    return 0;
}
