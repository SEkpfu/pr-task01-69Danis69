#include <iostream>
using namespace std;
double f(double h, double r, double p) {
    return h * r * (1 + p / 100);
}
double g(double x) {
    return x * 0.13;
}
double k(double x) {
    return x - g(x);
}
void m(double h, double r, double p) {
    double s = f(h, r, p);
    cout << s << endl;
    cout << g(s) << endl;
    cout << k(s) << endl;
}
int main() {
    double h, r, p;
    cin >> h >> r >> p;
    m(h, r, p);
    return 0;
}