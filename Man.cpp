#include "Man.hpp"

Man::Man()
{

}
Man::Man(string newFirstName, string newLastName, int newAge):Person( newFirstName,  newLastName,  newAge)
{

}
bool Man::isSingle()
{
    return partner.getFirstName() == "";
}
Person Man::getPartner()
{
    return partner;
}
void Man::setPartner(Person newPartner)
{
    partner = newPartner;
}
void Man::display()
{
    Person::display();
    if (isSingle() == true)
    {
        cout << "Il est célibataire" << endl;
    }
    else
    {
        cout << "Il est avec " << partner.getFirstName() << " "<< partner.getLastName() << endl;
    }
    
}