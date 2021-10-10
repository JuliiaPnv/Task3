#include <iostream>
using namespace std;

int main()
{
    int max, min, M, i, F;
        while (1)
        {
            cout << "prime number M = ";
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
                cout << "number " << M << " is not prime"<<endl;
        }
        while (1)
        {
            cout << "enter number F (from 0 to " << M << ") = ";
            cin >> F;
            if (F >= 0 && F <= M)
                break;
        }
        for (i = 0; i < M; i++) 
        {
            if (i * i % M == F) {
                cout << "Yes";
                return true;
            }
        }
        cout << "No";
        return false;
}
