#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int deminator;

public:
    void Init(int num, int dem)
    {
        if (dem == 0)
        {
            cout << "Error. eminator = 0" << endl;
        }
        else
        {
            numerator = num;
            deminator = dem;

        }
    }
    void Print() {
        cout << "Nomenator : " << numerator << " /: " << "Deminator : " << deminator << endl;
    }

    Fraction add(Fraction second) {
        Fraction result;

        int newNumerator = numerator * second.deminator + second.numerator * deminator;
        int newDenominator = deminator * second.deminator;

        result.Init(newNumerator, newDenominator);
        return result;
    }
    Fraction sub(Fraction second)
    {
        Fraction result;
        int newNumerator = numerator * second.deminator - second.numerator * deminator;
        int newDenominator = deminator * second.deminator;

        result.Init(newNumerator, newDenominator);
        return result;
    }
    Fraction mul(Fraction second) {
        Fraction result;
        int newNumerator = numerator * second.numerator;
        int newDeminator = deminator * second.deminator;

        result.Init(newNumerator, newDeminator);
        return result;
    }
    Fraction del(Fraction second)
    {
        Fraction result;

        int newNumerator = numerator / second.numerator;
        int newDeminator = deminator / second.deminator;

        result.Init(newNumerator, newDeminator);
        return result;
    }
    int GetF1() {


    }
};
/*  Реализуйте класс Дробь. Необходимо хранить числитель и знаменатель в качестве переменных-членов.
Реализуйте функции-члены для ввода данных в переменные-члены, для выполнения арифметических операций
(сложение, вычитание, умножение, деление, и т.д.) */
int main()
{
    Fraction f1, f2;

    f1.Init(1, 2);   
    f2.Init(3, 4);   

    cout << "f1 = ";
    f1.Print();

    cout << "f2 = ";
    f2.Print();

    cout << "summ: ";
    f1.add(f2).Print();

    cout << "raznost: ";
    f1.sub(f2).Print();

    cout << "Work: ";
    f1.mul(f2).Print();

    cout << "private: ";
    f1.del(f2).Print();
}