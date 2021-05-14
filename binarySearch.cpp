#include <iostream>
using std::cout;
using std::endl;

//A must be sorted array of size n
//Change to return m if desired
void binarySearch(int* A, int n, int t)
{
    int l = 0, r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if (A[m] < t) l = m + 1;
        else if (t < A[m]) r = m - 1;
        else {
            cout << "Found at index" << m << endl;
            return;
        }
    }
    cout << "Not found, but would be between " << l - 1 << " and " << l << endl;
}
