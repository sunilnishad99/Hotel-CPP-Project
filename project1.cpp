#include<iostream>
using namespace std;
//---------------------------FOOD BILLING SYSTEM (PROJECT)-----------------------------
int returnTotalBill(){
    char c,item,vegItem ,non_vegItem,selectAgain;
    int billAmt=0;
    cout << "------------Welcom to your food order system-------------"<<endl;
    cout << "------------Please fallow the instructions---------------"<<endl;
    cout << "Step 1 : Please press (s or S)botton to start your order" <<endl;
    cout << "Step 2 : You can order both (Veg and Non-Veg) items"<<endl;
    cout << "Step 3 : Please select (a or A)botton for Veg items"<<endl;
    cout << "Step 4 : Please select (b or B)botton for Non-Veg items"<<endl;
    cout << "Step 4 : You will get your final bill after purchasing"<<endl;
    start:
    cin  >> c;
    if(c=='s' || c=='S'){
    items:
    cout << " Which type of items you want to order"<<endl;
    cout << " (a) Veg-items        (b)Non-Veg items"<<endl;
    cin  >> item;
    if(item=='a' || item=='A'){
        vegItemList:
      cout << "Please select 1,2,3,4 and 5 as per your choice"<<endl;
      cout << "(1). Paneer      : Rs.250"<<endl;
      cout << "(2). Burgar      : Rs.80"<<endl;
      cout << "(3). Pakode      : Rs.10"<<endl;
      cout << "(4). Pani-Puri   : Rs.50"<<endl;
      cout << "(5). Veg-Biryani : Rs.80"<<endl;
      //vegItemList:
      cin  >> vegItem;
      if(vegItem=='1'){
        billAmt=billAmt + 250;
      }
      else if(vegItem=='2'){
        billAmt=billAmt + 80;
      }
      else if(vegItem=='3'){
        billAmt=billAmt + 10;
      }
      else if(vegItem=='4'){
        billAmt=billAmt + 50;
      }
      else if(vegItem=='5'){
        billAmt=billAmt + 80;
      }
      else{
           cout << " Invalid botton \n Please press Valid botton"<<endl;
           goto vegItemList;
      }
      cout << " Do you want at more items then , y or n"<<endl;
      cin  >> selectAgain;
      if(selectAgain=='y'){
        goto items;
      }
      else{
        return billAmt;
      }
    }
    else if(item=='b' || item=='B'){
      non_vegItemList:
      cout << "Please select 1,2,3,4 and 5 as per your choice"<<endl;
      cout << "(1). Chicken-Biryani      : Rs.160"<<endl;
      cout << "(2). Chicken-Role      : Rs.40"<<endl;
      cout << "(3). Egg-Role      : Rs.30"<<endl;
      cout << "(4). Egg-Kari   : Rs.50"<<endl;
      cout << "(5). Biryani : Rs.80"<<endl;
      //vegItemList:
      cin  >> non_vegItem;
      if(non_vegItem=='1'){
        billAmt=billAmt + 160;
      }
      else if(non_vegItem=='2'){
        billAmt=billAmt + 40;
      }
      else if(non_vegItem=='3'){
        billAmt=billAmt + 30;
      }
      else if(non_vegItem=='4'){
        billAmt=billAmt + 50;
      }
      else if(non_vegItem=='5'){
        billAmt=billAmt + 80;
      }
      else{
           cout << " Invalid botton \n Please press Valid botton"<<endl;
           goto non_vegItemList;
      }
      cout << " Do you want at more items then , y or n"<<endl;
      cin  >> selectAgain;
      if(selectAgain=='y'){
        goto items;
      }
      else{
        return billAmt;
      }
    }
    else{
        cout << " Invalid botton \n Please press Valid botton"<<endl;
        goto items;
    }
    }
    else{
        cout << " Invalid botton \n Please press Valid botton(s or S)"<<endl;
        goto start;
    }
      return billAmt;
}
int main()
{
    int returnTotalBill(void);     // prototype 
    int totalBill = returnTotalBill();
    cout <<" Your total bill amt. is : "<<totalBill<<endl;
    cout << " Thank you "<<endl;
return 0;
}