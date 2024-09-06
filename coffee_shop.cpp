#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
void disperse();
void refill();
void report();

using namespace std;

class lokit
{
    int teapowder, coffeepowder, sugar, milk, water, a, h, c, d, e, x, y, z, o, g;

public:
    lokit()
    {

        teapowder = 500;    // tea powder in gm
        coffeepowder = 500; // coffee powder in gm
        milk = 1000;        // milk powder in ml
        water = 1000;       // water in ml
        sugar = 500;        // sugar in gm
    }
    int noc;
    int l;
    bool lokit_flag = true;
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
                cout << ("\nEnter 'H' for Hard tea || 'S' for soft      tea\n");
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

                cout << ("\n=======================================================================================================");
            }
            if (ch == 't' || ch == 'T' || ch == 'c' || ch == 'C')
            {
                t = false;
            }
            else
            {
                t = true;
                break;
            }
        }
    }
    void refill()
    {
        cout << ("\n=======================================================================================================\n");
        cout << ("\n\t\t\t\t\t***Refilling***\n");
        cout << ("\n=======================================================================================================\n");

        int k;

        cout << ("\nEnter 1 to refill Tea powder");
        cout << ("\nEnter 2 to refill coffee powder");
        cout << ("\nEnter 3 to refill milk");
        cout << ("\nEnter 4 to refill water");
        cout << ("\nEnter 5 to refill sugar");
        cout << ("\n=======================================================================================================\n");

        cin >> k;

        switch (k)
        {

        case 1:;

            int req_teapowder;
            req_teapowder = 500 - teapowder;

            while (lokit_flag == true)
            {
                cout << ("\nRefill Tea powder\n");
                cin >> b[0];
                if (b[0] <= req_teapowder)
                {
                    teapowder = teapowder + b[0];
                    lokit_flag = false;
                }
                else
                    cout << ("\nQuantity>capacity\n");
                continue;
            }

            break;

        case 2:

            int req_coffeepowder;
            req_coffeepowder = 500 - coffeepowder;
            while (lokit_flag == true)

            {
                cout << ("\nRefill Coffee powder\n");

                cin >> b[1];

                if (b[1] <= req_coffeepowder)
                {
                    coffeepowder = coffeepowder + b[1];
                    lokit_flag = false;
                }
                else
                    cout << ("\nQuantity>capacity\n");
                continue;
            }
            break;

        case 3:

            int req_milk;
            req_milk = 1000 - milk;

            while (lokit_flag == true)
            {

                cout << ("\nRefill Milk\n");
                cin >> b[2];

                if (b[2] <= req_milk)
                {
                    milk = milk + b[2];
                    lokit_flag = false;
                }
                else
                    cout << ("\nQuantity>capacity\n");
                continue;
            }
            break;

        case 4:;

            int req_water;
            req_water = 1000 - water;

            while (lokit_flag == true)
            {
                cout << ("\nRefill Water\n");
                cin >> b[3];

                if (b[3] <= req_water)
                {
                    water = water + b[3];
                    lokit_flag = false;
                }
                else
                    cout << ("\nQuantity>capacity\n");
                continue;
            }
            break;

        case 5:;

            int req_sugar = 500 - sugar;
            while (lokit_flag == true)
            {
                cout << ("\nRefill Sugar\n");
                cin >> b[4];

                if (b[4] <= req_sugar)
                {
                    sugar = sugar + b[4];
                    lokit_flag = false;
                }
                else
                    cout << ("\nQuantity>capacity\n");
                continue;
            }
        }
        cout << ("\n=======================================================================================================\n");

        for (int i = 0; i < 500000000; i++)
        {
        }
        system("clear");
        cout << ("\nrefilling.");
        for (int i = 0; i < 500000000; i++)
        {
        }
        cout << (".");
        for (int i = 0; i < 500000000; i++)
        {
        }
        cout << (".");
        for (int i = 0; i < 500000000; i++)
        {
        }
        cout << (".");
        for (int i = 0; i < 500000000; i++)
        {
        }
        system("clear");
        cout << ("\nSuccessfully refilled");
        for (int i = 0; i < 500000000; i++)
        {
        }
        system("clear");
    }

    void report()
    {
        cout << ("\n=======================================================================================================");
        cout << ("\n\t\t\t***Report***");
        cout << ("=======================================================================================================");
        int m;

        cout << ("\nEnter 1. for capacity of container");
        cout << ("\nEnter 2. for no. of cups dispered");
        cout << ("\n=======================================================================================================");
        cin >> m;
        e = a + c + h + d;
        g = x + y + z + o;
        switch (m)
        {
        case 1:

            cout << ("\nTea powder\tcoffee powder\tmilk\twater\tsugar\t\n");
            cout << teapowder << "\t\t" << coffeepowder << "\t\t" << milk << "\t" << water << "\t" << sugar;
            cout << ("\n=======================================================================================================");

            break;

        case 2:

            cout << ("\n=======================================================================================================");
            cout << ("\n\tparticular\tNo. of cups\tAmount\t");
            cout << ("\n=======================================================================================================");
            cout << "\n\tHard tea\t" << a << "\t\t" << x;
            cout << "\n\tsoft tea\t" << h << "\t\t" << y;
            cout << "\n\tHard coffee\t" << c << "\t\t" << z;
            cout << "\n\tsoft coffee\t" << d << "\t\t" << o;
            cout << "\n=======================================================================================================";
            cout << "\n\tTotal\t\t" << e << "\t\t" << g;
            cout << "\n=======================================================================================================";
        }
    }
};

int main()
{
    lokit ob;

    system("clear");
    cout << "\n=======================================================================================================";
    cout << "\n\t"
         << "\t"
         << "\t"
         << "\t"
         << "***Vending Machine***"
         << "\t";
    cout << "\n=======================================================================================================";
    cout << "\n\t"
         << "capacity of the container is given below";
    cout << "\n\t"
         << "Tea powder=500gm";
    cout << "\n\t"
         << "coffee powder=500gm";
    cout << "\n\t"
         << "milk=1000ml";
    cout << "\n\t"
         << "water=1000ml";
    cout << "\n\t"
         << "sugar=500gm";
    cout << "\n=======================================================================================================";

    cout << "\n\t"
         << "Price for hard tea & Hard coffee=20Rs ";
    cout << "\n\t"
         << "Price for soft tea & soft coffee=10Rs";
    int n;
    while (true)
    {

        cout << "\n=======================================================================================================";
        cout << "\n\t"
             << "Enter 1 for disperse";
        cout << "\n\t"
             << "Enter 2 for refill ";
        cout << "\n\t"
             << "Enter 3 for report";
        cout << "\n\t"
             << "Enter 4 for exit";
        cout << "\n=======================================================================================================\n";
        cin >> n;

        switch (n)
        {
        case 1:

            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ("\f");
            cout << "Loading.";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            system("clear");
            cout << ("Successful");
            for (int i = 0; i < 1000000000; i++)
            {
            }
            system("clear");

            ob.disperse();

            break;

        case 2:

            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ("\f");
            cout << "Loading.";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ("\f");
            cout << ("Successful");
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ("\f");
            ob.refill();

            break;

        case 3:
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << "\f";
            cout << "Reporting.";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ("\f");
            cout << ("Here it is!");
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ("\f");
            ob.report();

            break;
        }
        if (n == 4)
        {
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ("\f");
            cout << "Exiting.";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ".";
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ("\f");
            cout << ("Successfully Exited");
            for (int i = 0; i < 1000000000; i++)
            {
            }
            cout << ("\f");
            cout << ("\nThank you!");
            cout << ("\nVisit again...");

            exit(0);
        }
    }
}


