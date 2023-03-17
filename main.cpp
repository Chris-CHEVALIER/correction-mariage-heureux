#include "Person.cpp"
#include "Man.cpp"
#include "Woman.cpp"
int main()
{
    Woman meghan("Meghan", "Fox", 37);
    Man harry("Harry", "de Sussex", 38);
    meghan.display();
    meghan.setPartner(harry);
    harry.setPartner(meghan);
    meghan.display();
    return 0;
}