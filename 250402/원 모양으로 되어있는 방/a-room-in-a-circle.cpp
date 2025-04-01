#include <iostream>
#include <climits>

using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int min_dist = INT_MAX;
    for (int i=0; i<n; i++) {
        int dist = 0;
        for (int j=0; j<n; j++) {
            dist += a[j] * ((j-i) >= 0 ? (j - i) : (n - i + j));
        }

        min_dist = min(min_dist, dist);
    }

    cout << min_dist;
    return 0;
}