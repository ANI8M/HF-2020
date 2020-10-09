#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=s.length();
    int i=0;
    for(int i=0;i<l;i++){
        if(i==0 && s[i]>='A' && s[i]<='Z'){
            cout<<s[i];
        }
        else if(s[i]>='a' && s[i]<='z'){
            cout<<s[i];
        }
        else if(s[i]>='A' && s[i]<='Z'){
            cout<<endl;
            cout<<s[i];
        }
    }
    return 0;
}