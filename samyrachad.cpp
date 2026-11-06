/*#EXERCICE1 

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
*/

#include <iostream>
#include <cmath>

class Circle {
public:
    double x;
    double y;
    double r; // radius

    void set_pos(double x1, double y1) 
    {
    x = x1;
    y = y1;
    }

    double perimeter() 
    {
    return 2 * M_PI * r;
    }
   
    double area()
    {
    return M_PI * r * r;
    }

};


//TODO: Add a method to calculate the area of the circle


class Rectangle
{
public:
    double x;
    double y;

    double w; //width
    double h; //height

    void set_pos(double x1, double y1) {
    x = x1;
    y = y1;
}
// Calculate the perimeter of the rectangle
    double perimeter() {
    return 2 * (w + h);
}
    double area()
    {
    return w * y;
    }

};

// TODO: Add a method to calculate the area of the rectangle

// Set the position of the top left corner


int main() {
    Circle c{0, 0, 1};
    std::cout << c.perimeter() << std::endl;
    c.set_pos(1, 1);
    std::cout << "Coordinates of the center: (" << c.x << ", " << c.y << ")" << std::endl;
    std::cout << c.area() << std::endl;

    Rectangle r{0, 0, 1, 2};
    std::cout << r.perimeter() << std::endl;
    r.set_pos(-1, -1);
    std::cout << "Coordinates of the top left corner: (" << r.x << ", " << r.y << ")" << std::endl;
    std::cout << r.area() << std::endl;
    return 0;
}