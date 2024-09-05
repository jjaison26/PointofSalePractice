#include <iostream>
#include <cassert>
using namespace std;

class Store{
        private:
        int code_i;
        float price_i;
        string name_i;
        public:
        void setPrice(float p) {
                this->price_i = p;
        }
        void setCode(int c) {
                this->code_i = c;
        }
        void setName(string n) {
                this->name_i = n;
        }
        Store(string n, int c, float p) {
                this->name_i = n;
                this->code_i = c;
                this->price_i = p;
        }
        Store(){
                this->name_i = "";
                this->code_i = 0;
                this->price_i = 0.0;
        }

        string getName() {
                return this->name_i;
        }
        int getCode() {
                return this->code_i;
        }
        float getPrice() {
                return this->price_i;
        }



};

int main() {
        Store apple;
        assert(apple.getName() == "");
        assert(apple.getCode() == 0);
        assert(apple.getPrice() == 0.0);
        apple.setName("Granny Smith Apple");
        apple.setCode(10342);
        apple.setPrice(0.50);
        assert(apple.getName() == "Granny Smith Apple");
        assert(apple.getCode() == 10342);
        assert(apple.getPrice() == 0.50);

        Store banana("Banana", 10557,0.45);
        assert(banana.getName() == "Banana");
        assert(banana.getCode() == 10557);
        assert(banana.getPrice() < 0.46);
        assert(banana.getPrice() > 0.44);

        Store peach("Peach", 12151, 0.75);
        assert(peach.getName() == "Peach");
        assert(peach.getCode() == 12151);
        assert(peach.getPrice() < 0.76);
        assert(peach.getPrice() > 0.74);
        cout << "All tests passed succesfully!" << endl;
        return 0;
}
