#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string change(string s){
    string word="";
    for(int i=0;i<s.size();i++){
        string temp="";
        while(s[i]!=' ' && i<s.size()){
            if(temp.size()==0 && s[i]>='a' && s[i]<='z') temp.push_back(s[i]-'a'+'A');
            else if(s[i]>='A' && s[i]<='Z') temp.push_back(s[i]-'A'+'a');
            else  temp.push_back(s[i]);
            i++;
        }
        if(i!=s.size()) temp.push_back(' ');
        word.append(temp);
    }
    return word;
}

int main()
{
    string s="sIngH iS kINg";
    cout<<change(s);
    return 0;
}