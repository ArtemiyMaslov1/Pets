#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class ��������_��������
{
protected:
	int Speed;
	char* Colour = new char;
public:
	virtual void Sound() = 0;
	virtual void Show() = 0;
	virtual void Type() = 0;

};

class ������ :public ��������_��������
{
public:
	������(int S, const char* C)
	{
		Speed = S;
		strcpy(Colour, C);
	}
	virtual void Sound()
	{
		cout << "������: " << endl;
		cout << "�������: " << "���-���" << endl;
	}

	virtual void Show()
	{
		cout << "���: " << "�����" << endl;
	}

	virtual void Type()
	{
		cout << "������: " << "��������" << endl;
	}
};


class ����� :public ��������_��������
{
public:
	�����(int S, const char* C)
	{
		Speed = S;
		strcpy(Colour, C);
	}
	virtual void Sound()
	{
		cout << "�����: " << endl;
		cout << "�������: " << "���-���" << endl;
	}

	virtual void Show()
	{
		cout << "���: " << "������" << endl;
	}

	virtual void Type()
	{
		cout << "������: " << "���� - ���" << endl;
	}
};

class ������� :public ��������_��������
{
public:
	�������(int S, const char* C)
	{
		Speed = S;
		strcpy(Colour, C);
	}
	virtual void Sound()
	{
		cout << "�������: " << endl;
		cout << "�������: " << "���-�� �� �����������" << endl;
	}

	virtual void Show()
	{
		cout << "���: " << "����" << endl;
	}

	virtual void Type()
	{
		cout << "������: " << "���������" << endl;
	}
};

class ����� :public ��������_��������
{
public:
	�����(int S, const char* C)
	{
		Speed = S;
		strcpy(Colour, C);
	}
	virtual void Sound()
	{
		cout << "�����: " << endl;
		cout << "�������: " << "���-�� �� �����������" << endl;
	}

	virtual void Show()
	{
		cout << "���: " << "����" << endl;
	}

	virtual void Type()
	{
		cout << "������: " << "���������" << endl;
	}
};

void main()
{
	setlocale(0, "");
	��������_��������* animals[4] = { new ������(32, "�����"), new �����(40, "������"), new �������(5, "��������"), new �����(2, "�����") };
	for (int i = 0; i < 4; i++)
	{
		animals[i]->Sound();
		animals[i]->Show();
		animals[i]->Type();
	}
}