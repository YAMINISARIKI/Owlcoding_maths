#include <bits/stdc++.h>
using namespace std;

void seive_prime(int n)
{
    vector<int> v(n+1,1);
    v[0]=0;
    v[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(v[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                v[j]=0;
            }
        }
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
	    int t;
	    cin>>t;
	    seive_prime(t);
	}
    
}
