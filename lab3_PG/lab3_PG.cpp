#include <iostream>
#include <string>


int const LINES_Q = 2; //количество строк
int const LEN = 6; //фактическая длина строки = LEN - 1 (последний символ - NULL)

using namespace std;
int compare(char LINES, int n);
void create(char LINES[LINES_Q][LEN]);

int main() {
    int number;
    cout << "Enter the number, or enter 0 to close - ";
    cin >> number;
    while (number) {
        if (number == 1) {

            int n;
            //cout << "Enter n less than " + to_string(LEN) + " - ";
			//cin >> n;

			cin.clear();
			cin.ignore();

			char LINES[LINES_Q][LEN];
			create(LINES);
			cout << LINES[0] << endl;
			cout << LINES[1] << endl;

        }
        if (number == 2) {}
        if (number == 3) {}
        cout << "Enter the number, or enter 0 to close - ";
        cin >> number;
    }
    return 0;
}

int compare(char LINES, int n) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            //if ()
        }
    }
    return 0;
}

void create(char LINES[LINES_Q][LEN]) {
	for (int i = 0; i < LINES_Q; i++) {
		cout << "Enter less than " + to_string(LEN) + " symbols" + ":" + "\n";
		cin.getline(LINES[i], 255);
		int j = 0;
		while (LINES[i][j] != NULL) j++;
		while (j >= LEN) {
			cout << "ERROR.Enter LESS than " + to_string(LEN) + " symbols" + ":";
			cin.getline(LINES[i], 255);
			j = 0;
			while (LINES[i][j] != NULL) j++;
		}
	}
}