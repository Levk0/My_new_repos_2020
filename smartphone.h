#ifndef PHONE_H
#define PHONE_H

#include <iostream>
#include <string>


using namespace std;


class Smartphone {


    protected:
        string s_model;
        int s_price, s_memory, s_amount;
        long long* s_numbers;

    public:
        Smartphone();
        ~Smartphone();
        Smartphone(string model, int price, int memory, int amount);

    string getModel() { return s_model; }
    int getPrice() { return s_price; }
    int getMemory() { return s_memory; }
    int getAmount() { return s_amount; }
    int getNumber(int index) { return s_numbers[index]; }

    void setModel(std::string model) { s_model = model; }
    void setPrice(int price) { s_price = price; };
    void setMemory(int memory) { s_memory = memory; }
    void setAmount(int amount) { s_amount = amount; }
    void setNumber(int index, long long number) { s_numbers[index] = number; }


    void SmartphoneOutput();

};

class PhoneStore {
    Smartphone* Store;
    int s_many;

public:
    PhoneStore();
    ~PhoneStore();
    PhoneStore(int many);

    Smartphone getStore(int index) { return Store[index]; }
    void setPhone(int index, Smartphone* s) { Store[index] = *s; }

    void StoreOutput();
    void BestPhone(int budget);
};
#endif // !PHONE