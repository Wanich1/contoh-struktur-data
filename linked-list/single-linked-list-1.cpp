#include "iostream"

using namespace std;

struct Object
{
    int value;
    Object *next;
};

// C++17 uses nullptr, replace this using NULL
Object *depan = nullptr, *belakang = nullptr, *bantu = nullptr;

int main()
{

    int input;

    do
    {
        cout << "input: ";
        cin >> input;

        if (input != 0)
        {
            bantu = new Object;
            bantu->next = nullptr;
            bantu->value = input;

            if (depan == nullptr)
            {
                depan = belakang = bantu;
            }
            else
            {
                cout << "depan (1) atau belakang (2)? > ";
                cin >> input;
                if (input == 1)
                {
                    bantu->next = depan;
                    depan = bantu;
                }
                else
                {
                    belakang->next = bantu;
                    belakang = bantu;
                }
            }
        }
    } while (input != 0);

    cout << "\noutput:\n";
    bantu = depan;
    while (bantu != nullptr)
    {
        cout << bantu->value << " -> ";
        bantu = bantu->next;
    }
}
