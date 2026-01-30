#include <iostream>

using namespace std;

int main()
{
	// Program do obliczania delty dla rownania kwadratowego ax^2 + bx + c = 0
	double a, b, c;

	cout << "Podaj wspolczynnik a: ";
	cin >> a;
	cout << "Podaj wspolczynnik b: ";
	cin >> b;
	cout << "Podaj wspolczynnik c: ";
	cin >> c;

	double delta = (b * b) - (4 * a * c);

	double x1, x2;

	double pierwiastek_delta = sqrt(delta);

	x1 = (-b - pierwiastek_delta) / (2 * a);
	x2 = (-b + pierwiastek_delta) / (2 * a);

	cout << "Pierwsze miejsce zerowe: " << x1 << endl;
	cout << "Drugie miejsce zerowe: " << x2 << endl;

}