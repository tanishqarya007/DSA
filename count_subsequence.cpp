#include<bits/stdc++.h>
using namespace std;
int printF(int ind,int s,int sum,int arr[],int n){
    if(ind==n){
        if(sum==s){
            return 1;
        }
    return 0;
    }
    s+=arr[ind];
    int l=printF(ind+1,s,sum,arr,n);
    s-=arr[ind];
    int r=printF(ind+1,s,sum,arr,n);
    return l+r;
}
int main(){
    int arr[]={1,2,1,4};
    int n=4;
    int sum=6;
    cout<<printF(0,0,sum,arr,n);
}