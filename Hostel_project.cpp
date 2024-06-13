#include<iostream>
#include<vector>
//--------------------------------Hostel Accommodation System---------------------------
//________________________________Creating by **SUNIL NISHAD**__________________________
using namespace std;

class Hostel{
    private:
    string Name;
    int Rollno;
    int Bed;
    vector<Hostel> ve;
    public:
    Hostel(string n,int r){
        Name = n;
        Rollno = r;
        Bed = 0;
    }
    
    bool BedStatus(){
            if(Bed < 50){
                Bed++;
                return true;
            }
            return false;
        }
        add(string n , int r){
            Hostel hostel(n,r);
            ve.push_back(hostel);
            allocation();
        }
        allocation(){
            if(BedStatus()){
                cout << " You have allocated bed in hostel"<<endl<<endl;
            }
            else{
                cout << " Hostel seat is full!! Sorry"<<endl<<endl;
            }
        }
        remove(){
            int i,rollNo;
            cout << " Enter Rollno for removing student: "<<endl;
            cin >> rollNo;
            for(i=0; i<ve.size(); i++){
                if(rollNo==ve[i].Rollno){
                    cout << "Name: "<<ve[i].Name<<endl;
                    cout << "Rollno: "<<rollNo<<endl;
                    ve.erase(ve.begin()+i);
                    cout << " Student is removed from Hostel!!"<<endl;
                }
            }
        }
        Display(){
            for(int i = 0; i < ve.size(); i++){
                cout <<i+1<< ">Name: "<<ve[i].Name<<endl;
                cout << "Rollno: "<<ve[i].Rollno<<endl;
        }
    }   
};

int main()
{
    string n;
    int r; 
    Hostel hostel(n,r);

    cout << " Student Hostel "<<endl;
    cout << " _______________"<<endl;

    while(true){
        cout <<">> Enter '1' for add student for hostel: "<<endl;
        cout << ">> Enter '2' for remove student for hostel: "<<endl;
        cout << ">> Enter '3' for Display student for hostel: "<<endl;
        cout << ">> Enter '0' for exit from program: "<<endl;

        int choice;
        cout << " Please enter your choice: "<<endl;
        cin >> choice;

        if(choice==1){
            system("cls");
            cout <<" Enter student Name: "<<endl; cin>>n;
            cout << " Enter student Rollno: "<<endl; cin>>r;
            hostel.add(n,r);

        }
        else if(choice==2){
            system("cls");
            hostel.remove();
        }
        else if(choice==3){
            system("cls");
            hostel.Display();
        }
        else if(choice==0){
            exit(0);
        }
        else{
            system("cls");
            cout << " Invalid input:"<<endl;
        }
    }
return 0;
}