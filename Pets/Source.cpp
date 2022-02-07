#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Домашние_животные
{
protected:
	int Speed;
	char* Colour = new char;
public:
	virtual void Sound() = 0;
	virtual void Show() = 0;
	virtual void Type() = 0;

};

class Собака :public Домашние_животные
{
public:
	Собака(int S, const char* C)
	{
		Speed = S;
		strcpy(Colour, C);
	}
	virtual void Sound()
	{
		cout << "Собака: " << endl;
		cout << "Говорит: " << "Гав-гав" << endl;
	}

	virtual void Show()
	{
		cout << "Имя: " << "Шарик" << endl;
	}

	virtual void Type()
	{
		cout << "Порода: " << "Чихуахуа" << endl;
	}
};


class Кошка :public Домашние_животные
{
public:
	Кошка(int S, const char* C)
	{
		Speed = S;
		strcpy(Colour, C);
	}
	virtual void Sound()
	{
		cout << "Кошка: " << endl;
		cout << "Говорит: " << "Мяу-Мяу" << endl;
	}

	virtual void Show()
	{
		cout << "Имя: " << "Мурзик" << endl;
	}

	virtual void Type()
	{
		cout << "Порода: " << "Мейн - кун" << endl;
	}
};

class Попугай :public Домашние_животные
{
public:
	Попугай(int S, const char* C)
	{
		Speed = S;
		strcpy(Colour, C);
	}
	virtual void Sound()
	{
		cout << "Попугай: " << endl;
		cout << "Говорит: " << "Что-то на попугайском" << endl;
	}

	virtual void Show()
	{
		cout << "Имя: " << "Кеша" << endl;
	}

	virtual void Type()
	{
		cout << "Порода: " << "Волнистый" << endl;
	}
};

class Хомяк :public Домашние_животные
{
public:
	Хомяк(int S, const char* C)
	{
		Speed = S;
		strcpy(Colour, C);
	}
	virtual void Sound()
	{
		cout << "Хомяк: " << endl;
		cout << "Говорит: " << "Что-то на хомяковском" << endl;
	}

	virtual void Show()
	{
		cout << "Имя: " << "Хома" << endl;
	}

	virtual void Type()
	{
		cout << "Порода: " << "Сирийский" << endl;
	}
};

void main()
{
	setlocale(0, "");
	Домашние_животные* animals[4] = { new Собака(32, "Рыжая"), new Кошка(40, "Черная"), new Попугай(5, "Радужный"), new Хомяк(2, "Серый") };
	for (int i = 0; i < 4; i++)
	{
		animals[i]->Sound();
		animals[i]->Show();
		animals[i]->Type();
	}
}