
#include <iostream>

int func_recurs(int n, int m)
{
    if (m == 0)
    {
        return n;
    }
    return func_recurs(m, n % m);
}

int func_ne_recurs(int n, int m)
{
    while (m != 0)
    {
        int temp = m;
        m = n % m;
        n = temp;
    }
    return n;
}


int main()
{
    setlocale(0, "RUS");
    int a;
    int b;
    std::cout << "Введите A: ";
    std::cin >> a;
    std::cout << "Введите B: ";
    std::cin >> b;
    std::cout << " A =  " << a << " B =  " << b << " Результат:  " << func_recurs(a, b) << std::endl;
    
    int a_1;
    int b_1;
    std::cout << "Введите A: ";
    std::cin >> a_1;
    std::cout << "Введите B: ";
    std::cin >> b_1;
    std::cout << " A =  " << a_1 << " B =  " << b_1 << " Результат:  " << func_ne_recurs(a_1, b_1) << std::endl;
    return 0;

}


