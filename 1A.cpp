#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long n, m, a;
    cin >> n >> m >> a;
    cout << fixed << setprecision(0) << ceil(n/(double)a)*ceil(m/(double)a);
    return 0;
}
