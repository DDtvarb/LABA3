#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ru");
	string str;
	int count = 0;
	cout << "Введите строку: ";
	getline(cin, str);
	const char* pstr = str.c_str();
	cout << "Количество пробелов:" << std::count(str.begin(), str.end(), ' '); // count считает колличество вхождений пробелов 

	

	
	
}
