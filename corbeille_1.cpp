#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>

class Texte {
    public :
    std::string texte;
    std::string Lire(){
        std::cout << texte << std::endl; 
        std::ifstream fichier("corbeille_1.txt");
        std::stringstream contenu;
        contenu << fichier.rdbuf();
        return contenu.str();
    }
    void Ecrire (std::string new_texte) {
        texte = new_texte;
    }
};

int main(){
    Texte t;
    std::cout << t.Lire() << std::endl; 
    return 0;
}