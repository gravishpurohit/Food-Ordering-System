#include <iostream>
#include<ctime>
#include<fstream>
#include <unistd.h>
#include<string>
using namespace std;

class one{
    public:
    void menu1();
};
void one :: menu1(){
    cout<<"\n\n\t\t\t============ Welcome to Pizza Station========== "<<endl;
    cout<<"\n\n\t\t\t ===========\t  Start your order \t==========="<<endl;
    cout<<"\n\n\t=====================\t\t=======================\t\t======================"<<endl;
    cout<<"\t\t[Veg]\t\t\t\t[Non-Veg]\t\t\t[Bevrages]"<<endl;
    cout<<"\t[1] Veg Margherita (Rs.120)\t   [9] Chicken Margherita (Rs.180)\t[17] Pepsi (Rs.60)"<<endl;
    cout<<"\t[2] Cheese N Corn (Rs.150)\t   [10] Chicken Sausage (Rs.200)\t[18] coca-cola (Rs.60)"<<endl;
    cout<<"\t[3] Peppy Paneer (Rs.180)\t   [11] Chicken Golden Delight (Rs.250)\t[19] Frooti (Rs.60)"<<endl;
    cout<<"\t[4] cheese overloaded (Rs.250)\t   [12] Chicken Dominator (Rs.230)\t[20] Lemon Ice Tea (Rs.70)"<<endl;
    cout<<"\t[5] Farm House (Rs.320)\t\t   [13] Chicken Fiesta (Rs.420)\t\t[21] Tea (Rs.40)"<<endl;
    cout<<"\t[6] Peppy Paneer (Rs.220)\t   [14] Indi Chicken Tikka (Rs.290)\t[22] Hot Coffee (Rs.50)"<<endl;
    cout<<"\t[7] Veg Extravaganza (Rs.300)\t   [15] Chicken farm (Rs.350)\t\t[23] Cold Coffee (Rs.80)"<<endl;
    cout<<"\t[8] veg Supreme (Rs.400)\t   [16] Chicken Barbecue (Rs.560)\t[24] Mineral Water (Rs.40)"<<endl;
    cout<<"\n\t\t\t\t\t\t [25] Exit"<<endl;
}

