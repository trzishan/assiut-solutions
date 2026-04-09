#include <iostream>
using namespace std;

int main(){
    double n, k, a;
    cin >> n >> k >> a;
    // cout << n << ' ' << k << ' ' << a << endl;
    float meh = (n * k) / a;
    // //
    // if (meh <= 2147483647) cout << "int";
    // else if (meh % 1 > 0) cout << "double";
    // else cout << "long long";
    cout << typeid((n * k) / a).name() << endl;
    return 0;
}
