#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<long long> vsum(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
       if (i==0)
       {
       vsum[i]=v[i];
       }
       else
       {
        vsum[i]=vsum[i-1]+v[i];
       }

       

    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<vsum[i]<<endl;
    // }
    
    for (int i = 0; i < q; i++)
    {
        int ini, fi;
        cin >> ini >> fi;
        ini--;fi--;
        if (ini==0)
        {
            cout<<vsum[fi]<<endl;
            
        }
        else
        {
            cout<<vsum[fi]-vsum[ini-1]<<endl;
        }
        
        
    }

    return 0;
}