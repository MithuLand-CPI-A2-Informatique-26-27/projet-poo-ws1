### EXERCICE1 

#include <iostream>
#include <string>

class Date{
public:
    int jour;
    int mois;
    int year;

    void afficher(){
        std::cout << jour << " " << mois << " " << year << " " << std::endl;
    }

    void incr(){
        if(jour == 31)
        {
         jour = 1;
         mois = mois + 1;
        }
        else
        {
         jour = jour + 1;
        }
        if(mois == 02 and jour == 28)
        {
         jour = 1;
         mois = mois + 1;
        }
    }
};

int main(){
    int j_jour;
    int m_mois;
    int y_year;

     std::cout << "Jour = ";
     std::cin >> j_jour;
     std::cout << "Mois = ";
     std::cin >> m_mois;
     std::cout << "Year = ";
     std::cin >> y_year;
    
    Date MaDate;
    MaDate.jour = j_jour;
    MaDate.mois = m_mois;
    MaDate.year = y_year;
    MaDate.afficher();
    MaDate.incr();
    MaDate.afficher();
}
