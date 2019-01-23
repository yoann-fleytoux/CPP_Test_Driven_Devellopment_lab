#include <iostream>
#include "couleur.h"

int main(int argc, char *argv[])
{
    Couleur c(255, 155, 55);
    
    cout << "Valeur rouge : " << c.getRouge() << endl;
    cout << "Valeur vert : " << c.getVert() << endl;
    cout << "Valeur bleu : " << c.getBleu() << endl;
    cout << "Valeur RVB : " << c.getValeurRVB() << endl;
}


