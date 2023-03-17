#include "Person.hpp"
#pragma once

class Man:public Person
{
private:
    Person partner;
public:
    Man();
    Man(string newFirstName, string newLastName, int newAge);
    bool isSingle();
    Person getPartner();
    void setPartner(Person newPartner);
    //Afficher2
    void display();
};
