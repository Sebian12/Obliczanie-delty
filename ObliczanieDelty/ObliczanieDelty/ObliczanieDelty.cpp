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

	if (delta < 0)
	{
		cout << "Delta jest ujemna, brak miejsc zerowych." << endl;
		cout << endl;
	}
	else if (delta == 0)
	{
		double x = -b / (2 * a);
		cout << "Delta jest rowna zero, jedno miejsce zerowe: " << x << endl;
		cout << endl;
	}
	else if (delta > 0) {
		x1 = (-b - pierwiastek_delta) / (2 * a);
		x2 = (-b + pierwiastek_delta) / (2 * a);

		cout << "Pierwsze miejsce zerowe: " << x1 << endl;
		cout << "Drugie miejsce zerowe: " << x2 << endl;
	}

	cout << endl;

	system("PAUSE");
}