#include<memory>
#include<type_traits>
#include<tr1/memory>
#include <iostream>
#include <cstring>

using namespace std;

// in ultimul comentariu din main am explicat de ce bucata urmatoare de cod este comentata
/**
class Uncopyable{
    protected:
    Uncopyable(){}
    ~Uncopyable(){}
    private:
    Uncopyable(const Uncopyable&);
    Uncopyable& operator = (const Uncopyable&);
};
*/

class Dog{    // : private Uncopyable
    public:
    int age = 0;
    char rasa[20] = "nimic";
    char name[20] = "nimic";
    Dog(int a,char b[],char c[]){
        age = a;
        int i;
        for(i=0;i<strlen(b);i++){
            rasa[i] = b[i];
        }
        rasa[i] = b[i];
        for(i=0;i<strlen(c);i++){
            name[i] = c[i];
        }
        name[i] = c[i];
    }

    void toString(){
        cout<<"name is "<<name<<" rasa este "<<rasa<<" varsta este "<<age<<" ani\n";
    }
};

int main()
{
    // un feature interesant, nu realizam ca lasam memorie alocata prin new, ma asteptam
    // sa fie ca in java si sa avem un "colector de deseuri" pt memoria care nu mai este utilzata

    auto_ptr<Dog> d(new Dog(5,"bichon","aurel"));
    d->toString();
    auto_ptr<Dog> d2(d);  //d2 pointeaza spre ce era inainte la d, iar d pointeaza la NULL
    //d->toString();  //primim segmentation fault pentru ca incercam sa apelam o metoda a unui pointer la NULL.
    d2->toString();

    tr1::shared_ptr<Dog> d3(new Dog(8,"ciobanesc german","costel"));
    tr1::shared_ptr<Dog> d4(d3);
    d3->toString();  // ambele functioneaza deoarece si d3 si d4 pointeaza spre aceeasi zona de memorie
    d4->toString();

    // legat de comportamentul la copiere pentru cazul de fata in care doresc sa arat
    // ca am inteles cat de cat comportamentul lui auto_ptr si shared_ptr, am
    // lasat accesibila copierea a continutului celor doua obiecte la care pointeaza
    // d,d2,d3,d4 (pentru a primi segmentation fault)

    // intr-un caz real as bloca copierea obiectelor pentru ca nu prea are sens sa copiezi un caine
    // genetica nu a avansat atat de mult incat sa aiba sens operatia de mai sus
    return 0;

}