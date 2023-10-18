#include<bits/stdc++.h>
using namespace std;

// using recrusion for fibocachi series

int fib(int n) {
    if (n <=1) return n;

    return fib(n-1) + fib(n-2);
}




// without recrusion 



int f(int n){

int a = 0;
int b = 1;
    for( int i =0 ; i<n ; i++){
    int c = a + b;
    a=b;
    b=c;
}
return a;
}

    






int main()
{
    
    // cout<< fib(10) << endl;
    cout<< f(15) << endl;
}




