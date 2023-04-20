#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int val=i;
        int j=1;
        while(j<=i){
            char ch='A'+val-1;
            cout<<ch;
            val++;
            j++;
        }
        cout<<endl;
        i++;
    }
}