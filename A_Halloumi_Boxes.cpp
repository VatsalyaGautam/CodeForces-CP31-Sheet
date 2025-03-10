#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>vec(n);
        bool isSorted=true;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(i!=0 && isSorted){
                if(vec[i]<vec[i-1]){
                    isSorted=false;
                }
            }
        }
        if(isSorted){
            cout<<"YES"<<endl;
        }
        else if(k==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;


}