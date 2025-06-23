#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int n,val;
   cin>>n>>val;
   vector<int>v;
   for(int i = 0; i <n;i++)cin>>v[i];
   int r=0,l=n-1,f=0;
   while (r<=l)
   {
        int mild = (r+l)/2;
        if (v[mild]==val)
        {
            f=1;
            break;
        }
        else if(v[mild]<val)
        {
            l=mild-1;
        }
        else
        {
            /* code */
        }
        
        
        
   }
   

    return 0;
}