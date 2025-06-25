#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, test_case;
    cin >> n >> test_case;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int val;
    cin >> val;
    int r = 0, l = n - 1;
    int f = 0;
    while (r <= l)
    {

        int mild = (r + l) / 2;
        if (val == v[mild])
        {
            f = 1;
            break;
        }
        else if (v[mild] > val)
        {
            l = mild - 1;
        }
        else
        {
            r = mild + 1;
        }
    }
    if (f == 1)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}