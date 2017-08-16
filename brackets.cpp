#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int depth=0,first_pos,length=0,seq;
    int max_depth=0,max_first,max_length=0,max_seq;
    for(int i=1;i<=n;i++)
    {
        int temp;cin>>temp;
        if(temp==1)
        {
            depth++;
            if(depth>max_depth) {max_depth=depth;max_first=i;}
            if(depth==1){length=1;seq=i;}
            if(depth>1) length++;
        }
        else{
            depth--;
            if(depth>=0) length++;
            if(depth==0){if(length>max_length){max_length=length;max_seq=seq;} }

        }
    }
    cout<<max_depth<<" "<<max_first<<" "<<max_length<<" "<<
    max_seq<<endl;
    return 0;
}
