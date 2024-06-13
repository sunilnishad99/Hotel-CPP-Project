#include<iostream>
using namespace std;

float Shoping(){
    char choice,item;
    float billAmt=0;
    int quantity;
    cout << "                 WELCOME TO ONLINE SHOPING             "<<endl<<endl;
    cout << "                 FALLOW THE INSTRUCTIONS               "<<endl;
    cout << " (1): Enter (m or M) to ordered Mobile phones "<<endl;
    cout << " (2): Enter (l or L) to ordered Leptops       "<<endl;
    cout << " (3): Enter (d or D) to ordered Dekstops      "<<endl;
    cout << " (4): Enter (h or H) to ordered Headphones    "<<endl;
    cout << " (5): Enter (b or B) to ordered Blootuths     "<<endl;
    cout << " (6): Enter (s or S) to ordered Sounds        "<<endl;
    cin >> choice;

   // _________________Mobile Phones___________________
   if(choice=='m' || choice == 'M'){
    MobLevel:
    cout << " This is the details of phones "<<endl<<endl;
    cout << " (1) Apple : ->Price : 65000 "<<endl;
    cout << " (2) Oneplus : ->Price : 45000 "<<endl;
    cout << " (3) Oppo : ->Price : 25000 "<<endl;
    cout << " (4) Vivo : ->Price : 28000 "<<endl;
    cout << " (5) Sumsung : ->Price : 18000 "<<endl;
    cout << " (6) Redmi : ->Price : 14000 "<<endl;
    cout << " Enter your choice foy buying these phones "<<endl;
    cin >> item;

    if(item=='1'){
        cout << " Enter quantity "<<endl;
        cin >> quantity;
        billAmt = billAmt + quantity*65000;
    }
    else if(item=='2'){
        cout << " Enter quantity "<<endl;
        cin >> quantity;
        billAmt = billAmt + quantity*45000;
    }
    else if(item=='3'){
        cout << " Enter quantity "<<endl;
        cin >> quantity;
        billAmt = billAmt + quantity*25000;
    }
    else if(item=='4'){
        cout << " Enter quantity "<<endl;
        cin >> quantity;
        billAmt = billAmt + quantity*28000;
    }
    else if(item=='5'){
        cout << " Enter quantity "<<endl;
        cin >> quantity;
        billAmt = billAmt + quantity*18000;
    }
    else if(item=='6'){
        cout << " Enter quantity "<<endl;
        cin >> quantity;
        billAmt = billAmt + quantity*14000;
    }
    else{
        cout << " Please enter correct value(s or S) to start shoping "<<endl<<endl;
        goto MobLevel;
    }
   }
}
int main()
{
    char startValue;
    char choiceAgain;
    float OnlineShoping(void);
    // float billAmt=0;
    startLevel:
    cout << " Please press (s or S) buttom to start shoping "<<endl<<endl;
    start:
    cin >> startValue;
    if(startValue == 's' || startValue == 'S'){
        float TotalAmt = OnlineShoping();
        cout << " TotalAmt is : "<< TotalAmt <<endl;
        shopAgain:
        cout << " Do you want shoping again. y or n "<< endl;
        cin >> choiceAgain;

        if(choiceAgain == 'y' || choiceAgain == 'Y'){
            goto startLevel;
        }
        else if(choiceAgain == 'n' || choiceAgain == 'N'){
            cout << " Thank you "<<endl;
        }
        else{
            cout << " Please enter correct value to start shoping "<<endl<<endl;
        goto shopAgain;
        }
    }
    else{
        cout << " Please enter correct value(s or S) to start shoping "<<endl<<endl;
        goto start;
    }
return 0;
}