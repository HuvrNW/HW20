#include <iostream>
#include <ctime>
#include <cstdlib>

//Выводит массив на экран
void showArr(int arr[], const int length);

// Поиск первого индекса
int searchIndex(int arr[], const int length, int value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
}

// Поиск последнего индекса
int searchLastIndex(int arr[], const int length, int value, int begin = 0) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
}

// Максимальный элемент массива.
int maxElement(int arr[], const int length);

// Минимальный элемент массива.
int minElement(int arr[], const int length);

// Среднее арифметическое
int meanValue(int arr[], const int length);

// Вывод все элементов из диапазона
void range(int arr[], const int length, int n1, int n2);

//Количество вхождений переданного элемента в массив.
int count(int arr[], const int length, int value);

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;

	const int size = 100;
	int arr[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		arr[i] = rand() % (100 + 1 + 100) - 100 ;
	std::cout << " Функция 1.\n Вывод массива на экран --> ";
	showArr(arr, size);
	
	std::cout << "\n\n Функция 2.\n Возвращает индекс первого вхождения элемента в массив.\n";
	std::cout << " Введите число --> ";
	std::cin >> x;
	std::cout << " Индекс первого числа " << x << " в массиве --> " << searchIndex(arr, size, x);
	
	std::cout << "\n\n Функция 3.\n Возвращает индекс последнего вхождения элемента в массив.\n";
	std::cout << " Введите число --> ";
	std::cin >> x;
	std::cout << " Индекс последнего числа " << x << " в массиве --> " << searchLastIndex(arr, size, x, 100) << '\n';
	
	std::cout << " Функция 4.\n Наибольший элемент массива --> " << maxElement(arr, size) << '\n';

	std::cout << " Функция 5.\n Наименьший элемент массива --> " << minElement(arr, size) << '\n';

	std::cout << " Функция 6.\n Среднее арифметическое элементов массива --> " << meanValue(arr, size) << '\n';
	
	std::cout << " Функция 7.\n Введите искомый диапазон --> ";
	std::cin >> x >> y;
	std::cout << " Элементы массива из данного диапазона --> ";
	range(arr, size, x, y);
	
	std::cout << "\n Функция 8.\n Введите элемент массива --> ";
	std::cin >> x;
	std::cout << " Элемент " << x << " встречается " << count(arr, size, x) << " раз в массиве.";

	return 0;
}

//Выводит массив на экран
void showArr(int arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]";
}

// Максимальный элемент массива.
int maxElement(int arr[], const int length) {
	int tmp = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] > tmp)
			tmp = arr[i];
	return tmp;
}

// Минимальный элемент массива.
int minElement(int arr[], const int length) {
	int tmp = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < tmp)
			tmp = arr[i];
	return tmp;
}

// Среднее арифметическое
int meanValue(int arr[], const int length) {
	int tmp = 0;
	for (int i = 0; i < length; i++)
		tmp += arr[i];
	return tmp / length;
}

// Вывод все элементов из диапазона
void range(int arr[], const int length, int n1, int n2) {
	if (n1 > n2) {
		for (int i = 0; i < length; i++) 
			if (arr[i] < n1 && arr[i] > n2)
				std::cout << arr[i] << ", ";
		std::cout << "\b\b.";
		
	}
	else{
			for (int i = 0; i < length; i++) 
				if (arr[i] < n2 && arr[i] > n1)
					std::cout << arr[i] << ", ";
			std::cout << "\b\b.";
			
	}
}

//Количество вхождений переданного элемента в массив.
int count(int arr[], const int length,int value) {
	int tmp = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] == value)
			tmp++;
	return tmp;
}





