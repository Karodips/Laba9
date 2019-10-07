#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int polozhenie, povorot;
	string vvod;
	cout << "Вводите первые буквы сторон света на английском\n";
	cin >> vvod;
	polozhenie = 0;
	if (vvod == "N" || vvod == "n") polozhenie = 1;
	else if (vvod == "W" || vvod == "w") polozhenie = 2;
	else if (vvod == "S" || vvod == "s") polozhenie = 3;
	else if (vvod == "E" || vvod == "e") polozhenie = 4;
	else cout << "IDK";
	if (polozhenie != 0) {
		cin >> povorot;
		if (povorot > -2 && povorot < 2)
		polozhenie = polozhenie + povorot;
		else cout << "Nope";
	}
	if (polozhenie == 1 || polozhenie == 5) cout << "C" << endl;
	else if (polozhenie == 3) cout << "Ю" << endl;
	else if (polozhenie == 2) cout << "З" << endl;
	else if (polozhenie == 0 || polozhenie == 4) cout << "В" << endl;
		system("pause");
	return 0;
}
