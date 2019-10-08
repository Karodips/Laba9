#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int kol, des, ed, sot;
	string chislasot[9] = { "Сто ", "Двести ", "Триста ", "Четыреста ", "Пятьсот ", "Шестьсот ", "Семьсот ", "Восемьсот ", "Девятьсот " };
	string chislaed[10] = { "одно", "два", "три", "четрые", "пять", "шесть", "семь", "восемь", "девять", "" };
	string chislades[9] = { "двадцать ", "тридцать ", "сорок ", "пятьдесят ", "шестьдесят ", "семьдесят ", "восемьдесят ", "девяносто ", "" };
	cin >> kol;
	cout << chislasot[((kol - kol % 100) / 100) - 1];
	if ((kol % 100) > 9 && (kol % 100) < 20) {
		if (kol % 100 == 11) cout << "одиннадцать\n";
		else if (kol % 100 == 10) cout << "десять\n";
		else if (kol % 100 == 12) cout << "двенадцать\n";
		else if (kol % 100 == 13) cout << "тринадцать\n";
		else if (kol % 100 == 14) cout << "четырнадцать\n";
		else if (kol % 100 == 15) cout << "пятнадцать\n";
		else if (kol % 100 == 16) cout << "шестнадцать\n";
		else if (kol % 100 == 17) cout << "семнадцать\n";
		else if (kol % 100 == 18) cout << "восемнадцать\n";
		else if (kol % 100 == 19) cout << "девятнадцать\n";
	}
	else if ((kol % 100) > 19 || (kol % 100) < 10) {
		if (kol % 100 > 10) des = (((kol % 100) - kol % 10)/10)-2;
		else des = 8;
		if (kol % 10 != 0) ed = kol % 10 - 1;
		else kol = 9;
		cout << chislades[des] << chislaed[ed] << endl;
	}
	

		system("pause");
	return 0;
}
