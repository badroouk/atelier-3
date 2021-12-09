#include <iostream>
using namespace std;
class Animal {
	string Nom;
	int Age;
  public:
     void set_nom(string nom){
        Nom = nom;
     }
     string get_nom(){
        return Nom;
     }
     void set_age(int age){
        Age = age;
     }
     int get_age(){
     return Age;
     }
};
class Zebra: public Animal
{
public:

};
class Dolphin: public Animal
{
public:
void set_value()
{
cout<<"le nom est: Dolphin et son age c est: 3 ans"<<endl;
}
};
int main() {
Zebra z;
z.set_nom("Zebra");
z.set_age(5);
cout<<"le nom est  "<<z.get_nom()<<"  l'age est : "<<z.get_age()<<endl;
Dolphin d;


d.set_nom("dolphine");
d.set_age(3);
cout<<"le nom est  "<<d.get_nom()<<"  l'age est : "<<d.get_age()<<endl;

return 0;
}
