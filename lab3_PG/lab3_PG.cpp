#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

//Задание 1:

int const LEN = 26;
//Ввод N c проверкой по отношению к LEN
int N_INPUT();
//Сравнение первых n символов двух строк
int COMPARE(char LINE1[LEN], char LINE2[LEN], int n);
//Ввод строки (с ограничителем)
void EnterIN(char LINE[LEN]);
//действия для задания 1
void ACTIONS_1(char LINE1[LEN], char LINE2[LEN], int N);

//Задание 2
void task2(ifstream& TEXT);

//Задание 3
void task3(ifstream &TEXT);

int main() {
    int number;
    cout << "Enter the number, or enter 0 to close - ";
    cin >> number;
    while (number) {
        if (number == 1) {
            int N = N_INPUT();
            char LINE1[LEN], LINE2[LEN];
            EnterIN(LINE1);
            EnterIN(LINE2);
            ACTIONS_1(LINE1, LINE2, N);
        }
        if (number == 2) {
			ifstream TEXT;
            TEXT.open("text.txt");
            task2(TEXT);
            TEXT.close();
        }
        if (number == 3) {

        }
        cout << "Enter the number, or enter 0 to close - ";
        cin >> number;
    }
    return 0;
}

int N_INPUT() {
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

int COMPARE(char LINE1[LEN], char LINE2[LEN], int n) {
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
    cout << COMPARE(LINE1, LINE2, N) << endl;
}

void task2(ifstream& TEXT) {
    char line[255];
    char *word;
	char delim[] = " !?.,\n";
    while (TEXT.getline(line, 255, NULL)) {
        word = strtok(line, delim);
		while (word != NULL) {
			if(strlen(word) > 3) cout << word << endl;
			word = strtok(NULL, delim);
		}
    }
}

void task3(ifstream &TEXT) {
    
}