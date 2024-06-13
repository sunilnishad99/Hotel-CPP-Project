#include<iostream>
using namespace std;
int PlayQuiz(){
    char c , option;
    int score=0;
    cout << " --------------WELCOME TO QUIZE GAME--------------"<< endl;
    cout << "---------------Please fallow the instructions-----"<< endl;
    cout << endl;
    cout << " Step 1 : Quiz contains total 10 qustions "       << endl;
    cout << " Step 2 : You will be 1 marks for each right ans "<< endl;
    cout << " Step 3 : There will be no negative marking "     << endl;
    cout << " Step 4 : Please press (s) button to start the Quiz "<< endl;
    cout << " Step 5 : Plese select option (a),(b),(c) and (d) "<< endl;
    cout << " Step 6 : If your score >= 8 then you passed "     << endl;
    cin >> c;
    if(c=='s' || c=='S'){
        cout << " Qustion 1. What is the capital of India. "<< endl;
        cout << "(a). GORKHPUR"<<endl<<"(b). DELHI"<<endl<<"(c). MUMBAI"<<endl<<"(d).MAHRAJGANJ"<<endl;
        cin >> option;
        if(option == 'b' || option == 'B'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout << endl;
        cout << " Qustion 2. Who is the prime ministor of India. "<< endl;
        cout << "(a). SUNIL NISHAD"<<endl<<"(b). NARENDAR MODI"<<endl<<"(c). THOR"<<endl<<"(d).GOLU"<<endl;
        cin >> option;
        if(option == 'B' || option == 'B'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout << endl;
        cout << " Qustion 3. What is the capital of uattarpradesh. "<< endl;
        cout << "(a). GORKHPUR"<<endl<<"(b). DELHI"<<endl<<"(c). MUMBAI"<<endl<<"(d).LOCKNOW"<<endl;
        cin >> option;
        if(option == 'd' || option == 'D'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout << endl;
        cout << " Qustion 4. What is the capital of bihar. "<< endl;
        cout << "(a). GORKHPUR"<<endl<<"(b). SIWAN"<<endl<<"(c). PATNA"<<endl<<"(d).CHHAPRA"<<endl;
        cin >> option;
        if(option == 'c' || option == 'C'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout << endl;
        cout << " Qustion 5. What is the capital of maharastra. "<< endl;
        cout << "(a). GORKHPUR"<<endl<<"(b). DELHI"<<endl<<"(c). MUMBAI"<<endl<<"(d).MAHRAJGANJ"<<endl;
        cin >> option;
        if(option == 'c' || option == 'C'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout << endl;
        cout << " Qustion 6. Where is ITM college GIDA. "<< endl;
        cout << "(a). GORKHPUR"<<endl<<"(b). DELHI"<<endl<<"(c). MUMBAI"<<endl<<"(d).MAHRAJGANJ"<<endl;
        cin >> option;
        if(option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout << endl;
        cout << " Qustion 7. Where is highcort. "<< endl;
        cout << "(a). GORKHPUR"<<endl<<"(b). DELHI"<<endl<<"(c). MUMBAI"<<endl<<"(d).MAHRAJGANJ"<<endl;
        cin >> option;
        if(option == 'b' || option == 'B'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout << endl;
        cout << " Qustion 8. What is the national animal of India. "<< endl;
        cout << "(a). tiger"<<endl<<"(b). lion"<<endl<<"(c). bull"<<endl<<"(d).cow"<<endl;
        cin >> option;
        if(option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout << endl;
        cout << " Qustion 9. What is the capital of panjab. "<< endl;
        cout << "(a). GORKHPUR"<<endl<<"(b). DELHI"<<endl<<"(c). CHANDIGADH"<<endl<<"(d).MAHRAJGANJ"<<endl;
        cin >> option;
        if(option == 'c' || option == 'C'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout << endl;
        cout << " Qustion 10. What is the capital of UATTRAKHAND. "<< endl;
        cout << "(a). GORKHPUR"<<endl<<"(b). DELHI"<<endl<<"(c). MUMBAI"<<endl<<"(d).DEHRADUN"<<endl;
        cin >> option;
        if(option == 'd' || option == 'D'){
            score = score+1;
        }
        else{
            score = score+0;
        }
    }
    else{
        cout << " Please enter (s)."<< endl;
        PlayQuiz();
    }
    return score;
}
int main()
{
    int FinalResult = 0;
    char PlayAgain;
    int PlayQuiz(void);
    play:
    FinalResult = PlayQuiz();
    cout << " Your total result is :"<< FinalResult << endl;
    if(FinalResult >= 8){
        cout << " You are passed "<< endl;
        cout << " Try again --> Yes or No"<< endl;
        cin >> PlayAgain;
        if(PlayAgain == 'y' || PlayAgain == 'Y'){
        goto play;
        }
        else {
            cout << " Thank you ";
        }
    }
    else{
        cout << " You are fail "<< endl;
        cout << " Try again --> Yes or No"<< endl;
        cin >> PlayAgain;
        if(PlayAgain == 'y' || PlayAgain == 'Y'){
            PlayQuiz();
        }
        else {
            cout << " Thank you ";
        }
    }

return 0;
}