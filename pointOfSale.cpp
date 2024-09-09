#include <iostream>
#include <cassert>
using namespace std;

class Store
{
private:
    static double totalPrice;
    int code_i;
    int quantity;
    float price_i;
    string name_i;

public:
    void setPrice(float p)
    {
        this->price_i = p;
    }
    void setCode(int c)
    {
        this->code_i = c;
    }
    void setName(string n)
    {
        this->name_i = n;
    }
    Store(string n, int c, float p, int quantity)
    {
        this->name_i = n;
        this->code_i = c;
        this->price_i = p;
        totalPrice += p*quantity;
        cout << n << " X " << quantity << endl;
    }
    Store()
    {
        this->name_i = "";
        this->code_i = 0;
        this->price_i = 0.0;
    }

    string getName()
    {
        return this->name_i;
    }
    int getCode()
    {
        return this->code_i;
    }
    float getPrice()
    {
        return this->price_i;
    }
    static double getTotalPrice()
    {
        return totalPrice;
    }
};
   double Store::totalPrice = 0.0;
int main()
{
    // Store apple;//("Granny Smith Apple", 10342, .50);
    // assert(apple.getName() == "");
    // assert(apple.getCode() == 0);
    // assert(apple.getPrice() == 0.0);
    
    Store apple("Granny Smith Apple", 10342, .50, 5);
    assert(apple.getName() == "Granny Smith Apple");
    assert(apple.getCode() == 10342);
    assert(apple.getPrice() == 0.50);

    Store banana("Banana", 10557, 0.45, 6);
    assert(banana.getName() == "Banana");
    assert(banana.getCode() == 10557);
    assert(banana.getPrice() < 0.46);
    assert(banana.getPrice() > 0.44);

    Store peach("Peach", 12151, 0.75,2);
    assert(peach.getName() == "Peach");
    assert(peach.getCode() == 12151);
    assert(peach.getPrice() < 0.76);
    assert(peach.getPrice() > 0.74);
    cout <<"Your total price is $" <<  peach.getTotalPrice() << endl;
    //cout << "All tests passed succesfully!" << endl;
    return 0;
}