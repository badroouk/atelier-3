#include<iostream>
using namespace std;
class calcule {
public:
    static int i;
    void call() {
        i++;
    }
};
int calcule::i = 0;
int main() {
    calcule t;
    t.call();
    t.call();
    t.call();
    t.call();
    t.call();


    cout << "la fonction call a ete appele " << t.i <<" fois"<< endl;
    return 0;
}
