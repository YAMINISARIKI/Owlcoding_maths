#include <bits/stdc++.h>
using namespace std;
int ncr(int n,int r)
{
    int num = 1;
    for(int i=n-r+1;i<n;i++)
    {
        num*=i;
    }
    for(int i=1;i<=r;i++)
    {
        num/=i;
    }
    return num;
}
int main() {
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}
