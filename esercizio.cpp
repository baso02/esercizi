#include <iostream>
using namespace std;
int main() {
	int n_abiti_1, n_abiti_2, n_abiti_3, taglia;
	float s_t;
	cout << "Inserisci la tua taglia" << endl;
	cin >> taglia;
	cout << "Inserisci n abiti linea 1" << endl;
	cin >> n_abiti_1;
	cout << "Inserisci n abiti linea 2" << endl;
	cin >> n_abiti_2;
	cout << "Inserisci n abiti linea 3" << endl;
	cin >> n_abiti_3;
	if (taglia <= 40) {
		s_t = n_abiti_1 * 150;
	}
	else {
		s_t = n_abiti_1 * 180;
	}
	if (taglia <= 40) {
		s_t = s_t + n_abiti_2 * 200;
	}
	else {
		s_t = s_t + n_abiti_2 * 250;
	}
	if (taglia <= 50) {
		s_t = s_t + n_abiti_3 * 100;
	}
	else {
		s_t = s_t + n_abiti_3 * 125;
	}
	if (s_t > 500) {
		s_t = s_t * 0.8;
	}
	cout << " la spesa totale è " << s_t << endl;
	system("pause");
	return 0;
}
