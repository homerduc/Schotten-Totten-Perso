#include <iostream>
#include "CarteClan.h"
#include "CarteTactique.h"
#include "vector"
#include "Total.h"
#include "TotalClassique.h"
#include "TotalTactique.h"
#include "Affichage.h"
#include "JeuClassique.h"
#include "Application.h"

using namespace std;

int main()
{
    // Tests
    try {
        /*
        JeuClassique& jeu = JeuClassique::getInstance();

        // getJoueur renvoie un CONST shared_ptr<Joueur>, �a veut dire que le pointeur en lui m�me est const mais pas l'objet � l'int�rieur
        // Et comme mes m�thodes prennent des shared_ptr<Joueur> en param�tres, la solution est de cr�er un nouvel objet qui partagera
        // la possession du Joueur
        shared_ptr<Joueur> J1 = jeu.getJoueurs()[0];
        shared_ptr<Joueur> J2 = jeu.getJoueurs()[1];
        jeu.poserCarte(0, 0, J1);
        jeu.poserCarte(0, 0, J2);
        jeu.poserCarte(0, 0, J1);
        jeu.poserCarte(0, 0, J2);
        jeu.poserCarte(0, 0, J1);
        jeu.poserCarte(0, 0, J2);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J2);
        jeu.piocher(J2);
        jeu.piocher(J2);

        jeu.poserCarte(1, 0, J1);
        jeu.poserCarte(1, 0, J2);
        jeu.poserCarte(1, 0, J1);
        jeu.poserCarte(1, 0, J2);
        jeu.poserCarte(1, 0, J1);
        jeu.poserCarte(1, 0, J2);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J2);
        jeu.piocher(J2);
        jeu.piocher(J2);

        jeu.poserCarte(2, 0, J1);
        jeu.poserCarte(2, 0, J2);
        jeu.poserCarte(2, 0, J1);
        jeu.poserCarte(2, 0, J2);
        jeu.poserCarte(2, 0, J1);
        jeu.poserCarte(2, 0, J2);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J2);
        jeu.piocher(J2);
        jeu.piocher(J2);

        jeu.poserCarte(3, 0, J1);
        jeu.poserCarte(3, 0, J2);
        jeu.poserCarte(3, 0, J1);
        jeu.poserCarte(3, 0, J2);
        jeu.poserCarte(3, 0, J1);
        jeu.poserCarte(3, 0, J2);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J2);
        jeu.piocher(J2);
        jeu.piocher(J2);

        jeu.poserCarte(4, 0, J1);
        jeu.poserCarte(4, 0, J2);
        jeu.poserCarte(4, 0, J1);
        jeu.poserCarte(4, 0, J2);
        jeu.poserCarte(4, 0, J1);
        jeu.poserCarte(4, 0, J2);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J2);
        jeu.piocher(J2);
        jeu.piocher(J2);

        jeu.poserCarte(5, 0, J1);
        jeu.poserCarte(5, 0, J2);
        jeu.poserCarte(5, 0, J1);
        jeu.poserCarte(5, 0, J2);
        jeu.poserCarte(5, 0, J1);
        jeu.poserCarte(5, 0, J2);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J2);
        jeu.piocher(J2);
        jeu.piocher(J2);

        jeu.poserCarte(6, 0, J1);
        jeu.poserCarte(6, 0, J2);
        jeu.poserCarte(6, 0, J1);
        jeu.poserCarte(6, 0, J2);
        jeu.poserCarte(6, 0, J1);
        jeu.poserCarte(6, 0, J2);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J1);
        jeu.piocher(J2);
        jeu.piocher(J2);
        jeu.piocher(J2);


        jeu.poserCarte(7, 0, J1);
        jeu.poserCarte(7, 0, J2);
        jeu.poserCarte(7, 0, J1);
        jeu.poserCarte(7, 0, J2);
        jeu.poserCarte(7, 0, J1);
        jeu.poserCarte(7, 0, J2);

        jeu.poserCarte(8, 0, J1);
        jeu.poserCarte(8, 0, J2);
        jeu.poserCarte(8, 0, J1);
        jeu.poserCarte(8, 0, J2);
        jeu.poserCarte(8, 0, J1);
        jeu.poserCarte(8, 0, J2);

        // Boucle qui r�clame toutes les bornes pour tester
        for (unsigned int i = 0; i < 9; ++i) {
            if (jeu.borneEstRevendicableParJoueur(i, J1)) {
                jeu.revendiquerBorne(i, J1);
            }
            else {
                jeu.revendiquerBorne(i, J2);
            }
        }

        cout << jeu.getGagnant().get()->getNom() << endl;
        cout << Interaction::arreterRevendication() << endl;
        */
        
        Application a;
        a.lancerApplication();
    }
    catch (exception e) {
        cout << e.what() << endl;
    }

}
