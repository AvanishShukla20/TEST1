#include <bits/stdc++.h>
using namespace std;
struct Student
 {
int rollno;

string board;
string dept;
string cast;
};

int main(){
    //struct Student s1;
    struct Student *ptr;
    ptr=new struct Student ;
    ptr->rollno=34;
    cout<<ptr->rollno<<endl;
    
    ptr->board="CBSE is the best";
    cout<<ptr->board<<endl;
    delete ptr;
    ptr->board="CBSE is the best";
    cout<<ptr->board<<endl;
}

/*int main(){
int a=45;
//int &ref=a;
int &r=a;
int b=7568;
r=b;
cout<<a<<endl<<endl<<r<<endl;
}*/














