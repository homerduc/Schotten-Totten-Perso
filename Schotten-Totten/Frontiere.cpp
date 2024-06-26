#include "Frontiere.h"

Frontiere::Frontiere(vector<shared_ptr<Joueur>> joueurs) : bornes(Regles::getInstance().getNbBornes())
{
	// Les bornes ont �t� cr��es avec le constructeur par d�faut, maintenant on va les initaliser
	for (auto& itBorne : bornes) {
		for (const auto& joueur : joueurs) {
			itBorne.ajouterJoueur(joueur, TasBorne());
		}
	}
}

void Frontiere::revendiquerBorne(unsigned int index, const shared_ptr<Joueur>& joueur)
{
    // Effectuer les v�rifications avant l'appel � cette m�thode, ce if sert de s�curit�
    if (bornes[index].estRevendicableParJoueur(joueur)) {
        bornes[index].revendiquer(joueur);
    }
    else {
		throw std::runtime_error("La borne n'est pas revendicable par ce joueur, effectuez des verifications avant d'appeler Frontiere::revendiquerBorne");
	}
}

bool Frontiere::joueurAGagne(const shared_ptr<Joueur>& joueur) const
{
	size_t nbRequisTotal = bornes.size() / 2; // Division enti�re
	if (bornes.size() % 2 != 0) { // Si le nb de bornes est impair alors on arrondit nbRequis au-dessus
		nbRequisTotal++;
	}

	size_t compteurAdjacentes = 0;
	size_t compteurTotal = 0;

	// On utilise les compteurs
	for (const auto& itBorne : bornes) {
		if (itBorne.getProprietaire() == joueur) {
			compteurAdjacentes++;
			compteurTotal++;
			
			// A-t-on atteint n ?
			if (compteurAdjacentes == Regles::getInstance().getNbBornesAdjacentesPourGagner()) {
				return true;
			}
		}
		else {
			compteurAdjacentes = 0;
		}
	}

	// Si le joueur a revendiqu� plus de la moiti� des bornes
	if (compteurTotal >= nbRequisTotal) {
		return true;
	}

	return false;
}

void Frontiere::poserCarte(unsigned int indexBorne, unsigned int indexCarte, shared_ptr<Joueur>& joueur)
{
	bornes[indexBorne].ajouterCarteTasBorne(joueur, indexCarte);
}