class two : public one 
{
    protected:
    int pizza,ch,a,b,c,d,e,f,g,h,ha,i,j,k,l,m,n,o,p,q,r,ra,t,u,v,w,x,s=0;
    string y,ye,st2;
    public:
    void menu2(){
        ofstream write;
        write.open("order.text");
        if(!write)
        {
            cout<<"file cannot open"<<endl;
            exit(-1);
        }
        a:
            b:
                c:
                    cout<<"\n\n\t Enter your order (Only one order at a time) select from 1-25 : ";
                    cin>>ch;
                    cout<<"\n\n\t Do you want to update your order (y/n): ";
                    cin>>ye;
                    if(ye=="y" || ye=="Y"){
                        goto b;
                    }
                    else{
                        switch(ch){
                            case 1:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            a=120;
                            s=s+a*pizza;
                            write<<"you order Veg Margherita : Rs.120";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Veg Margherita"<<endl<<"\t Your order is successfully saved"<<endl;
                            break;
                            case 2:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            b=150;
                            s=s+b*pizza;
                            write<<"you order Cheese N Corn : Rs.150";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Cheese N Corn"<<endl<<"\t Your order is successfully saved"<<endl;
                            break;
                            case 3:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            c=180;
                            s=s+c*pizza;
                            write<<"you order Peppy Paneer : Rs.180";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Peppy Paneera"<<endl<<"\t Your order is successfully saved"<<endl;
                            break;
                            case 4:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            d=250;
                            s=s+d*pizza;
                            write<<"you order cheese overloaded : Rs.250";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order cheese overloaded"<<endl<<"\t Your order is successfully saved"<<endl;
                            break;
                            case 5:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            e=320;
                            s=s+e*pizza;
                            write<<"you order Farm House : Rs.320";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Farm House"<<endl<<"\t Your order is successfully saved"<<endl;
                            break;
                            case 6:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            f=220;
                            s=s+f*pizza;
                            write<<"you order Peppy Paneer : Rs.220";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Peppy Paneer"<<endl<<"\t Your order is successfully saved"<<endl;
                            break;
                            case 7:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            g=300;
                            s=s+g*pizza;
                            write<<"you order Veg Extravaganza : Rs.300";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Veg Extravaganza"<<endl<<"\t Your order is successfully saved"<<endl;
                            break;
                            case 8:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            h=400;
                            s=s+h*pizza;
                            write<<"you order veg Supreme : Rs.400";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order veg Supreme"<<endl<<"\t Your order is successfully saved"<<endl;
                            break;
                            case 9:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            ha=180;
                            s=s+ha*pizza;
                            write<<"you order Chicken Margherita : Rs.180";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Chicken Margherita"<<endl<<"\t Your order is successfully saved"<<endl;
                            break;
                            case 10:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            j=200;
                            s=s+j*pizza;
                            write<<"you order Chicken Sausage : Rs.200";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Chicken Sausage"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 11:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            k=250;
                            s=s+k*pizza;
                            write<<"you order Chicken Golden Delight : Rs.250";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Chicken Golden Delight"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 12:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            l=230;
                            s=s+l*pizza;
                            write<<"you order Chicken Dominator : Rs.230";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Chicken Dominator"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 13:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            m=420;
                            s=s+m*pizza;
                            write<<"you order Chicken Fiesta : Rs.420";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order CHICKEN FIESTA"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 14:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            n=290;
                            s=s+n*pizza;
                            write<<"you order Indi Chicken Tikka : Rs.290";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Indi Chicken Tikka"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 15:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            o=350;
                            s=s+o*pizza;
                            write<<"you order Chicken farm : Rs.350";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Chicken farm"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 16:
                            cout<<"\n\n\t How many pizza you want: ";
                            cin>>pizza;
                            p=560;
                            s=s+p*pizza;
                            write<<"you order Chicken Barbecue  : Rs.560";
                            write<<"\n";
                            write<<"number of pizza is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Chicken Barbecue"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 17:
                            cout<<"\n\n\t How many Bevrages you want: ";
                            cin>>pizza;
                            q=60;
                            s=s+q*pizza;
                            write<<"you order Pepsi : Rs.60";
                            write<<"\n";
                            write<<"number of Bevrages is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order pepsi"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 18:
                            cout<<"\n\n\t How many Bevrages you want: ";
                            cin>>pizza;
                            r=60;
                            s=s+r*pizza;
                            write<<"you order coca cola : Rs.60";
                            write<<"\n";
                            write<<"number of Bevrages is : "<<pizza;
                            write<<"\n";
                          cout<<"\n\n\t You order coca cola"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 19:
                            cout<<"\n\n\t How many Bevrages you want: ";
                            cin>>pizza;
                            ra=60;
                            s=s+ra*pizza;
                            write<<"you order Frooti : Rs.60";
                            write<<"\n";
                            write<<"number of Bevrages is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Frooti"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 20:
                            cout<<"\n\n\t How many Bevrages you want: ";
                            cin>>pizza;
                            t=70;
                            s=s+t*pizza;
                            write<<"you order Lemon Ice Tea : Rs.70";
                            write<<"\n";
                            write<<"number of Bevrages is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Lemon Ice Tea"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 21:
                            cout<<"\n\n\t How many Bevrages you want: ";
                            cin>>pizza;
                            u=40;
                            s=s+u*pizza;
                            write<<"you order Tea : Rs.40";
                            write<<"\n";
                            write<<"number of Bevrages is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Tea"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 22:
                            cout<<"\n\n\t How many Bevrages you want: ";
                            cin>>pizza;
                            v=50;
                            s=s+v*pizza;
                            write<<"you order Hot Coffee : Rs.50";
                            write<<"\n";
                            write<<"number of Bevrages is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Hot Coffee"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 23:
                            cout<<"\n\n\t How many Bevrages you want: ";
                            cin>>pizza;
                            w=80;
                            s=s+w*pizza;
                            write<<"you order Cold Coffee : Rs.80";
                            write<<"\n";
                            write<<"number of Bevrages is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Cold Coffee"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 24:
                            cout<<"\n\n\t How many Bevrages you want: ";
                            cin>>pizza;
                            x=40;
                            s=s+x*pizza;
                            write<<"you order Mineral water : Rs.40";
                            write<<"\n";
                            write<<"number of Bevrages is : "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\t You order Mineral water"<<endl<<"\t Your order is successfully saved"<<endl;
                        break;
                        case 25:
                        exit(0);
                        break;
                        
                        default:
                        cout<<"\n\n\t enter the correct key!" <<endl;
                        goto c;
                        break;
                    }
                    cout<<"\n\n\t Do you want another order (yes/no): ";
                    cin>>y;
                    if(y=="YES" || y=="yes"){
                        goto a;
                    }
                    else{
                        cout<<"\n\n\t\t\t Thank you for your order :) Generating Bill "<<endl;
                    }
           }
           write.close();
    cout<<"\n\n\t\t==================================================="<<endl;
    cout<<"\t\t\t\tPizza Station";
    cout<<"\n\t\t==================================================="<<endl;
    cout<<"\t\t  Address - 183, Race Course Road\n\t\t\t\tIndore (452001)"<<endl;
    cout<<"\n\t\t Contact No. - (0731)2453627"<<endl;
    time_t tt;
    struct tm * ti;
    time(&tt) ;
    ti=localtime(&tt);
    cout<<"\n\t\t Day, Date, Time: "<<asctime(ti);
    cout<<"\n\t\t Bill No: "<<rand()<<"\t\tOrder No: "<<rand()<<endl;
    cout<<"\n\n\t\t Cashier : Arpit"<<endl;
    ifstream read("order.text");
        while(!read){
         read>>st2;
        }
        getline(read,st2);
        cout<<"\n\t\t"<<st2;
        read.close();
    cout<<"\n\n\t\t Your total Bill is Rs."<<s<<"(inc. GST)"<<endl;
    cout<<"\n\n";
    }
    void show1()
    {
        menu1();
        menu2();
    }
};


int main()
{
    two obj1;
    obj1.show1();
    return 0;
}