#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int a,b,c;
   cin>>a>>b>>c;
   bool ans=false;
   int x=c;
   if(c<a && c<b) ans=false;
   else if(c%a==0 || c%b==0) ans=true;
   else
   {
       while(x>=a)
       {
            x-=a;
            if(x%b==0)
            {
               ans=true;
               break;
            }
      
        }
   }
   
   if(ans) cout<<"YES";
   else cout<<"NO";
   return 0;
}