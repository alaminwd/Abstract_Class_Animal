#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void sound() = 0;
        void sleep() {
            cout << "This animal is sleeping." << endl;
        }
};


class Dog : public Animal{
    public:
    void sound() override {
        cout<<"The dog barks."<<endl;
    }
};


class Cat : public Animal{
    public:

    void sound() override{
        cout<<"The cat meow"<<endl;
    };
};

int main(){
    Dog dog;
    Cat cat;

    dog.sound();
    dog.sleep();

    cat.sound();
    cat.sleep();

    return 0 ;
}
