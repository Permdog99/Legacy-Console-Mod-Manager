// LegacyConsoleModManager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int option;

    string gamePath;
    string dlcFile;
    string dllModFile;
    int i = 0;

    while (i < 1) {
        cout << "0. Install DLC" << endl << "1. Install DLL Mod" << endl << "2. Launch Game" << endl << "3. Exit" << endl << endl << "Select what to do: ";

        cin >> option;

        switch (option) {
        case 0:
            cout << "Insert game path (Mount folder): ";

            cin >> gamePath;

            cout << "Insert DLC file (must be .lcedlc): ";

            cin >> dlcFile;
            break;
        case 1:
            cout << "Insert game path (Mount folder): ";

            cin >> gamePath;

            cout << "Insert DLL mod file (must be .dll): ";
            cin >> dllModFile;
            break;
        case 2:
            system("start shell:AppsFolder\\Minecraft_zjr0dfhgjwvde!App");

            i++;
            break;
        case 3:
            i++;
            break;
        default:
            cout << "Not an option!";
            break;
        }
    }

    return 0;
}
