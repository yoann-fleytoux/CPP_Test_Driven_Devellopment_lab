#ifndef _COULEUR_H
#define _COULEUR_H
#include <stdexcept>
using namespace std;

class Couleur
{
      private :
         
      int rouge ; // nuance de rouge
      int vert ; // nuance de vert
      int bleu ; // nuance de ble
         
      public :

      // construit une couleur � partir de sa nuance rouge r, verte v et bleue b
      // l�ve l'exception "ERREUR NUANCE DE ROUGE" si la valeur de la
      // nuance r n'est pas comprise dans l'intervalle [0,255]
      // l�ve l'exception "ERREUR NUANCE DE VERT" si la valeur de la
      // nuance v n'est pas comprise dans l'intervalle [0,255]
      // l�ve l'exception "ERREUR NUANCE DE BLEU" si la valeur de la
      // nuance b n'est pas comprise dans l'intervalle [0,255]
      Couleur(const int r, const int v, const int b) throw (domain_error);
      // constante d�signant la couleur rouge
      static const Couleur ROUGE;
      // constante d�signant la couleur verte
      static const Couleur VERT;
      // constante d�signant la couleur bleue
      static const Couleur BLEU;
      // fournit la nuance de rouge
      int getRouge() const;
      // fournit la nuance de vert
      int getVert() const;
      // fournit la nuance de bleu
      int getBleu() const;
      // fournit la valeur RVB d'une couleur
      long getValeurRVB() const;
      // modifie une couleur � partir d�une nouvelle nuance de rouge r
      // l�ve l'exception "ERREUR NUANCE DE ROUGE" si la valeur de la
      // nuance r n'est pas comprise dans l'intervalle [0,255]
      void setRouge(const int r) throw (domain_error);
      // modifie une couleur � partir d�une nouvelle nuance de vert v
      // l�ve l'exception "ERREUR NUANCE DE VERT" si la valeur de la
      // nuance v n'est pas comprise dans l'intervalle [0,255]
      void setVert(const int v) throw (domain_error) ;
      // modifie une couleur � partir d�une nouvelle nuance de bleu b
      // l�ve l'exception "ERREUR NUANCE DE BLEU" si la valeur de la
      // nuance b n'est pas comprise dans l'intervalle [0,255]
      void setBleu(const int b) throw (domain_error);
};
#endif
