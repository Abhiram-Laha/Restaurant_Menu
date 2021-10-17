/* Resturant Menu */

#include <iostream>
using namespace std;

int main(){
    int order_number,amount;
    cout<<"|--------------------------------MENU--------------------------------|\n\n";

    cout<<"(1)  Mutton Briyani                  Rs.150\n";
    cout<<"(2)  Chicken Briyani                 Rs.90\n";
    cout<<"(3)  Tandoori Chicken                Rs.120\n";
    cout<<"(4)  Mushroom Pizza                  Rs.250\n";
    cout<<"(5)  Japenese Noodles                Rs.110\n";
    cout<<"(6)  Dal Mahkne                      Rs.70\n\n";
    
    /* input from coustmer */
    cout<<"Please select the Order Number : ";
    cin>>order_number;

    cout<<"Please select Number of Plates : ";
    cin>>amount;

    switch(order_number){
        case 1:
        cout<<"\n\nOrder Choosen : Mutton Briyani\n";
        cout<<"Number of Deals : "<<amount;
        cout<<"\nPrice of each Plate : Rs.150\n";
        cout<<"Total Price : Rs."<<amount*150;
        cout<<"\n\n|------------------------THANK YOU FOR COMING---------------------|\n\n";
        break;

        case 2:
        cout<<"\n\nOrder Choosen : Chicken Briyani\n";
        cout<<"Number of Deals : "<<amount;
        cout<<"\nPrice of each Plate : Rs.90\n";
        cout<<"Total Price : Rs."<<amount*90;
        cout<<"\n\n|------------------------THANK YOU FOR COMING---------------------|\n\n";
        break;

        case 3:
        cout<<"\n\nOrder Choosen : Tandoori Chicken \n";
        cout<<"Number of Deals : "<<amount;
        cout<<"\nPrice of each Plate : Rs.120\n";
        cout<<"Total Price : Rs."<<amount*120;
        cout<<"\n\n|------------------------THANK YOU FOR COMING---------------------|\n\n";
        break;

        case 4:
        cout<<"\n\nOrder Choosen : Mushroom Pizza\n";
        cout<<"Number of Deals : "<<amount;
        cout<<"\nPrice of each Plate : Rs.250\n";
        cout<<"Total Price : Rs."<<amount*250;
        cout<<"\n\n|------------------------THANK YOU FOR COMING---------------------|\n\n";
        break;

        case 5:
        cout<<"\n\nOrder Choosen : Japenese Noodles\n";
        cout<<"Number of Deals : "<<amount;
        cout<<"\nPrice of each Plate : Rs.110\n";
        cout<<"Total Price : Rs."<<amount*110;
        cout<<"\n\n|------------------------THANK YOU FOR COMING---------------------|\n\n";
        break;

        case 6:
        cout<<"\n\nOrder Choosen : Dal Mahkne\n";
        cout<<"Number of Deals : "<<amount;
        cout<<"\nPrice of each Plate : Rs.70\n";
        cout<<"Total Price : Rs."<<amount*70;
        cout<<"\n\n|------------------------THANK YOU FOR COMING---------------------|\n\n";
        break;

    }

    return 0;
}