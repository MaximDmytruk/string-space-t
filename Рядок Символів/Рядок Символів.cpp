﻿//1. Дан рядок символів. Замінити в ньому всі пробіли на табуляцію

#include <string>	//Бібліотека для рооти з рядками
#include <iostream>
using namespace std;

int main()
{
	string r;		
	cout << "Enter some text " << endl;	//Просимо ввести кор. рядок з символів
	getline(cin, r);		//ввід рядка
	int size = r.size();		//вичисляємо розмір рядка
	for (int i = 0; i < size; i++)//запускаємо цикл для первірки кожного елементу 
	{
		if (r[i] == ' ') {		//якщо даний символ це пробіл 
			r[i] = '\t';	//заміняємо його(проьіл) на табуляцію
		}
	}
	cout << r << endl;	//виводимо оновлений рядок.
}


