#include <iostream>
using namespace std;

int main()
{
    int max, min, M, i, F;
    setlocale(LC_ALL, "Rus");
        while (1)
        {
            cout << "введите простое число M = ";
            cin >> M;
            max = 2;
            min = M - 1;
            for (i = 0; i <= M; i++)
            {
                if (M % max != 0)
                    max++;
                if (M % min != 0)
                    min--;
            }
            if (max == M && min == 1)
                break;
            else
                cout << "число " << M << " не является простым"<<endl;
        }
        while (1)
        {
            cout << "введите число F (от 0 по " << M << ") = ";
            cin >> F;
            if (F >= 0 && F <= M)
                break;
        }
        for (i = 0; i < M; i++) 
        {
            if (i * i % M == F) {
                cout << "Да";
                return true;
            }
        }
        cout << "Нет";
        return false;
}
