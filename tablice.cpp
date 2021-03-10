#include <iostream>
using namespace std;

int main()
{
    int MAX;
    cin >> MAX;
    for (int i = 0; i < MAX; i++)
    {
        int liczba, a;
        cin >> liczba;
        int* tab;
        tab = new int[liczba];
        for (int i = 0; i < liczba; i++)
        {
            cin >> a;
            tab[i] = a;
        }

        for (int j = liczba - 1; j >= 0; j--)
        {
            cout << tab[j] << " ";
        }
        delete[] tab;
        cout << endl;
    }

    return 0;
}
