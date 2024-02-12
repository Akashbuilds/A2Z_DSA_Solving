// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;
    int n = s.length();
    int kmp[n+1];
    
    int i=0; int j=-1;kmp[0]=-1;
    while(i<n){
        while(j!=-1 && s[i]!=s[j]) j=kmp[j];
        j++; i++;
        kmp[i]=j;
        
    }
    
    for(int i=0;i<=n;i++){
        cout<<kmp[i]<<" ";
    }
}

int main() {
    // Write C++ code here
    solve();

    return 0;
}