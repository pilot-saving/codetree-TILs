#include <iostream>
#include <climits>

using namespace std;

int n;
int arr[20];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans = INT_MIN;
    for (int i=0; i<n-2; i++) {
        for (int j=i+1; j<n-1; j++) {
            for (int k=j+1; k<n; k++) {
                bool carry = false;
                int digits = 10;
                int std = max(arr[i], max(arr[j], arr[k]));
                int a = arr[i];
                int b = arr[j];
                int c = arr[k];

                while (!carry && a && b && c) {
                    int sum = (a % digits) + (b % digits) + (c % digits);
                    if (sum >= 10) carry = true;
                    else {
                        a /= digits;
                        b /= digits;
                        c /= digits;
                    }
                }

                if (!carry) ans = max(ans, arr[i] + arr[j] + arr[k]);
            }
        }
    }

    cout << ans;
    return 0;
}