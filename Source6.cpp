#include <iostream>
#include <cstring>
using namespace std;
int main() {
    double h1, r1, h2, r2;
    cin >> h1 >> r1 >> h2 >> r2;
    double s1 = h1 * r1, s2 = h2 * r2;
    double n1 = s1 * 0.87, n2 = s2 * 0.87;
    char a[21], b[21];
    cin >> a >> b;
    if (n1 < 1000) cout << a << endl;
    if (n2 < 1000) cout << b << endl;
    if (n1 < 50) cout << a[0] << a[strlen(a) - 1] << endl;
    if (n2 < 50) cout << b[0] << b[strlen(b) - 1] << endl;
    return 0;
}