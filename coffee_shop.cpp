#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
void disperse();
void refill();
void report();

using namespace std;

class anurag
{
    int teapowder, coffeepowder, sugar, milk, water, a, h, c, d, e, x, y, z, o, g;

public:
    anurag()
    {

        teapowder = 500;    // tea powder in gm
        coffeepowder = 500; // coffee powder in gm
        milk = 1000;        // milk powder in ml
        water = 1000;       // water in ml
        sugar = 500;        // sugar in gm
    }
    int noc;
    int l;
    bool anurag_flag = true;
    int b[5];
    char ch;
    void disperse()

    {
        system("clear");
        cout << ("\n=======================================================================================================\n");
        cout << "\n\t"
             << "\t"
             << "\t"
             << "\t"
             << "***Dispersing***\n";
        cout << ("\n=======================================================================================================\n");

        int tea_powder = 0, coffee_powder = 0, _sugar = 0, _milk = 0, _water = 0;
        bool t = true;
        cout << ("\nEnter 'T' for Tea || 'C' for coffee\n");
        cin >> ch;
        while (true)
        {
            if (ch == 'T' || ch == 't')
            {
                cout << ("\nEnter 'H' for Hard tea || 'S' for soft tea\n");
                cin >> ch;
                if (ch == 'H' || ch == 'h')
                {
                    bool flag = true;
                    while (flag == true)
                    {
                        try
                        {
                            cout << ("\nEnter No. of cups\n");
                            cin >> noc;
                        }
                        catch (int noc)
                        {
                            cout << ("\nEnter Number Only\n");
                        }
                        a = a + noc;
                        tea_powder = noc * 20; // tea powder required for hard tea
                        _milk = noc * 40;      // milk required
                        _water = noc * 50;     // water required
                        _sugar = noc * 20;     // sugar required

                        if (tea_powder > teapowder || _milk > milk || _water > water || _sugar > sugar)
                        {
                            cout << ("\nQuantity ordered  > capacity of container\n");
                            flag = true;
                        }
                        else
                            flag = false;
                    }
                    teapowder = teapowder - tea_powder;
                    milk = milk - _milk;
                    water = water - _water;
                    sugar = sugar - _sugar;

                    l = noc * 20;
                    x = x + l;

                    cout << ("\nAmt=" + l);

                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                    cout << ("\nDispersing.\n");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                    cout << ("\nSuccessfully dispersed\n");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                }
                else
                {
                    bool flag = true;
                    while (flag == true)
                    {
                        try
                        {
                            cout << ("\nEnter no. of cups\n");
                            cin >> noc;
                        }
                        catch (int noc)
                        {
                            cout << ("\nEnter Number Only\n");
                        }
                        h = h + noc;
                        tea_powder = noc * 10; // tea powder required for soft tea
                        _milk = noc * 50;      // milk required
                        _water = noc * 20;     // water required
                        _sugar = noc * 40;     // sugar required
                        if (tea_powder > teapowder || _milk > milk || _water > water || _sugar > sugar)
                        {
                            cout << ("\nQuantity ordered > capacity of container\n");
                            flag = true;
                        }
                        else
                        {
                            flag = false;
                        }
                    }
                    teapowder = teapowder - tea_powder;
                    milk = milk - _milk;
                    water = water - _water;
                    sugar = sugar - _sugar;

                    l = noc * 10;
                    y = y + l;

                    cout << ("\nAmt=" + l);

                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                    cout << ("\nDispersing.\n");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                    cout << ("\nSuccessfully dispersed\n");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                }
            }
            if (ch == 'C' || ch == 'c')

            {
                cout << ("\nEnter 'H' for hard coffee || 'S' soft coffee\n");
                cin >> ch;
                if (ch == 'H' || ch == 'h')
                {
                    bool flag = true;
                    while (flag == true)
                    {
                        try
                        {
                            cout << ("\nEnter no. of cups of Hard coffee u want\n");
                            cin >> noc;
                        }
                        catch (int noc)
                        {
                            cout << ("\nEnter Number Only\n");
                        }
                        c = c + noc;
                        coffee_powder = noc * 20; // coffee powder required for hard coffee
                        _milk = noc * 40;         // Sugar required
                        _water = noc * 50;        // milk required
                        _sugar = noc * 20;        // water required
                        if (coffee_powder > coffeepowder || _milk > milk || _water > water || _sugar > sugar)
                        {
                            cout << ("\nQuantity ordered > capacity of container\n");
                            flag = true;
                        }
                        else
                            flag = false;
                    }
                    coffeepowder = coffeepowder - coffee_powder;
                    milk = milk - _milk;
                    water = water - _water;
                    sugar = sugar - _sugar;
                    l = noc * 20;
                    z = z + l;
                    cout << ("\nAmt=" + l);
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                    cout << ("\nDispersing.\n");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                    cout << ("\nSuccessfully dispersed\n");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                }
                else
                {
                    bool flag = true;
                    while (flag == true)
                    {
                        try
                        {
                            cout << ("\nEnter no. of cups\n");
                            cin >> noc;
                        }
                        catch (int noc)
                        {
                            cout << ("\nEnter Number Only\n");
                        }
                        d = d + noc;

                        coffee_powder = noc * 10; // coffee powder required for soft coffee
                        _milk = noc * 40;         // Sugar required
                        _water = noc * 50;        // milk required
                        _sugar = noc * 20;        // water required

                        if (coffee_powder > coffeepowder || _milk > milk || _water > water || _sugar > sugar)
                        {
                            cout << ("\nQuantity ordered > capacity of container\n");
                            flag = true;
                        }
                        else
                            flag = false;
                    }
                    coffeepowder = coffeepowder - coffee_powder;
                    milk = milk - _milk;
                    water = water - _water;
                    sugar = sugar - _sugar;

                    l = noc * 10;
                    o = o + l;

                    cout << ("\nAmt=" + l);
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                    cout << ("\nDispersing.\n");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    cout << (".");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                    cout << ("\nSuccessfully dispersed\n");
                    for (int i = 0; i < 1000000000; i++)
                    {
                    }
                    system("clear");
                }
            }
            cout << "\nEnter 1 for continue else 0\n";
            int choice;
            cin >> choice;
            if (choice == 0)
                break;
        }
    }

