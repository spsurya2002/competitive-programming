#include<bits/stdc++.h>
#define ll long long 
#define MOD1 998244353
using namespace std;
ll count(int a[],int n)
{
       ll ans=0;ll c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==0)
            c++;
            else
            ans+=c;
        }return ans;
}
int main()
{
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;int a[n],b[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
        }
        ll ans1=count(a,n);
        for(int i=n-1;i>=0;i--)
        {
           if(a[i]==1){
           a[i]=0;
           break;}
        }
        ll ans2=count(a,n);
        for(int i=0;i<n;i++)
        {
           if(b[i]==0){
           b[i]=1;break;}
        }
        ll ans3=count(b,n);
        cout<<max(ans1,(max(ans2,ans3)))<<endl;
    }
}