#include <iostream>
using namespace std;
int main() {
    double h[4][3], r[4];
    for (int i = 0; i < 4; i++) cin >> r[i];
    for (int i = 0; i < 4; i++) for (int j = 0; j < 3; j++) cin >> h[i][j];
    double s[4][3], t[4][3];
    for (int i = 0; i < 4; i++) for (int j = 0; j < 3; j++) {
        s[i][j] = h[i][j] * r[i];
        t[i][j] = s[i][j] * 0.87;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) cout << s[i][j] << " " << t[i][j] << " ";
        cout << endl;
    }
    cout << t[0][1] << endl;
    double sum = 0;
    for (int j = 0; j < 3; j++) sum += s[2][j] * 0.13;
    cout << sum << endl;
    double mx = s[0][2], pos = 0;
    for (int i = 1; i < 4; i++) if (s[i][2] > mx) { mx = s[i][2]; pos = i; }
    cout << pos + 1 << endl;
    double all = 0;
    for (int i = 0; i < 4; i++) for (int j = 0; j < 3; j++) all += s[i][j];
    cout << all;
    return 0;
}