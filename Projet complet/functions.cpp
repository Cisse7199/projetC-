

#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
#include <fstream>;
#include <algorithm>;

using namespace std;

 SuperAnimal::SuperAnimal(){



 }


    //Fixation des valeurs des attribus :
    void SuperAnimal::setGroupe(string Groupe){
        groupe=Groupe;
    }
    void SuperAnimal::setTypeLocomotion(string Locomotion){
        typeLocomotion=Locomotion;
    }
    void SuperAnimal::setNombreMembres(int membres){
        nombreMembres=membres;
    }


    //Obtention des valeurs des attributs :
    string SuperAnimal::getGroupe(){
        return groupe;
    }
    string SuperAnimal::getTypeLocomotion(){
        return typeLocomotion;
    }
    int SuperAnimal::getNombreMembres(){
        return nombreMembres;
    }

    //Implementation des autres fonctions de la classe :
    //Liste existante des especes :
    void SuperAnimal::AjouterEspece(){
    vector<string> espece;
    espece.push_back("Chiens");
    espece.push_back("Poules");
    espece.push_back("Moutons");
    espece.push_back("Chevres");
    espece.push_back("Pintades");


    //REtourner la liste des especes :
    for (int i=0;i<espece.size(); i++){
        cout<<espece[i]<<endl;

    }
    cout<<endl;


  }

  //Rechercher un espece:
  void SuperAnimal::rechercheEspece(){
    void AjouterEspece();
    vector<string> espece;
    string nameEspece;
    cout<<"Veuillez entrer le nom de l´espece recherche :"<<endl;
    getline(cin,nameEspece);
    auto it=find(espece.begin(),espece.end(),nameEspece);

    if (it != espece.end()){

        int distanceEspece=distance(espece.begin(),it);
        cout<<"L´espece recherche est "<<*it<<endl<<endl;
    }
    else{

        cout<<"L´espece recherche n existe pas, il se peut qu´il soit enlever de l´elevage ."<<endl<<endl;

    }
  }

  //Nombre total d´especes :
  void SuperAnimal::NombreEspeces(){
   vector<string> espece;
  cout<<"Le nombre d´especes actuel est de :"<<espece.size()<<" especes."<<endl<<endl;
  }







//Construction de la classe :
Animal::Animal(){

}
    //Fixation des elements caracteristiques de l´animal :
    void Animal::setNom(string nom){
        Nom=nom;
    }
    void  Animal::setDateNaissance(string date){
    DateNaissance=date;
    }

    void Animal::setPoids(int poid){
        poids=poid;
    }

    //Obtenir les informations definis pour les differents attributs :
    string Animal::getNom(){
    return Nom;
    }
    string Animal::getDateNaissance(){
    return DateNaissance;
    }
    int Animal::getPoids(){
    return poids;
    }

    //Methodes propres aa la classe :Ajouter, reproduire et autres.
    void Animal::AjouterAnimal(string nameAnimal){
        cout<<"Veuillez entrer le nom du nouveau Animal ajouter :"<<endl;
        getline(cin,nameAnimal);
        cout<<"Animal "<<nameAnimal<<" a ete ajoute avec succes"<<endl<<endl;
    }

    void Animal::reproduire(){
        cout<<"Bilan de la reproduction "<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"Nom de l´animal :"<<Nom<<endl;
        cout<<"Date de naissance : "<<DateNaissance<<endl;
        cout<<"Poids de l´animal : "<<poids<<endl<<endl;

    }

    int Animal::NombreAnimaux(int nombreAnimal){
        return nombreAnimal;
    }

    void Animal::etatSante(string Nom, int poids){

        //Inviter l eleveur a fournir les informations complementaires sur ces animaux :

        float quantiteNourriture;
        string dateVaccin;
        string comportement;
        string maladieDetecte;
        string traitement;
        string natureMaladie;

        /*Demandes a leleveur d entre les informations demandes
        et les recuperes dans les variables recises :*/
        cout<<"Entrer la quantite de nourriture en kg consomme par l´animal chaque jour :"<<endl;
        //getline(cin,quantiteNourriture);

        cout<<"Veuillez entrer la date du dernier vaccin :"<<endl;
        getline(cin,dateVaccin);

        cout<<"Donner l etat de son comportement :"<<endl;
        getline(cin,comportement);

        cout<<"L animal est il malade ? :"<<endl;
        getline(cin,maladieDetecte);

        cout<<"L animal est il en sous traitement  ? :"<<endl;
        getline(cin,traitement);

        cout<<"De quelle maladie souffre t il :"<<endl;
        getline(cin,natureMaladie);



        cout<<"----------------------------"<<endl;
        cout<<"Bilan de sante de l´animal :"<<Nom<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"Poids :"<<poids<<endl;
        cout<<"Quantite de nourriture consomme par jour  :"<<poids<<endl;
        cout<<"Derniere vaccin :"<<dateVaccin<<endl;
        cout<<"Comportement ces derniers jours :"<<comportement<<endl;
        cout<<"Maladie detecte :"<<maladieDetecte<<endl;
        cout<<"Le nom de la maladie detecte :"<<natureMaladie<<endl;
        cout<<"En cours de traitement:"<<traitement<<endl;

    }

    void Animal::SuivreEvolutionEtPorte(){
        cout<<"---------------------"<<endl;
        cout<<"Evolution de la porte"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"Frequene des maladies : Rare"<<endl;
        cout<<"Etat de sante general  : Normal"<<endl;
        cout<<"Taux de naissance par moi  : 37%"<<endl<<endl;
    }

    //A faire : Declarer une liste d animaux et appliquer les fonctios de recherches de suppresions et autres sur cette liste :

  string Animal::listeAnimaux(){
    vector<string> liste;
    liste.push_back("1-Bobi");
    liste.push_back("2-Milou");
    liste.push_back("3-chevre_noir");
    liste.push_back("4-chevre_blanc");
    liste.push_back("5-Poule_blanc");
    liste.push_back("6-Poule_rouge");
    liste.push_back("7-Coq_blanc");
    liste.push_back("8-Mouton_rouge");
    liste.push_back("9-Mouton_blanc");
    liste.push_back("10-Pintade_blanc");

    //REtourner la liste des animaux:
    for (int i=0;i<liste.size(); i++){
        cout<<liste[i]<<endl;


    }
    cout<<endl;

  }

  string Animal::recherche(){
    void listeAnimaux();
    vector<string> liste;

    string nameResearch;
    cout<<"Veuillez entrer le nom de l´animal recherche :"<<endl;
    getline(cin,nameResearch);
    auto it=find(liste.begin(),liste.end(),nameResearch);

    if (it != liste.end()){

        int distanceElement=distance(liste.begin(),it);
        cout<<"L animal recherche est "<<*it<<endl<<endl;
    }
    else{

        cout<<"L´animal recherche n existe pas, il se peut qu´il soit enlever de l´elevage ."<<endl<<endl;

    }
  }

  void Animal::suivreReproduction(){
    cout<<"____________"<<endl;
    cout<<"Reproduction :"<<endl;
    cout<<"**************:"<<endl;
    cout<<" Taux de reproduction :37%"<<endl;
    cout<<"Taux annuel de reproduction :57%"<<endl;
    cout<<"Niveau de reproduction (En baisse ou en hausse ) :Moyenne"<<endl<<endl;

  }

  void Animal::genererRapport(){
    cout<<"-----------------------------"<<endl;
    cout<<"Rapport de suivie des animaux "<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Etat de sante : Normal"<<endl;
    cout<<"´´´´´´´´´´´´´"<<endl;
    cout<<"Quantite de nourriture par moi : 70kg"<<endl;
    cout<<"´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´"<<endl;
    cout<<"Taux de reproduction mensuels : 37%"<<endl;
    cout<<"´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´"<<endl;
    cout<<"Nombre total d animaux ajoutes : 5"<<endl;
    cout<<"´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´"<<endl<<endl;


  }


