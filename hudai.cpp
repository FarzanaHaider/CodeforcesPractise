#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string s,n;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        n+=s[i];
    }
    n+='null';
    cout<<n[1];
}
