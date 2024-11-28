
//Inclusion des bibliotheques necessaires pour le programme :
#include <iostream>;
#include <string>;
#include  "functions.h"
#include <vector>;
#include <fstream>;
#include <algorithm>;

using namespace std;//Espace de noms


int main()
{

    //titre de la plateforme :
    cout<<"-------------------------------"<<endl;
    cout<<"PLATEFORME DE GESTIO D´ELEVAGE"<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    cout<<"SOYEZ LES BIENVENUS"<<endl<<endl;//souhaitez les bienvenus

    //recueillir les informations sur l eleveur et sur l elevage :
    cout<<"Informations sur l´eleveur et sur l´elevage en generale :"<<endl;

    //variables pour recueillir les donnees :
    string name;
    string localite;
    string beginDate;
    string enterprise;

    //Inviter l eleveur a entrer ses informations et les recuperes :
    cout<<"Entrer votre nom :"<<endl;
    getline(cin, name);

    cout<<"Entrer le site de votre ferme d´elevage :"<<endl;
    getline(cin,localite);

    cout<<"Entrer le nom de votre entreprise d´elevage :"<<endl;
    getline(cin,enterprise);

    cout<<"Entrer la date de debut de l´elevage :"<<endl;
    getline(cin,beginDate);

    cout<<endl;
    cout<<"_____________________"<<endl;
    cout<<"Profil de l´eleveur :"<<endl;
    cout<<"-------------------- :"<<endl<<endl;
    cout<<"Nom de l´eleveur : "<<name<<endl;
    cout<<"Nom de l´entreprise : "<<enterprise<<endl;
    cout<<"Site de la ferme de l´elevage :"<<localite<<endl;
    cout<<"Periode de debut de l´elevage :"<<beginDate<<endl<<endl;

    //liste des especes au debut :
    cout<<"------------------"<<endl;
    cout<<"Liste des especes "<<endl;
    cout<<"-------------------"<<endl;


    //Liste des animaux initiales :
    SuperAnimal EspeceAimals;
    EspeceAimals.AjouterEspece();

    //Fixer les informations des nouveaux animaux :
    SuperAnimal newAnimal;
    newAnimal.setGroupe("Mammiferes:Chiens");
    newAnimal.setTypeLocomotion("Marcheurs");
    newAnimal.setNombreMembres(4);

    //Recuperation des informations de l espece d´Animal :
    newAnimal.getGroupe();
    newAnimal.getTypeLocomotion();
    newAnimal.getNombreMembres();

    //Rechercher et retourner le nombre des especes  :
    newAnimal.rechercheEspece();
    newAnimal.NombreEspeces();


    //Information des animaux :
    Animal Animal1;
    Animal1.setNom("Patience");
    Animal1.setDateNaissance("20/11/2023");
    Animal1.setPoids(30);

    //Recuperer ces informations de l´animal :
    Animal1.getNom();
    Animal1.getDateNaissance();
    Animal1.getPoids();


    //Fonctions d inmsertion, de recherche et de bilans des animaux :

    Animal1.AjouterAnimal("Mouton_noir");
    Animal1.reproduire();
    Animal1.etatSante("Mouton_noir", 25);
    Animal1.SuivreEvolutionEtPorte();
    Animal1.NombreAnimaux( 25);
    Animal1.recherche();
    Animal1.suivreReproduction();
    Animal1.genererRapport();
    Animal1.listeAnimaux();


    //Appel des fonctions pour les donnes de l´elevage :
    DonnesElevage Donne1;
    Donne1.setNombreTotal();
    Donne1.getNombreTotal();
    Donne1.budgetTotal(2350000);
    Donne1.chiffreAffaire(3000000);
    Donne1.benefice(2350000, 3000000);
    Donne1.sauvegarder();
    Donne1.chargerDonnesDansFichier();



    //Voir les donnes de l elevage dans un fichier:
    Donne1.chargerDonnesDansFichier();
    Donne1.sauvegarder();




    return 0;
}
