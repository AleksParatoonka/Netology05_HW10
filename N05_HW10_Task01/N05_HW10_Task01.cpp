#include <iostream>
#include <windows.h>

int main() {
	//setlocale(LC_ALL, "Russian");
	//SetConsoleCP(CP_UTF8);
	//SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << std::endl;
}