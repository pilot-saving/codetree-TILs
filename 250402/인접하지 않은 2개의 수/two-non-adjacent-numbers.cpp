#include <iostream>
#include <climits>

using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Please write your code here.
    int ans = INT_MIN;
    for (int i=0; i<n; i++) {
        for (int j=2; j<n; j++) {
            if (j-i > 1) ans = max(ans, numbers[i] + numbers[j]);
        }
    }

    cout << ans;
    return 0;
}