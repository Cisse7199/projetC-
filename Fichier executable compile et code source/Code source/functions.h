#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <iostream>;
#include <string>;
#include <vector>;
#include "functions.h";
#include <fstream>;
#include <algorithm>;
using namespace std;

int somme(int a, int b);
void testDistant();

//Declaration des classes et leurs constructeurs:
class SuperAnimal{


    //Declarations des attributs :
private:
    string groupe;
    string typeLocomotion;
    int nombreMembres;

    //Declarations du constructeur et les methodes :
public :
    SuperAnimal();

    //Fixer les valeurs des vareiables :
    void setGroupe(string Groupe);
    void setTypeLocomotion(string Locomotion);
    void setNombreMembres(int membres);

    //Recuperer les valeurs des attributs :
    string getGroupe();
    string getTypeLocomotion();
    int getNombreMembres();
    //Autres fonctions de la classe :
    void AjouterEspece();
    void rechercheEspece();
    void NombreEspeces();


};

//Declaration de la classe Animal :

class  Animal: public SuperAnimal{
private:
    string Nom;
    string DateNaissance;
    float poids;

public :
    Animal();
    void setNom(string nom);
    void setDateNaissance(string date);
    void setPoids(int poid);


    //Obtention des valeurs de ces classes :

    string getNom();
    string getDateNaissance();
    int getPoids();


    //Autres fonctions :
    void AjouterAnimal(string nameAnimal);
    void reproduire();
    int NombreAnimaux( int nombreAnimal);
    void etatSante(string Nom, int poids);
    void SuivreEvolutionEtPorte();
    string listeAnimaux();
    string recherche();
    void suivreReproduction();
    void genererRapport();

};

class DonnesElevage:public Animal{
private :
    int nombreTotal;

public :
    DonnesElevage();
    //Declaration des fonctions de la classe DonnesElevage:
    void setNombreTotal();
    int getNombreTotal();
    double budgetTotal(double budget);
    double chiffreAffaire(double chiffreAff);
    double benefice(double budget, double choiffreAff);
    void sauvegarder();
    void chargerDonnesDansFichier();



};

/*

//DEclaration des fonctions au niveau du fichier d entete :

//fixation des attributs
/*void setNom(string nom);
void setDateNaissance(string date);
void setPoids(int poid);

//obtention des attributs :
string getNom();
string getDateNaissance();
int getPoids();

//Declaration des fonctions principales du programme :
//Declaration des fonctions de la classe Animal :
void AjouterAnimal(string nameAnimal);
void reproduire();
int NombreAnimaux(string nombreAnimal);
void etatSante(string Nom, int poids );
void SuivreEvolutionEtPorte();
void listeAnimaux();
string recherche();
void suivreReproduction();
void genererRapport();


//Declaration des fonctions de la classe DonnesElevage:
void setNombreTotal();
int getNombreTotal();
double budgetTotal(double budget);
double chiffreAffaire(double chiffreAff);
double benefice(double budget, double choiffreAff);
void sauvegarder();
void chargerDonnesDansFichier();

//Declarations des fonctions de la super classe generale superAnimal:

//Fonctions de fixation des valeurs des attributs :
void setGroupe(string Groupe);
void setTypeLocomotion(string Locomotion);
void setNombreMembres(string membres);

//Fonctions d´obtention des valeurs des attributs:
string getGroupe();
string getTypeLocomotion();
int getNombreMembres();

//Declaration des autres fonctions de la classe SuperAnimal:
void AjouterEspece();
void rechercheEspece();
void NombreEspeces();*/








#endif // FUNCTIONS_H_INCLUDED
