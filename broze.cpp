#include <bits/stdc++.h>
using namespace std;

int main(){
        char arr[1000];
        cin>>arr;
        int n = strlen(arr);
        for(int i=0; i<n; ++i){
        
        if (arr[i] == '.') {
            cout << "0";
            continue;
        }
        else if (arr[i] == '-' && arr[i+1]=='.') {
            cout << "1";
           i++;
           continue;
        }
        else if (arr[i] == '-' && arr[i+1]=='-') {
            cout << "2";
            i++;
            continue;
        }
    }
    cout<<endl;
}