// 6.3.cpp : 
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct student
{
    std::string imie, nazwisko;
    int nrindeksu;

};

bool studentSort(student& a, student& b)
{
    return a.nrindeksu < b.nrindeksu;
}

int main()
{
    int ilestudentow;

    std::cout << "Ilu studentow chcesz wprowadzic?\n\n";
    std::cin >> ilestudentow;

    std::vector <student> osoba (ilestudentow);
 

    for (int i = 0; i < ilestudentow; i++)
    {
        std::cout << "Podaj imie studenta nr: " << i << "\n";
        std::cin >> osoba[i].imie;
        std::cout << "Podaj nazwisko studenta:\n";
        std::cin >> osoba[i].nazwisko;
        std::cout << "Podaj nr indeksu studenta:\n";
        std::cin >> osoba[i].nrindeksu;
    }

    std::cout << "\n\nLista studentow:\n\n";

    for (const auto& array : osoba)
    {
        std::cout << "Imie: " << array.imie << "\n"
            << "Nazwisko: " << array.nazwisko << "\n"
            << "Nr indeksu: " << array.nrindeksu << "\n\n";
    }


    std::sort(osoba.begin(), osoba.end(), studentSort);
  
    std::cout << "\n\nLista studentow posortowanych po nr indeksu:\n\n";

    for (const auto& array : osoba)
    {
        std::cout << "Imie: " << array.imie << "\n"
            << "Nazwisko: " << array.nazwisko << "\n"
            << "Nr indeksu: " << array.nrindeksu << "\n\n";
    }

   

    return 0;
}


