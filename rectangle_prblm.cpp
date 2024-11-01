#include <iostream>
using namespace std;

int main() {
  float l,b,area,perimeter;
  cout << "Enter length: ";
  cin >> l;
  cout << "Enter bredth: ";
  cin >> b;
  area = l*b;
  perimeter = 2*(l+b);
  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;
  if (area > perimeter)
    cout << "Area is greater than perimeter";
  else
    cout<<"perimeter is greater than area";
  return 0;
}
