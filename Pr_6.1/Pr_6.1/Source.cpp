#include <iomanip> 

#include <time.h> 

#include <iostream> 

using namespace std;

void Create(int* a, const int size, const int Low, const int High)

{

    for (int i = 0; i < size; i++)

        a[i] = Low + rand() % (High - Low + 1);

}

void Print(int* a, const int size)

{

    for (int i = 0; i < size; i++)

        cout << setw(4) << a[i];

    cout << endl;

}

int Sum(int* a, const int size)

{

    int S = 0;

    for (int i = 0; i < size; i++)

        S += a[i];

    return S;

}

int main()

{

    srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел 

    const int n = 26;

    int a[n];

    int Low = -40;

    int High = 20;

    Create(a, n, Low, High);

    Print(a, n);

    cout << "S = " << Sum(a, n) << endl;

    return 0;

}