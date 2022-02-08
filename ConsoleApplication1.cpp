#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	ifstream fun;
	fun.open("Текст.txt");
	if (!fun.is_open())
	{
		cout << "Ошибка открытия файла !"<<endl ;

	}
	else {
		cout << "Файл открыт!" << endl;
		char ch;
		while (fun.get(ch))
		{
			cout << ch;

		}
	}

	fun.close();

	return 0;
}