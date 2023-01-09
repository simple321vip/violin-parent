#include <iostream>

using namespace std;

int main()
{
  string chsansi = "abc 中国 china";

  cout << chsansi << endl;
  cout << locale().name() << endl;
}