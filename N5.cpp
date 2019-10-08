#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int god, cvet, zver;
	string cveta[10] = {  " бело", " бело", " чёрно", " чёрно"," зелёно", " зелёно", " красно", " красно", " жёлто", " жёлто"};
	string zveri[12] = { "й обезьяны", "й курицы", "й собаки", "й свиньи", "й крысы", "й коровы", "го тигра", "го зайца", "го дракона", "й змеи", "й лошади", "й овцы" };
	cin >> god;
	cout << " Год" << cveta[god % 10] << zveri[god % 12] << endl;
		system("pause");
	return 0;
}
