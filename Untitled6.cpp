#include <cstdlib>
#include <iostream>
using namespace std;
int Pangkat(int x, int y)
{
	if (y != 0)
	return (x*Pangkat(x, y-1));
	else
	return 1;
}
int main ()
{
	int a, n, hasil;
	cout << "Masukan bilangan dasar: ";
	cin >> a;
	cout << "Masukan bilangan pangkat (bulat positif): ";
	cin >> n;
	hasil = Pangkat(a, n);
	cout << "Hasil " << a << "^" << n << "=" << hasil << endl;
	system ("PAUSE");
	return 0;
}
