#include <iostream>

using namespace std;
// creer classe qui s'apelle complexe
class complexe{
    int a1;
    int b1;
    int a2;
    int b2;
    public:
        //initialize le premier nombre complexe
        void setNumber1(){
                int x1;
                int z1;
                cout<<"entrez le nombre reele pour le nombre1  "<<" : " ;
                cin>>x1;
                cout<<"entrez le nombre imaginaire pour le nombre1 "<<" : ";
                cin>>z1;
                a1=x1;
                b1=z1;
                cout<<"le primier nombre est :  "<<a1<<" + "<<b1<<"i"<<endl;
        }
        //initialize le deuzieme nombre complexe
        void setNumber2(){
                int x2;
                int z2;
                cout<<"entrez le nombre reele pour le nombre2  "<<" : " ;
                cin>>x2;
                cout<<"entrez le nombre imaginaire pour le nombre2 "<<" : ";
                cin>>z2;
                a2=x2;
                b2=z2;
            cout<<"le deuxieme nombre est :  "<<a2<<" + "<<b2<<"i"<<endl;

    }
    //creer des foctions
    int menu();
    void addition();
    void soustraction();
    void multiplication();
    void division();
};
// fonction permet d'additioner
void complexe::addition(){
        cout<<" vous avez choisisez l addition \n ";
        cout<<"("<<a1<<" + "<<b1<<"i ) + ("<<a2<<" + "<<b2<<"i ) = " <<a1+a2<<" + ("<<b1+b2<<")i";
}
//fonction permet de soustraire
void complexe::soustraction(){
        cout<<"vous avez choisisez la soustraction \n ";
        cout<<"("<<a1<<" + "<<b1<<"i ) - ("<<a2<<" + "<<b2<<"i ) = "<<a1-a2<<" + ("<<b1-b2<<")i";
}
//fonction permet de multiplier
void complexe::multiplication(){
        cout<<"vous avez choisisez la multiplication  \n ";
        cout<<"("<<a1<<" + "<<b1<<"i ) X ("<<a2<<" + "<<b2<<"i ) = "<<(a1*a2)-(b2*b1)<<" + "<<(a1*b2)+(b1*a2)<<"i";
}
//fonction permet de diviser
void complexe::division(){
        int d ;
        int dz;
        d  =  ((a1*a2)+(b1*b2))/((a2*a2)+(b2*b2));
        dz =  (-(a1*b2)+(b1*a2))/((a2*a2)+(b2*b2));
        cout<<"vous avez choisisez la division  \n ";
        cout<<"("<<a1<<" + "<<b1<<"i ) / ("<<a2<<" + "<<b2<<"i ) = "<<d<<" + "<<dz<<"i";
}
//fonction permet d'afficher menu
int complexe::menu(){
    int choix;
    cout<<"\n les operations possibles \n ";
    cout<<"pour additioner taper 1 \n ";
    cout<<"pour soustracter taper 2 \n ";
    cout<<"pour multipluer taper 3 \n ";
    cout<<"pour diviser taper ecrire 4 \n ";
    cin>>choix;
    if (choix ==1 ){
        addition();
    }else if (choix == 2){
        soustraction();
    }else if (choix == 3){
        multiplication();
    }else if (choix == 4){
        division();
    }
}

int main()
{
    complexe i ;
    i.setNumber1();
    i.setNumber2();
     i.menu();

    return 0;
}
