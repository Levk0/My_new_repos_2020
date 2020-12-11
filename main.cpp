#include "smartphone.h"


int main() {
    Smartphone s1( "Samsung", 650, 128, 2);
        s1.setNumber(0, 380961217553);
        s1.setNumber(1, 380971217674);

    Smartphone s2( "Huawei", 450, 128, 2);
        s2.setNumber(0, 380671217331);
        s2.setNumber(1, 380681217872);

    Smartphone s3( "Xiaomi", 255, 64, 2);
        s3.setNumber(0, 380951217785);
        s3.setNumber(1, 380981212846);

    int n = 3;
    PhoneStore store(n);

        store.setPhone(0, &s1);
        store.setPhone(1, &s2);
        store.setPhone(2, &s3);


    store.StoreOutput();

    int budget;
        cout << "Enter your smartphone budget, $: ";
        cin >> budget;
        store.BestPhone(budget);
        system(" pause ");

    return 0;
}