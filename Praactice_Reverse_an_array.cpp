
#include <iostream>
using namespace std;
struct avanish{
    int arr[9] ;//you will have to give the size of array while declaring it only
    int size;
};
void Reverse(avanish *a){
int i=0,j=a->size-1;
for(;i<j;i++,j--){
    swap(a->arr[i],a->arr[j]);
}
}
void display(avanish a){
    for(int i=0;i<a.size;i++){
        cout<<a.arr[i]<<" ";
    }
}
int main(){
    avanish arr={{3,6,8,2,5,4,9},9};
    Reverse(&arr);
    display(arr);
    return 0;
}