#include <iostream>
#include <bitset>

using namespace std;

string a;

int main() {
    cin >> a;

    // Please write your code here.
    bool changed = false;
    for (int i=0; i<a.length(); i++) {
        if (a[i] == '0') {
            a[i] = '1';
            changed = true;
            break;
        }
    }

    if (!changed) a[a.length()-1] = '0';

    bitset<10> bits(a);
    cout << bits.to_ulong();

    return 0;
}