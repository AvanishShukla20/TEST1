#include <iostream>
using namespace std;
/*MY WAY
void Reverse_Array(int A[],int n,int B[]){
    for(int i=0;i<n;i++){
       B[i]=A[n-i-1];
    }
   
}
*/
//method 1
void reverse_array1(int A[],int B[],int n){
    //using two variables and two conditions in one for loop
for(int i=n-1,j=0; i>=0 ; i--,j++)
    B[j]=A[i];
}
void copy_array(int A[],int B[],int n){
    for (int i=0;i<n;i++){
        A[i]=B[i];
    }
}
int main(){
int A[7]={24,56,32,45,78,54,31};

int *B=new int [7];
reverse_array1(A,B,7);
copy_array(A,B,7);
//Reverse_Array(A,7,B);
for (int  i = 0; i < 7; i++)
{
    cout<<A[i]<<" ";
}
}






