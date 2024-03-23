#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
	string str;
	int count = 0;
	cout << "Введите строку: ";
	getline(cin, str);
	const char* pstr = str.c_str();
	cout << std::count(str.begin(), str.end(), ' ') << "\t";

	while ((pstr = strchr(pstr + 1, ' ')) != NULL)
		count++;

	cout << count << endl;
	
}
