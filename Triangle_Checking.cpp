#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    (a + b > c && b + c > a && c + a > b) ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}