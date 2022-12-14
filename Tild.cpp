//FINDING ELEMENTS WITH REFERENCE TILD~
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="aeiouAEIOU";
    string ss="manikanta";
    int c=0;
    for(int i=0;i<ss.size();i++){
        if(~s.find(ss[i])) c++;
    }
    cout<<c<<"\n";
}
