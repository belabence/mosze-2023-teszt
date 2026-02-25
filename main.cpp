#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  //hianyzo _
    std::cout << '1-100 ertekek duplazasa' // '' helyett ""
    for (int i = 0;) // hianyzo < N_ELEMENTS és a i++
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // hianyzo < N_ELEMENTS
    {
        std::cout << "Ertek:" // hianyzo << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // ; problemak
    {
        atlag += b[i] // ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

//eloszor elfelejtettem a kommenteket kiírni, azért van ez a branch.