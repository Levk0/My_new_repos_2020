#include "smartphone.h"

Smartphone::Smartphone() {
    s_model = 'n/a';
    s_amount = 0;
    s_price = 0;
    s_memory = 0;
}

Smartphone::~Smartphone() {}

Smartphone::Smartphone(string model, int price, int memory, int amount) {
    s_model = model;
    s_price = price;
    s_memory = memory;
    s_amount = amount;
    s_numbers = new long long[amount];
}


void Smartphone::SmartphoneOutput() {
    cout << "Model:" << s_model << endl << "Price, $: " << s_price << endl << "Memory, gb: " << s_memory << endl
         << "Numbers:" << endl;
    for (int i = 0;i < s_amount;i++) {
        cout << s_numbers[i] << endl;
    }
}

PhoneStore::PhoneStore() {
}

PhoneStore :: ~PhoneStore() {
    delete[] Store;
}

PhoneStore::PhoneStore(int many) {
    s_many = many;
    Store = new Smartphone[s_many];
}

void PhoneStore::StoreOutput() {
    for (int i = 0;i < s_many; i++) {
        for (int j = (s_many - 1); j > i; j--) {
            if (Store[j - 1].getPrice() > Store[j].getPrice()) {
                swap(Store[j], Store[j - 1]);
            }
        }
    }

    for (int i = 0;i < s_many;i++) {
        cout << i + 1 << ". ";
         Store[i].SmartphoneOutput();
          cout << endl;
    }
}

void PhoneStore::BestPhone(int budget) {
    int k = 0, j;
     if (Store[0].getPrice() > budget) { cout << "No matches" << endl; }
      else {
        for (int i = 0; i < s_many; i++)
        {
            if (Store[i].getPrice() <= budget && Store[i].getMemory() > k) {
                k = Store[i].getMemory();
                j = i;
            }
        }
        Store[j].SmartphoneOutput();
    }
}

