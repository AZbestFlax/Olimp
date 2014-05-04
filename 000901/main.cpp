#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    short c=0;
    for (int i=1;i<s.size()-1;++i) {
        if (s[i]=='+' || s[i]=='*' || s[i]=='-') c++;
    }
    cout << c << endl;
    return 0;
}
