#include <iostream>
using namespace std;
class myclass{ // dceclaration de la classe
private:
    string nom;
public:
    myclass();//declaration de constructeur
    ~myclass();//declaration de destructeur
};
myclass::myclass(){
    cout<< "entrez votre nom:"<<endl;//demender a l'utilisateur de d'entrer le nom
    cin >> nom;
    cout<< "hello : "<< nom <<endl; //message affiche
}
myclass::~myclass(){
    cout<< "good bye : "<< nom <<endl;
}
int main(){


    myclass c1; //l'objet de classe 'myclass'


    return 0;
}
