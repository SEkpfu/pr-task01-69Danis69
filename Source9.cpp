#include <iostream>
using namespace std;
int a[100];
int f1(int n) {
    int x = a[0];
    for (int i = 1; i < n; i++) if (a[i] < x) x = a[i];
    return x;
}
int f2(int n) {
    int x = a[0];
    for (int i = 1; i < n; i++) if (a[i] > x) x = a[i];
    return x;
}
int f3(int n, int y) {
    int c = 0;
    for (int i = 0; i < n; i++) if (a[i] > y) c++;
    return c;
}
int f4(int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    return s;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << f1(n) << endl;
    cout << f2(n) << endl;
    cout << f3(n, 5) << endl;
    cout << f4(n);
    return 0;
}