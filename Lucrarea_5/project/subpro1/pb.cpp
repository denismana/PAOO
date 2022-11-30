/**
    Am continuat proiectul de la lucrarea anterioara
*/

#include <iostream>
#include <cstring>

using namespace std;

class Dog{
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
    /*
        Am suprascris operatorul egal, la copiere acesta pune in campul de varsta
        etatea celuilalt caine +1
    */

    Dog& operator=(const Dog& dog)
    {
        if(this == &dog){   // verificam sa nu copiem peste acelasi obiect (Item 11)
            return *this;
        }
        this->age = dog.age+1;
        int i;
        for(i=0;i<strlen(dog.rasa);i++){
            this->rasa[i] = dog.rasa[i];
        }
        rasa[i] = '\0';
        for(i=0;i<strlen(dog.name);i++){
            this->name[i] = dog.name[i];
        }
        name[i] = '\0';
        return *this;     //returnam *this ca sa putem face d1 = d2 = d3
    }

    void toString(){
        cout<<"name is "<<name<<"\nrasa este "<<rasa<<"\nvarsta este "<<age<<" ani\n";
    }
};

class Hunting_dog : public Dog
{
    public:
    int ducks_killed = 0;
    Hunting_dog(int a,char b[],char c[],int killed):Dog(a,b,c){
        ducks_killed = killed;
    }
    void toString(){
        cout<<"name is "<<name<<"\nrasa este "<<rasa<<"\nvarsta este "<<age<<" ani"<<" a vanat "<<ducks_killed<<" rate.\n";
    }
    Hunting_dog& operator=(const Hunting_dog& hunting_dog)
    {
        Dog::operator=(hunting_dog);    // preluam override-ul pentru = facut pentru clasa parinte dog
        this->ducks_killed = hunting_dog.ducks_killed + 1;  // adaugam modificarea noastra (+1 la numarul de rate vanate)
        return *this;     
    }
};

int main()
{
    Dog d(5,"bichon","aurel");
    Dog d2(6,"ciobanesc","costelus");
    Hunting_dog woof1(7,"de vanatoare","reaper",8);
    Hunting_dog woof2(2,"de alergare","rex",12);
    d.toString();
    cout<<'\n';
    d2 = d;
    d2.toString();  // observam ca toate se copiaza cum trebuie doar varsta are +1
    cout<<'\n';
    woof1.toString();
    cout<<'\n';
    woof2 = woof1;
    woof2.toString();   // observam ca numarul de rate vanate este +1 si de asemenea preluam de la clasa parinte si varsta +1
    cout<<'\n';
    return 0;

}