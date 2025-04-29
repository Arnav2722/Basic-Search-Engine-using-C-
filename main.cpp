#include <iostream>
#include <vector>
using namespace std;

struct List
{
    string item;
};
List list;
vector<List> vl;

int main()
{
    while (true)
    {
        int choice;
        cout << "1. Adding Items" << endl;
        cout << "2. Searching Items" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice:- ";
        cin >> choice;

        if (choice == 1)
        {
            system("cls");
            int total;
            cout << "How many items do you want to add?: ";
            cin >> total;
            for (int i = 0; i < total; i++)
            {
                cout << "Enter Item: ";
                cin >> list.item;
                vl.push_back(list);
                cout << "Saved item " << i + 1 << endl;
            }
        } // condition 1

        else if (choice == 2)
        {
            system("cls");
            string search;
            cout << "Enter the name you want to search:- ";
            cin >> search;
            cout << "Searching..." << endl;
            for (int i = 0; i < vl.size(); i++)
            {
                if (search == vl[i].item)
                {
                    system("cls");
                    cout << "Item Found: " << vl[i].item << endl << endl;
                    break;
                }
                else if (search != vl[i].item)
                {
                    system("cls");
                    cout << "Item Not Found" << endl<< endl;
                    break;
                }
            }
        } // condition2

        else if (choice == 3)
        {
            exit(0);
        } // condition 3

        else
        {
            system("cls");
            cout << "Invalid Value!!" << endl;
        }
    }
}