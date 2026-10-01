#include <iostream> 
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); // Лол 
	srand(time(NULL));

	


	return 0;
}

/* 
	типы данных:

	bool				true/false		0 - false

	char				'+'      43  
	unsigned char		0 - 255

	short				123			-32768 -- 32767
	unsigned short		123			0 -- 65535

	int					123456		-2147483648 -- 2147483647
	unsigned int		123456		0 - 4294967295

	float				123.542		+- 3.4e-38...3.4e+38

	double				123123.123123	+- 1.7e-308...1.7e-308
	long double			no comment		3.4-4932

	long long int		.................

	auto				???


	Операторы:

	математические: + - / * % () ++ -- += -= *= /= =
	сравнительные: > < == >= <= !=		<=> 
	логические:		&& (и)		|| (или)	! (не)

	ТАБУ:	goto		and or not		int номерОдин;


	std::cout << "1) Меня зовут Имя" << std::endl;
	std::cout << "\tText\nPovar\n";
	std::cout << "\t\tText 2\n";
	std::cout << "Пачка пельменей стоит " << 100 << " рублей\n";

	std::cout << ' ' << "+";


	double one = 0;
	double two = 0;
	char sym = ' ';

	std::cout << "Калькулятор\n\n";
	std::cout << "Введите первое число: ";
	std::cin >> one;
	std::cout << "Введите действие: + - * /\n";
	std::cout << "Ввод: ";
	std::cin >> sym;
	std::cout << "Введите второе число: ";
	std::cin >> two;

	std::cout << "\n\n";

	if (sym == '+')
	{
		std::cout << "Сумма: " << one + two << "\n\n";
	}
	else if (sym == '*')
	{
		std::cout << "Произведение: " << one * two << "\n\n";
	}
	else if (sym == '-')
	{
		std::cout << "Разность: " << one - two << "\n\n";
	}
	else if (sym == '/')
	{
		if (two != 0)
		{
			std::cout << "Частное: " << one / two << "\n\n";
		}
		else
		{
			std::cout << "Нельзя делить на 0\n";
		}
	}
	else if (sym == '/' && two != 0)
	{
		std::cout << "Частное: " << one / two << "\n\n";
	}
	else
	{
		std::cout << "Некорректный ввод\n";
	}


	double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите А: ";
	std::cin >> a;
	std::cout << "Введите B: ";
	std::cin >> b;
	std::cout << "Введите C: ";
	std::cin >> c;

	std::cout << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

	d = std::pow(b, 2) - 4 * a * c;

	std::cout << "Дискриминант: " << d << "\n\n";

	if (d < 0)
	{
		std::cout << "Корней нет!\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень: " << x1 << "\n";
	}
	else if (d > 0)
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b - std::sqrt(d)) / (2 * a);
		std::cout << "X1: " << x1 << "\n";
		std::cout << "X2: " << x2 << "\n";
	}



*/

/*
	int num = 0;
	int sum = 0;
	while (true)
	{
		std::cout << "Введите число: ";
		std::cin >> num;
		if (num == 0)
		{
			break;
		}
		sum += num;
	}
	std::cout << "Сумма чисел: " << sum << "\n";	

	int num = 0;

	do
	{
		std::cout << "1 - Пахомов\n";
		std::cout << "2 - Сергей\n";
		std::cout << "3 - Игоревич\n";
		std::cout << "Ввод: ";
		std::cin >> num;

	} while (num < 1 || num > 3);

	if (num == 1)
	{
		std::cout << "Пахомов\n";
	}
	else if (num == 2)
	{
		std::cout << "Сергей\n";
	}
	else
	{
		std::cout << "Игоревич\n";
	}


*/

/*

int choose = 0, number = 0, hp = 0, randomNumber = 0;
	int maxHp = 25, maxHpHard = 25, chance = 30;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tВыберите уровень сложности\"\n\n\n";
				std::cout << "1 - Лёгкий (1 - 500)\n";
				std::cout << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;

					while (true)
					{
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\nВы угадали! Поздравляем!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли за диапозон\n";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было: " << randomNumber << "\n";
								system("pause");
								break;
							}

							std::cout << "\nНе угадали\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << randomNumber << "\n";
									system("pause");
									break;
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 2)
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxHpHard;

					while (true)
					{
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\nВы угадали! Поздравляем!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за диапозон\n";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было: " << randomNumber << "\n";
								system("pause");
								break;
							}

							std::cout << "\nНе угадали\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								if (rand() % 101 <= chance)
								{
									std::cout << "\nБесплатная подсказка\n";
									Sleep(1000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << "Число компьютера было: " << randomNumber << "\n";
										system("pause");
										break;
									}
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(rand() % 1200 + 500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tНастройки игры\"\n\n\n";
				std::cout << "1 - Изменить кол-во жизней для лёгкой игры\n";
				std::cout << "2 - Изменить кол-во жизней для сложной игры\n";
				std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите кол-во жизней для лёгкой игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимые лимиты от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							Sleep(1000);
							maxHp = choose;
							break;
						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите кол-во жизней для сложной игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимые лимиты от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							Sleep(1000);
							maxHpHard = choose;
							break;
						}
					}
				}
				else if (choose == 3)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимые лимиты от 0 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							Sleep(1000);
							chance = choose;
							break;
						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
			break;
		}
		else
		{
			std::cout << "\nНекорректный ввод\n";
			Sleep(1500);
		}
	}

*/

/*

const int size = 10;

	double sumP = 0, sumO = 0;

	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
		std::cout << arr[i] << " ";
		if (arr[i] > 0)
		{
			sumP += arr[i];
		}
		else
		{
			sumO += arr[i];
		}
	}
		std::cout << sumP << "\n" << sumO << "\n" << (sumP + sumO) / size;
*/


/*
// тип_данных имя_массива[кол-во_ячеек];

	const int row = 3, col = 4;

	int arr[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}


*/