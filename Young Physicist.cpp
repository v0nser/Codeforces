#include <iostream>

using namespace std;

int main()
{
    int t, x, y, z, a(0), b(0), c(0);
    cin >> t;

    while(t--)
    {
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }

    if (a == 0 && b== 0 && c == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}