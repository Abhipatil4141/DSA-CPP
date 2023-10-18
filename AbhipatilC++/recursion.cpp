#include<bits/stdc++.h>
using namespace std;



// nth number to 1 number 

void solve(int n){
    if (n ==0) return;
    cout<<n+1<<endl;
    n--;
    solve(n);
}


// 1 to nth number 

void number1(int a){
    if(a ==0) return;
    a--;
    number1(a);
    cout<<a +1<<endl;

}
int main(){
    solve(5);
    number1(6);
}





