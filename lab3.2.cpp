
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ru");
	string input;
	cout << "Введите тест";
	getline(cin, input); 
	
	int k = -1;
	bool isWord = false;

	for (char c : input) {
		if (c != ' ') {
			if (!isWord) {
				k++;
				isWord = true;
			}
		}
		else {
			isWord = false;
		}
	}

	cout << "Количество пробелов: " << (k) << endl;

	return 0;
}
