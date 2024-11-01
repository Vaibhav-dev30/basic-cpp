#include <iostream>
using namespace std;
int main() {
  float p, r, t, si;
  cout<<"enter the priciple amount: ";
  cin>>p;
  cout<<"etnert the rate of interest: ";
  cin>>r;
  cout<<"enter the time: ";
  cin>>t;
  si = p*r*t/100;
  cout<<"the simple interest as per you given data is: "<<si;
}
