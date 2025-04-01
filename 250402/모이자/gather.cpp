#include <iostream>
#include <climits>

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int min_dist = INT_MAX;
    for (int i=0; i<n; i++) {
        int dist = 0;
        for (int j=0; j<n; j++)
            dist += j * abs(A[i] - A[j]);

        min_dist = min(min_dist, dist);
    }

    cout << min_dist;
    return 0;
}