#include <iostream>
#include <cmath>

using namespace std;

double h(double x, double y) {
  

  return (pow(x, 2) + sin(x * y) + pow(y, 2)) / (1 + pow(x, 2) + pow(y, 2));
}

int main()
{
  double s, t;

  cout << "s = "; cin >> s;
  cout << "t = "; cin >> t;

  double result = (h(s, pow(t, 2)) + pow(h(t, 1 + pow(s, 2)), 2)) / (1.0 + h(s*t, 1.0));

  cout << "result is: " << result;

  return 0;
}
