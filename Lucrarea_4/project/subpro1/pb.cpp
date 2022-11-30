#include <iostream>
#include <cstring>

using namespace std;

class Uncopyable{
    protected:
    Uncopyable(){}
    ~Uncopyable(){}
    private:
    Uncopyable(const Uncopyable&);
    Uncopyable& operator = (const Uncopyable&);
};

class Dog: private Uncopyable{
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
        cout<<"name is "<<name<<"\nrasa este "<<rasa<<"\nvarsta este "<<age<<" ani\n";
    }
};

int main()
{
    Dog d(5,"bichon","aurel");
    Dog d2(6,"ciobanesc","costelus");
    d.toString();
    //d2 = d; crapa
    return 0;

}