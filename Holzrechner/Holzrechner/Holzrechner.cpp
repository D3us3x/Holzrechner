#include <iostream>
using namespace std;

// sudo g++ file
// ./a.out
// 1rm = 40€
int main() {
	double schuettraummeter;
	double raummeter;
	double festmeter;
	int operation;
	double ergebnis;
	cout << "---OPERATIONEN---" << endl;
	cout << "Schuettraummeter zu Raummeter [1]" << endl;
	cout << "Schuettraummeter zu Festmeter [2]" << endl;
	cout << "Raummeter zu Schuettraummeter [3]" << endl;
	cout << "Raummeter zu Festmeter [4]" << endl;
	cout << "Festmeter zu Raummeter [5]" << endl;
	cout << "Festmeter zu Schuettraummeter [6]" << endl;
	cout << "Gebe deine Operation ein : " << endl;
	cin >> operation;

	if (operation == 2) {
		cout << "Schuettraummeter : " << endl;
		cin >> schuettraummeter;
		ergebnis = schuettraummeter * 0.45;
		cout << "Ergebnis : " << ergebnis << " Festmeter" << endl;
	}
	if (operation == 1) {
		cout << "Schuettraummeter : " << endl;
		cin >> schuettraummeter;
		ergebnis = schuettraummeter * 0.70;
		cout << "Ergebnis : " << ergebnis << " Raummeter" << endl;
		cout << "Preis : " << ergebnis * 40 << " Euro" << endl;
	}
	if (operation == 3) {
		cout << "Raummeter : " << endl;
		cin >> raummeter;
		ergebnis = raummeter * 1.43;
		cout << "Ergebnis : " << ergebnis << " Schuettraummeter" << endl;
	}
	if (operation == 4) {
		cout << "Raummeter : " << endl;
		cin >> raummeter;
		ergebnis = raummeter * 0.64;
		cout << "Ergebnis : " << ergebnis << " Festmeter" << endl;
	}
	if (operation == 5) {
		cout << "Festmeter : " << endl;
		cin >> festmeter;
		ergebnis = festmeter * 1.55;
		cout << "Ergebnis : " << ergebnis << " Raummeter" << endl;
		cout << "Preis : " << ergebnis * 40 << " Euro" << endl;
	}
	if (operation == 6) {
		cout << "Festmeter : " << endl;
		cin >> festmeter;
		ergebnis = festmeter * 2.22;
		cout << "Ergebnis : " << ergebnis << " Schuettraummeter" << endl;
	}
	system("pause");
}