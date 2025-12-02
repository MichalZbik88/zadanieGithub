#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    while (b != 0)
	{
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;

    if(a <= 0 || b <= 0)
	{
        cout << "Liczby musza byc dodatnie!" << endl;
        return 1;
    }

   cout << a << " " << b << " NWD: " << nwd(a, b) << endl;
   return 0;
}
