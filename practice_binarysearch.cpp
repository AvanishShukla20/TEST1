#include <iostream>
using namespace std;
struct array{
int arr[6];
int n;
};
int bs(array a,int x){
int high=a.n-1;
int low=0;
while(low<=high){
    int mid=low+(high-low)/2;
    if(a.arr[mid]==x){
       return mid;
    }
    else if(a.arr[mid]<x){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return -1;
}
int main(){
    array brojo={{2,3,25,37,54,68},6};
    int x=bs(brojo,25);
    cout<<x;
}