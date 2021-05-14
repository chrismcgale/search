#include <iostream>
using std::cout;
using std::endl;

//A must be sorted array of size n
//Change to return m if desired
void interpolationSearch(int* A, int n, int t)
{
    int l = 0, r = n - 1;
    while(l <= r) {
        if (t < A[l] || t > A[r]) {
            cout << "Not found!" << endl;
            return;
        }
        if (A[l] == A[r]) {
            cout << "Found at index" << l << endl;
            return;
        }
        int m = l + (t - A[l]) / (A[r] - A[l]) * (r - l);
        if (A[m] < t) l = m + 1;
        else if (t < A[m]) r = m - 1;
        else {
            cout << "Found at index" << m << endl;
            return;
        }
    }
    //Always returns somewhere within the loop
}
