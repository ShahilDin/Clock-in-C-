// Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>


int main()
{
    int h, m, s, a, err;
    
    err = a = 0;

    while (err == 0)
    {

        std::cout << "Enter Hours " << "\n";
        std::cin >> h;

        std::cout << "Enter Mintues " << "\n";
        std::cin >> m;

        std::cout << "Enter Second " << "\n";
        std::cin >> s;

        if (h < 24 && m < 60 && s < 60)
        {
            err++;
        }
        else 
        {
            system("cls");
        }
    }

    while (a == 0)
    {
        system("cls");

        std::cout << h << ":" << m << ":" << s << "\n";
        Sleep(1000);
        s++;

            if (s > 59)
            {
                s = 0;
                m++;
            }
             
            if (m > 59)
            {
                m = 0;
                h++;
            }
            if (h > 24)
            {
                h = 0;

            }

    }
    
}

