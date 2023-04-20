#include<bits/stdc++.h>
using namespace std;
void rev_string(char input[]){
    int len=strlen(input);
    int i=0,j=len-1;
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }

}
int main(){
    char input[100];
    cin.getline(input,100);
    rev_string(input);
    cout<<input;
}