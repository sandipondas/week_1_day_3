#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       vector<int> v(n);
       for(int i=0; i<n; i++)
       {
           cin>>v[i];
        }
        //int count=0;
        int mx=0;
       for(int i=0; i<n; i++)
       {
          if((i+1)<v[i])
          {
            int x=v[i]-(i+1);
            mx=max(mx,x);
          }
        }
        cout<<mx<<endl;
   }
   return 0;
}