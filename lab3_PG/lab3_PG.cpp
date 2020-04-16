#include <iostream>
#include <string>

int const LEN = 26;     //фактическая длина строки = LEN - 1 (последний символ - NULL)

using namespace std;
int IVI();
int compare(char LINE1[LEN], char LINE2[LEN], int n);
void EnterIN(char LINE[LEN]);
void ACTIONS_1(char LINE1[LEN], char LINE2[LEN], int N);

int main() {
    int number;
    cout << "Enter the number, or enter 0 to close - ";
    cin >> number;
    while (number) {
        if (number == 1) {
            int N = IVI();
            char LINE1[LEN], LINE2[LEN];
            EnterIN(LINE1);
            EnterIN(LINE2);
            ACTIONS_1(LINE1, LINE2, N);
        }
        if (number == 2) {}
        if (number == 3) {}
        cout << "Enter the number, or enter 0 to close - ";
        cin >> number;
    }
    return 0;
}

int IVI() {
    int var;
    cout << "Enter N less than " + to_string(LEN) + " - ";
    cin >> var;
    while (var >= LEN) {
        cout << "ERROR.Enter N LESS than " + to_string(LEN) + " - ";
        cin >> var;
    }
    cin.clear();
    cin.ignore();
    return var;
}

int compare(char LINE1[LEN], char LINE2[LEN], int n) {
    for (int i = 0; i < n; i++) {
        if (LINE1[i] > LINE2[i]) return 1;
        if (LINE1[i] < LINE2[i]) return -1;
    }
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

void ACTIONS_1(char LINE1[LEN], char LINE2[LEN], int N) {
    cout << LINE1 << " <=> ";
    cout << LINE2 << endl;
    cout << "Result of the comparsion - ";
    cout << compare(LINE1, LINE2, N) << endl;
}