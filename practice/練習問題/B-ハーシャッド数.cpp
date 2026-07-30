/*整数 
X を十進法で表したときの各桁の数字の和を f(X) としたとき、
X が f(X) で割り切れる場合、X はハーシャッド数です。
整数 N が与えられるので、ハーシャッド数かどうか判定してください。
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int x = N;
    int sum = 0;

    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }

    if (N % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}