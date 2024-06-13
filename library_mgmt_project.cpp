#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Library{
    public:
    int id,price,pages;
    char name[20];
    char author[20];
    char student[20];
};
int main()
{
    Library lib[10];
    int input = 0;
    int count = 0;

    while(input!=3){
        cout << endl;
        cout << " Enter 1 to input details like id,name,author,student,price,pages "<<endl<<endl;
        cout << " Enter 2 to display details "<<endl<<endl;
        cout << " Enter 3 to quit "<<endl<<endl;
        cin >> input;

        switch(input){
            case 1:
            start:
            cout << " Enter Book id "<< endl;
            cin >> lib[count].id;
            cout << " Enter Book name "<< endl;
            // cin >> lib[count].name
            cin.getline(lib[count].name,20,'$');
            cout << " Enter Book author "<< endl;
            cin >> lib[count].author;
            cout << " Enter Book student "<< endl;
            cin >> lib[count].student;
            cout << " Enter Book price "<< endl;
            cin >> lib[count].price;
            cout << " Enter Book pages "<< endl;
            cin >> lib[count].pages;
            cout << endl;
            count++;
            break;

            case 2:
            for(int i = 0; i < count ; i++){
                cout << " Book id is      : "<< lib[i].id << endl;
                cout << " Book name is    : "<< lib[i].name << endl;
                cout << " Book author is  : "<< lib[i].author << endl;
                cout << " Book student is : "<< lib[i].student << endl;
                cout << " Book price is   : "<< lib[i].price << endl;
                cout << " Book pages is   : "<< lib[i].pages << endl;
                cout << endl;
            }
            break;

            case 3:
            exit(0);
            break;

            default:
            cout << " Sorry! Please enter correct value "<<endl;
            goto start;
        }

    }
return 0;
}