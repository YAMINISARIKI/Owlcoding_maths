//Binary exponentiation for large numbers;
#include <iostream>
using namespace std;
int binaryexpo(int a,int b)
{
    int ans = 1;
    while(b)
    {
        if(b&1)
        {
            b = b-1;
            ans*=a;
        }
        else
        {
            b/=2;
            a = a*a;
        }
    }
    return ans;
}
int main() {
    // Write C++ code here
    int a,b;
    cin>>a>>b;
    int ans = binaryexpo(a,b);
    cout<<ans;
    return 0;
}
