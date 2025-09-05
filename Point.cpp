#include<iostream>
using namespace std;

class Point // �������� ������ ����!!!
{
private:  // ���������� �������
	int x; // ���� �������
	int y; // ���� �������
	char s; // ���� �������

public: // ��������� �������
	void Print() // ����� ������ 
	{
		cout <<s<< "-> X: " << x << "\tY: " << y << endl;
	}
	void Init(char t,int a, int b) // ����� ������ 
	{
		s = t;
		x = a;
		y = b;
	}
	///������ ���������
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
int main() // �����
{
	Point a;
	a.Init('A', 10, 15);
	a.Print();

	Point b;
	b.Init('B', -5, 12);
	b.Print();
}