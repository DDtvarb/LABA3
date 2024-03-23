﻿#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
using namespace std;


int countVowels(const string& str) {
	int count = 0;
	string vowels = "Аа";
	for (int i = 0; i < str.length(); i++) {
		if (vowels.find(str[i]) != string::npos) {
			count++;
		}
	}
	return count;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	string tet;
	cout << "Введите текст: "; getline(cin, tet);
	cout << "Количество гласных в тексте " << tet << " : " << countVowels(tet) << endl;
}
