#include <iostream>

using namespace std;

int main() {
	int n_a_l_1, t_a_l_1, n_a_l_2, t_a_l_2, n_a_l_3, t_a_l_3, c_a_l_1, c_a_l_2, c_a_l_3;
	float s_t;

	cout << "inserisci n_a_l_1" << endl;
	cin >> n_a_l_1;
	cout << "inserisci n_a_l_2" << endl;
	cin >> n_a_l_2;
	cout << "inserisci n_a_l_3" << endl;
	cin >> n_a_l_3;
	cout << "inserisci t_a_l_1" << endl;
	cin >> t_a_l_1;
	cout << "inserisci t_a_l_2" << endl;
	cin >> t_a_l_2;
	cout << "inserisci t_a_l_3" << endl;
	cin >> t_a_l_3;

	if (t_a_l_1 <= 40) {
		c_a_l_1 = 150;
	} else {
		c_a_l_1 = 180;
	}
	if (t_a_l_2 < = 46) {
		c_a_l_2 = 200;
	} else {
		c_a_l_2 = 250;
	}
	if (t_a_l_3 <= 50) {
		c_a_l_3 = 250;
	} else {
		c_a_l_3 = 275;
	}

	s_t = n_a_l_1 * c_a_l_1 + n_a_l_2 * c_a_l_2 + n_a_l_2 * c_a_l_3;
	if (s_t < 500) {
		s_t = s_t * 0.8;
	}
	cout << "la s_t è" << s_t << endl;
	system("pause");
	return 0;
}

