#include<bits/stdc++.h>
#define ll long long 
#define MOD1 998244353
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        
        ll m1=b[n-1],m2=b[n-2];
       
   // cout<<m1<<" "<<m2<<endl;
        for(int i=0;i<n;i++)
        {
            if(a[i]==m1)
            cout<<m1-m2<<" ";
            if(a[i]<m1)
            cout<<a[i]-m1<<" ";
            
        }
        cout<<endl;

    }
}