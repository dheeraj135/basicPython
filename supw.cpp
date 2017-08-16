#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    long n; cin>>n;
    vector<ll> a(n);for(int i=0;i<n;i++) cin>>a[i];
    vector<ll>::iterator it=a.end()-4;
    for(;it!=a.begin()-1;it--)
    {
        *it+=*min_element(it+1,it+4);
    }
    cout<<*min_element(a.begin(),a.begin()+3);
    return 0;
}
