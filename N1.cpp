#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int chislo, mesac;
	cin >> chislo >> mesac;
	chislo = chislo - 1;
	mesac = mesac - 1;
	string chisla[31] = { "первое", "второе", "третье", "четвёртое", "пятое", "шестое", "седьмое", "восьмое", "девятое", "десятое", "одиннадцатое", "двенадцатое",
	"тринадцатое", "четырнадцатое", "пятнадцатое", "шестнадцатое", "семнадцатое", "восемнадцатое", "девятнадцатое", "двадцатое", "двадцать первое", "двадцать второе", "двадцать третье",
	"двадцать четвёртое", "дватцать пятое", "двадцать шестое", "двадцать седьмое", "двадцать восьмое", "двадцать девятое", "тридцатое", "тридцать первое" };
	string mesyaca[12] = { "января", "февраля", "марта", "апреля", "мая", "июня", "июля", "августа", "сентября", "октября", "ноября", "декабря" };
	if ((mesac == 1 && chislo > 28) || chislo > 30 || mesac > 11 || (mesac % 2 == 0 && chislo > 29 && mesac != 0)) cout << "Мы уже сменили календарь?\n";
	else cout << chisla[chislo] << " " << mesyaca[mesac] << endl;

	system("pause");
	return 0;
}
