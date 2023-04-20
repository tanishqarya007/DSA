#include<iostream>
using namespace std;
void swap_array_ele(int arr[],int l,int r){
    if(l>=r)return;
    swap(arr[l],arr[r]);
    swap_array_ele(arr,l+1,r-1);
}
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swap_array_ele(arr,0,n-1);
    printArray(arr,n);

}