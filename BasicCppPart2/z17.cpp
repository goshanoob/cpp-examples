﻿/*
Задача 17. Даны значения температуры, наблюдавшиеся в течение N подряд идущих дней. Найдите номера дней (в нумерации с нуля) со значением 
температуры выше среднего арифметического за все N дней.
Гарантируется, что среднее арифметическое значений температуры является целым числом.
Формат ввода
Вводится число N, затем N неотрицательных целых чисел — значения температуры в 0-й, 1-й, ... (N−1)-й день.
Формат вывода
Первое число K — количество дней, значение температуры в которых выше среднего арифметического. 
Затем K целых чисел — номера этих дней.
*/

#include <vector>
#include <iostream>
using namespace std;

void z17() {
	int N, sum = 0, K = 0;
	float average;
	vector<int> temperature, daysNumbers;
	cout << "Задача 17. Введите количество дней наблюдений температуры:\n";
	cin >> N;
	cout << "Введите значения температуры по дням:\n";
	temperature.resize(N);
	for (auto& value : temperature) {
		cin >> value;
		sum += value;
	}
	average = sum / N;
	for (int i = 0; i < N; i++) {
		if (temperature[i] > average) {
			daysNumbers.push_back(i);
			K++;
		}
	}
	cout << "Количество дней, когда было теплее среднего:\n" << K << endl;
	cout << "Номера дней, когда было теплее среднего:\n";
	for (auto& number : daysNumbers) {
		cout << number << " ";
	}
}