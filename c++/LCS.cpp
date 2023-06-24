#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int count=1;
    int max=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        int a = arr[i]+1;
        int b = arr[i+1];
        if(a==b){
            count++;
            if(max<count){
                max=count;
            }
        }
        else{
            count=0;
        }
    }
    cout<<max;
}