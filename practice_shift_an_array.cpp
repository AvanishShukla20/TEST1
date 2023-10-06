#include <bits/stdc++.h>
using namespace std;
//left shift and right shift an array
struct myarray{
 int arr[7];
 int size;
};
void LeftShift(myarray *a,int index){
    
    while(index>0){
    int i=0 ;
    for(;i<a->size-1;i++){
        a->arr[i]=a->arr[i+1];
    }
    a->arr[i]=0;
    index--;
    }
}
void display(myarray a){
    int i=0;
    for(;i<a.size;i++){
        cout<<a.arr[i]<<" ";
    }
}
int main(){
    int index;
    myarray varanasi={{3,5,44,25,6,67,21},7};
    cin>>index;
    LeftShift(&varanasi,index);
    display(varanasi);
    return 0;
}