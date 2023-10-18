#include<bits/stdc++.h>
using namespace std;


void reverse(int *arr, int high ,int low)
{
    if (low > high) return;


    swap(arr[low],arr[high]);
    reverse(arr , high-1 ,low+1);
}

// void f(int *arr , int n, int i)
// {
//     if ()
// }


int main(){
     int arr [6] = {1,2,3,4,5,6};

     reverse(arr ,6-1 ,0);

     for (int i =0; i<6 ; i++){
        cout<<arr[i]<<' ';
     } cout<<endl;
}