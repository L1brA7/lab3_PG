#include <iostream>
#include <string>

int const LEN = 6;     //фактическая длина строки = LEN - 1 (последний символ - NULL)

using namespace std;
int compare(char LINE1[LEN], char LINE2[LEN], int n);
void EnterIN(char LINE[LEN]);

int main() {
    int number;
    cout << "Enter the number, or enter 0 to close - ";
    cin >> number;
    while (number) {
        if (number == 1) {

            int n;
            cout << "Enter n less than " + to_string(LEN) + " - ";
			cin >> n;
			cin.clear();
			cin.ignore();

            char LINE1[LEN], LINE2[LEN];
            EnterIN(LINE1);
            EnterIN(LINE2);
            cout << LINE1 << endl;
            cout << LINE2 << endl;
        }
        if (number == 2) {}
        if (number == 3) {}
        cout << "Enter the number, or enter 0 to close - ";
        cin >> number;
    }
    return 0;
}

int compare(char LINE1[LEN], char LINE2[LEN], int n) {
    return 0;
}

void EnterIN(char LINE[LEN]) {
	cout << "Enter less than " + to_string(LEN) + " symbols" + ":";
	cin.getline(LINE, 255);
	int j = 0;
	while (LINE[j] != NULL) j++;
	while (j >= LEN) {
		cout << "ERROR.Enter LESS than " + to_string(LEN) + " symbols" + ":";
		cin.getline(LINE, 255);
		j = 0;
		while (LINE[j] != NULL) j++;
	}
}