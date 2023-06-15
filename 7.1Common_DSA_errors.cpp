#include <iostream>
using namespace std;

void recursiveFunc() {
    recursiveFunc();  // Infinite recursion without a base case
}

int main() 
{
    // too long string
    char ref[20] = "This is a long string";

    // int arr[4]={1,2,3,4,5,6};
    
    // divide by 0
    // int a=10,b=0;
    // int div=a/b;
    // cout<<div;

    //double deletion of pointer
    //int* ptr = new int;
    //delete ptr;
    //delete ptr;
   
 

    //gives runtime error of execution timed out
    //recursiveFunc();
    
    //out of bounds array access
    //int ar[5];
    //int ar[10]=10;
    //cout<<ar[10]; 
    
    //segmentation fault
    //int* ptr = nullptr;
    //*ptr = 10; 

   

 
    return 0;
}