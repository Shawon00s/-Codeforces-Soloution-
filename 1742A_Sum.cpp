#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, num1, num2, num3;
    cin >> t;

    while(t--)
    {
        cin >> num1 >> num2 >> num3;
        if(num1== num2+num3 || num2 == num1+num3 || num3 == num1+num2)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
}
