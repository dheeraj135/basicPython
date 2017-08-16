#include<bits/stdc++.h>
using namespace std;
int main()
{
    //char ch='A';
    string s,t,ins;
    cin>>s>>t;
    map<char,char> my_map;
    map<char,char>::iterator it=my_map.begin();
    for(int i=0;i<26;i++)
    {
        my_map.insert(it,pair<char,char>(s[i],t[i]));
        my_map.insert(it,pair<char,char>(toupper(s[i]),toupper(t[i])));
    }
    //cout<<ch<<" "<<my_map[ch];
    cin>>ins;
    vector<char> n;
    for(int i=0;ins[i]!='\0';i++)
    {
        if(isdigit(ins[i]))
            n.push_back(ins[i]);
        else
            n.push_back(my_map[ins[i]]);
    }
    vector<char>::iterator cit=n.begin();
    for(;cit!=n.end();cit++)
    {
        cout<<*cit;
    }
    return 0;
}
