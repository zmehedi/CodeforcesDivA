#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int solve(){
    int n;
    string s,fnal;
    cin>>n>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == "U"){
            fnal +="D";
        }
        else if(s[i] == "D"){
            fnal +="U";
        }
        else {
            fnal +="LR";
            i++;
        }
    }
    cout<<fnal;
}
int main()
{
    int t;
    cin>>t;

    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
/**
    while(t--){
        int n;
        string s;
        cin>>n >> s;
        for(int i=0;i<n;i++){
            if(s[i] == 'U'){
                cout<<"D"<<endl;
            }
            else {
                if(s[i] == 'D'){
                    cout<<"U"<<endl;
                }
                else {
                    cout<<"LR"<<endl;
                    i++;
                }

            }
        }
        cout<<s<<endl;
    }
    */
