#include <iostream>
using namespace std;

/* 

LINEAR SEARCH!
***unsorted / sorted arrays both work***
Each element is compared with the key and then value is returned if equal, else next element is checked.

time complexities:

   worst case: O(n)   //last element or not found
   best case: O(1)   //first element
   
*/

void linearSearch(int key){
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool check=true;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            check=false;
        }
    }
    if(check==false){
        cout<<"Element is PRESENT in the array!";
    }
    else{
        cout<<"Element is ABSENT in the array.";
    }
}


int main(){
    int key;
    cout<<"Enter a key to be searched: ";
    cin>>key;
    linearSearch(key);
    return 0;
}


/*
code written by Aditya Bijapurkar
*/