    void refill()
    {
        system("clear");
        cout << ("\n=======================================================================================================\n");
        cout << "\n\t"
             << "\t"
             << "\t"
             << "\t"
             << "***Refilling containers***\n";
        cout << ("\n=======================================================================================================\n");
        teapowder = 500;
        coffeepowder = 500;
        milk = 1000;
        water = 1000;
        sugar = 500;
        cout << ("\nRefilled successfully\n");
        system("clear");
    }

    void report()
    {
        system("clear");
        cout << ("\n=======================================================================================================\n");
        cout << "\n\t"
             << "\t"
             << "\t"
             << "\t"
             << "***Generating report***\n";
        cout << ("\n=======================================================================================================\n");

        cout << ("\nTotal number of cups of Hard Tea made=" + a + "\n");

        cout << ("\nTotal no of cups of soft tea made=" + h + "\n");

        cout << ("\nTotal number of cups of hard coffee made=" + c + "\n");

        cout << ("\nTotal no of cups of soft coffee made=" + d + "\n");

        cout << ("\nTotal amount collected for Hard tea=" + x + "\n");

        cout << ("\nTotal amt collected for soft tea=" + y + "\n");

        cout << ("\nTotal amt collected for hard coffee=" + z + "\n");

        cout << ("\nTotal amt collected for soft coffee=" + o + "\n");

        g = x + y + z + o;

        cout << ("\nTotal amount Collected=" + g + "\n");

        cout << ("\n=======================================================================================================\n");
    }
};

int main()
{
    system("clear");
    anurag a;
    cout << ("\n=======================================================================================================\n");
    cout << "\n\t"
         << "\t"
         << "\t"
         << "\t"
         << "***WELCOME TO OUR TEA SHOP***\n";
    cout << ("\n=======================================================================================================\n");

    cout << ("\nEnter 1 to Enter Admin Mode else 0\n");
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        while (1)
        {
            system("clear");
            cout << ("\n=======================================================================================================\n");
            cout << "\n\t"
                 << "\t"
                 << "\t"
                 << "\t"
                 << "***Admin Mode***\n";
            cout << ("\n=======================================================================================================\n");
            cout << ("\n1-Disperse tea/coffee\n");
            cout << ("\n2-Refill Container\n");
            cout << ("\n3-Report\n");
            cout << ("\n4-Exit\n");
            cout << ("\nEnter your choice\n");
            cin >> choice;
            switch (choice)
            {
            case 1:
                a.disperse();
                break;
            case 2:
                a.refill();
                break;
            case 3:
                a.report();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << ("\nWrong choice entered\n");
                exit(0);
            }
        }
    }
}
