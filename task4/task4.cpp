//подключение директивы
#include <iostream>
/* Дана оценка по пятибальной шкале,
нужно вывести «отлично» для числа 5, «хорошо» для 4, 
«средне» для 3 и «хуже среднего» для значений от 0 до 2 включительно
*/

int main()
{
	setlocale(LC_ALL, "ru");
	//Объявление переменной
	int num;
	//Ввод данных от пользователя
	std::cin >> num;
	//Вызов оператора switch
	switch (num)
	{
	case 5:
	std::cout << "отлино";
		break; 
	case 4:
			std::cout << "хорошо";
			break;
	case 3:
		std::cout << "средне";
		break;
	default:
		std::cout << "хуже среднего";
		break;

	}
}

