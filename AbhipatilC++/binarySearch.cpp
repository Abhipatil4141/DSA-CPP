#include <iostream>
using namespace std;

int main()
{
    // binary search

    // int arr [5] = {2,5,6,8,9};

    // int left = 0;
    // int right = 4;

    // int mid = (right + left )/2;
    // int key = 6;

    // while(left <= right){
    //     if (arr[mid] == key){
    //         cout<<"present"<<endl;
    //         break;
    //     }else if (arr[mid]> key) {
    //         right = mid-1;
    //     } else {
    //         left = mid +1;
    //     }

    //     mid = (right + left )/2;
    // }




    // peack of mountain

    int arr1[7] = {2, 5, 6, 8, 7, 5, 3};

    int a = 0;
    int b = 6;

    int mid = (a + b) / 2;

    while (a <= b)
    {
        if (arr1[mid] > arr1[mid - 1] && arr1[mid] < arr1[mid + 1])
        {
            a = mid + 1;
        }
        else if (arr1[mid] < arr1[mid - 1] && arr1[mid] > arr1[mid + 1])
        {
            b = mid - 1;
        }
        else
        {
            cout << arr1[mid] << endl;
            break;
        }
        mid = (a + b) / 2;
    }



    // finding squre root using binary search 


    int x = 64;

    int left = 0;
    int right = x;
    mid = (left + right) / 2;


    while(left <= right ){
        if (mid * mid == x){
            cout<<mid<<endl;
            break;

        }else if (mid*mid> x){
            right = mid-1;
        }else{
            left= mid+1;
        }
        mid =(left +right)/2;
    }

    cout<<mid<<endl;
    return 0;









}