#include <iostream>
using namespace std;

int main()
{
    int max, min, M, i, F;
    setlocale(LC_ALL, "Rus");
        while (1)
        {
            cout << "������� ������� ����� M = ";
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
                cout << "����� " << M << " �� �������� �������"<<endl;
        }
        while (1)
        {
            cout << "������� ����� F (�� 0 �� " << M << ") = ";
            cin >> F;
            if (F >= 0 && F <= M)
                break;
        }
        for (i = 0; i < M; i++) 
        {
            if (i * i % M == F) {
                cout << "��";
                return true;
            }
        }
        cout << "���";
        return false;
}
