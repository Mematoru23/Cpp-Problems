#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int aux = 0;
    aux = a;
    a = b;
    b = aux;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;
}
