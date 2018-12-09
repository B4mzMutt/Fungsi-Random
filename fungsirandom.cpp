#include <iostream>
#include <cstdlib>  /*mengandung fungsi random*/

using namespace std;

int main() {

	char lanjut;
	while (true) {
		cout << "lempar dadu ? (y/n)";
		cin >> lanjut;

		if (lanjut == 'y') {
			cout << 1 + (rand() % 6) << endl;
		}
		else if (lanjut == 'n') {
			break;
		}else {
			cout << "warning: ketik y or n dunk brooo!!!\n";
		}
	}
	cin.get();
	return 0;
}
