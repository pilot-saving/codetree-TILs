#include <iostream>
#include <cstring>
#include <bitset>

using namespace std;

string a;

int main() {
    cin >> a;

    // Please write your code here.
    for (int i=0; i<a.length(); i++) {
        if (a[i] == '0') {
            a[i] = '1';
            break;
        }
    }

    bitset<10> bits(a);
    cout << bits.to_ulong();

    return 0;
}