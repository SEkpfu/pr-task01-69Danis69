#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double h[100], r[100], s[100], t[100];
    for (int i = 0; i < n; i++) cin >> h[i] >> r[i];
    for (int i = 0; i < n; i++) {
        s[i] = h[i] * r[i];
        t[i] = s[i] * 0.87;
    }
    for (int i = 0; i < n; i++) cout << s[i] << " " << t[i] << endl;
    double mn = s[0], mx = s[0], sum = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] < mn) mn = s[i];
        if (s[i] > mx) mx = s[i];
        sum += t[i];
    }
    cout << mn << endl << mx << endl << sum;
    return 0;
}