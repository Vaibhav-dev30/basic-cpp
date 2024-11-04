#include<iostream>
using namespace std;
int main(){
  int i,n;
  cout<<"enter number whose table is to be shown: ";
  cin>>n;
  for(i=n;i<=10*n;i+=n){
    cout<<i<<endl;
  }
}