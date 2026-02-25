#include <iostream>

constexpr int ELEMENTS = 100;

int main()
{
    int *b = new int[ELEMENTS];
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    for (int i = 0; i < ELEMENTS; i++)
    {
        b[i] = (i + 1) * 2;
    }
    for (int i = 0; i < ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;
    for (int i = 0; i < ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;

    return 0;
}
