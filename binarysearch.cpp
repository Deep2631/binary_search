#include<iostream>
using namespace std;
    int binary_search(int arr[] , int n, int key){
    int s = 0;
    int e= n-1;
    while(s<=e){
        int m = (s+e)/2;
        if(arr[m]==key){
            return m;
        }else if(arr[m]>key){
          e = m-1;
        }else{
           s = m+1;
        }
        }
    return -5;
    }
int main(){
int n,key;
cout<<"enter the size which you want\n";
cin>>n;
int arr[n]={0};
cout<<"enter you array element\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
cout<<"enter a element to search in this array\n\n";
cin>>key;
    if(binary_search(arr, n, key) == -5){
    cout<<"the element is not fount in array"<<endl;
    }
    else{
        cout<<"number is found at "<<binary_search(arr, n, key)<<"th index";
    }
}
