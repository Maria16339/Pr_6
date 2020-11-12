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
        cout << "a["<< i << "] = "<< a[i]<< setw(4);
    cout << endl;
}

int main()

{
    srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел 
    const int n = 20;
    int a[n];
    int Low = -100;
    int High = 100;
    Create(a, n, Low, High);
    Print(a, n);
    return 0;

}