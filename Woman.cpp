#include "Woman.hpp"

Woman::Woman()
{

}
Woman::Woman(string newFirstName, string newLastName, int newAge):Person( newFirstName,  newLastName,  newAge)
{

}
bool Woman::isSingle()
{
    return partner.getFirstName() == "";
}
Person Woman::getPartner()
{
    return partner;
}
void Woman::setPartner(Person newPartner)
{
    partner = newPartner;
}
void Woman::display()
{
    Person::display();
    if (isSingle() == true)
    {
        cout << "Elle est célibataire" << endl;
    }
    else
    {
        cout << "Elle est avec " << partner.getFirstName() << " "<< partner.getLastName() << endl;
    }
    
}