//Construction de la classe :
DonnesElevage::DonnesElevage(){

}
    //Fonctions des donnes de l´elevage :
    void DonnesElevage::setNombreTotal(){
        void AjouterAnimal();
        vector<string> liste;
        nombreTotal=liste.size();
    }

    int DonnesElevage::getNombreTotal(){
        return nombreTotal;
    }

    double DonnesElevage::budgetTotal(double budget){
        return budget;
    }

    double DonnesElevage::chiffreAffaire(double chiffreAff){
        return chiffreAff;
    }

    double DonnesElevage::benefice(double budget, double chiffreAff){
        double benefice;
        benefice=chiffreAff-budget;
        return benefice;
    }

    //Sauvegarde des informations :
    void DonnesElevage::sauvegarder(){
        cout<<"Sauvegarde des informations dans le fichier sauvegarde..."<<endl<<endl;
    }
    //Charger les donnes dans un fichier :
    void DonnesElevage::chargerDonnesDansFichier(){
        double chiffreAffaire();
        double benefice();

        //Creation et l ouverture du fichier :
        ofstream saveFile("DonesElevage.txt", ios::app);
        if(!saveFile){
            cout<<"Erreur lors de l ouverture du fichier !"<<endl<<endl;
        }
        //Verifier si le fichier est bien ouvert
        else{
            cout<<"File open..."<<endl;

            //Ecrire dans le fichier
            saveFile<<"_____________________________ :"<<endl;
        saveFile<<"Donnes generales de l´elevage :"<<endl;
        saveFile<<"------------------------------- :"<<endl;
        saveFile<<"Nombre total d´animaux : 25"<<nombreTotal<<endl;
        saveFile<<"Etat de sante generale des animaux : Normale"<<endl;
        saveFile<<"Taux de reproduction mensuel des animaux : 37%"<<endl;
        saveFile<<"Date de debut de l´elevage  :"<<"Janvier 2024"<<endl;
        saveFile<<"Budget total inclus dans l´elevage : 2.375.000 FCFA"<<endl;
        saveFile<<"Chiffre Affaire realise : 3.500.000 FCFA"<<endl;
        saveFile<<"benefice realise  : 1.125.000 FCFA"<<benefice<<endl;


        }

        saveFile.close();

        //Le contenu du fichier enregistre est :
    try{
        ifstream fileOut("DonnesElevage.txt");
        string fileContent;
        if(fileOut){
                throw runtime_error("Ouverture de fichiers...");

            cout<<"Fichier ouvert "<<endl;
            while (getline(fileOut,fileContent)){
                cout<<fileContent;
            }
        }
        fileOut.close();
    }
    catch(const runtime_error& e){
        cout<<"Erreur lors de l´ouverture du fichier !"<<e.what()<<endl;
    }




    }






