#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int kol, des, ed;
	string chislaed[10] = { "одно", "два", "три", "четрые", "пять", "шесть", "семь", "восемь", "девять", "" };
	string chislades[3] = { "Двадцать ", "Тридцать ", ""};
	cin >> kol;
	if ((kol - kol % 10) / 10 == 1) {
		if (kol == 11) cout << "Одиннадцать";
		else if (kol == 10) cout << "Десять";
		else if (kol == 11) cout << "Одиннадцать";
		else if (kol == 12) cout << "Двенадцать";
		else if (kol == 13) cout << "Тринадцать";
		else if (kol == 14) cout << "Четырнадцать";
		else if (kol == 15) cout << "Пятнадцать";
		else if (kol == 16) cout << "Шестнадцать";
		else if (kol == 17) cout << "Семнадцать";
		else if (kol == 18) cout << "Восемнадцать";
		else if (kol == 19) cout << "Девятнадцать";
		des = 2;
		ed = 9;
	}
	else if (kol == 40) cout << "Сорок";
	else if (kol > 19 && kol < 41) {
		des = ((kol - kol % 10) / 10) - 2;
		ed = kol % 10 - 1;
		cout << chislades[des] << chislaed[ed];
	}
	if ((kol > 9 && kol < 20) || ed > 3) cout << " учебных заданий\n";
	else if (ed > 0 && ed < 4) cout << " учебных задания\n";
	else if (ed == 0) cout << " учебное задание\n";

		system("pause");
	return 0;
}
