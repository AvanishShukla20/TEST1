#include<iostream>
using namespace std;
struct move
{
    int size;
    int A[];
  
};
int Is_sorted (struct move x)
{
  for(int i=0;i<x.size-1;i++)
    {
      if (x.A[i] > x.A[i + 1])
	{
	   return 0;
      break;
	}
    }
  return 1;
}
void Insert_sort(){


}
int main ()
{
  struct move s1 = { 5,{2, 4, 5, 7, 9}};
  cout << Is_sorted (s1);
   
  return 0;
}