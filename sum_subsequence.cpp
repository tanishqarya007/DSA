#include<bits/stdc++.h>
using namespace std;
void printF(int ind,vector<int> &ds,int s,int sum,int arr[],int n){
    if(ind==n){
        if(sum==s){
            for(auto it:ds)cout<<it<<" ";
            cout<<endl;
        }
    return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    printF(ind+1,ds,s,sum,arr,n);
    s-=arr[ind];
    ds.pop_back();
    printF(ind+1,ds,s,sum,arr,n);
}
int main(){
    int arr[]={1,2,1,4};
    int n=4;
    int sum=6;
    vector<int> ds;
    printF(0,ds,0,sum,arr,n);
}