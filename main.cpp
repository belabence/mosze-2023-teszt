#include <iostream>

<<<<<<< HEAD
constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
=======
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
>>>>>>> hibak
    return 0;
}
