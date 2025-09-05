#include<iostream>
using namespace std;

class Point // создание своего ТИПА!!!
{
private:  // реализация объекта
	int x; // поле объекта
	int y; // поле объекта
	char s; // поле объекта

public: // интерфейс объекта
	void Print() // метод класса 
	{
		cout <<s<< "-> X: " << x << "\tY: " << y << endl;
	}
	void Init(char t,int a, int b) // метод класса 
	{
		s = t;
		x = a;
		y = b;
	}
	///методы аксессоры
	int GetX() // inspector / getter
	{
		return x;

	}
	void SetX(int a) // modificator / setter
	{
		if (a > 0)
		{
			x = a;
		}

	}
	int GetY() // inspector / getter
	{
		return y;
	}
	void SetY(int a) // modificator / setter
	{
		if (a > 0)
		{
			y = a;
		}
	int GetS() // inspector / getter
	{
		return s;
	}
	void SetS(int a) // modificator / setter
	{
		if (a > 0)
		{
			s = a;
		}
	}
	}
};
int main() // клент
{
	Point a;
	a.Init('A', 10, 15);
	a.Print();

	Point b;
	b.Init('B', -5, 12);
	b.Print();
}