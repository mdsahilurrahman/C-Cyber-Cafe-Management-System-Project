#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
using namespace std;

class cafe
{
    public:

    cafe(){
int menu1;
  cout<< ">>>>>welcome to cyberline cafe<<<<<<"<<endl;

  cout<<" \t\t\n\n\t1.login "<<endl;
  cout<< "\t2.register new member"<<endl;
  cout<<"\t3.forget password"<<endl;
  cout<< "Choice any................."<<"  ";

   cin>>menu1;

    if(menu1==1)
    {
        main_login();
    }
     else if (menu1==2)
    {
        main_reg();
    }
    else if (menu1==3)
    {
        forget_pass();
    }
else
    {
        cout<< "thanks,see you next time:"<<endl;
    }
    }

   int login_menu();
   int master_entry();
   int computer_entry();
   int cafe_mana();
   int add_new_mem();
   int show_mem();//main menu

   int delete_rec();
   int search_rec();
   int update_rec();//master_entry

   int mem_login();
   int mem_logout();
   int non_mem();
   int nonmem_logout();//booking

   int booking();
   int charges();
   int renewal();//cafe_management

   int add_com_rec();
   int show_com();
   int update_com();
   int del_com();
   int search_com();//computer entry

   int main_login();
   int main_reg();
   int forget_pass();

};

int cafe::main_login()
{
       int count;
        string user,pass,u,p;
        system("cls");
        cout<<"\t\t\t\t\t\tCyberline Cafe"<<endl;
        cout<<"\n\n\n\n\n\n\n\t\t\t\tLogin"<<endl;
        cout<<"\t\t\t....................."<<endl;
        cout<<"\n\t\tUSERNAME :";
        cin>>user;
        cout<<"\t\tPASSWORD :";
        cin>>pass;

        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\n\n\n\n\n\n\t\tHello"<< "  "<<user<<"\n\t\tLogin Successful ................."<<"\n\t\twelcome to Cyberline Cafe";
                cin.get();
                cin.get();
              system("cls");
               login_menu();


        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
               system("cls");
                cafe();
        }
}

int cafe::main_reg()
{
    string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;

        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Successful\n";
        cafe();
}
int cafe::forget_pass()
{
     int ch;
        system("cls");
        cout<<"Reset your password";
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Search your id by password"<<endl;
        cout<<"3.Main menu"<<endl;
        cout<<"Enter your choice ...................................";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuser;

                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nHurray, account found\n";
                                cout<<"\nYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                cafe();
                        }
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                                cafe();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass;

                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found in the database \n";
                                cout<<"\nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                cafe();
                        }
                        else
                        {
                                cout<<"Sorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();
                                cafe();
                        }

                        break;
                }

                case 3:
                {
                        cin.get();
                        cafe();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        forget_pass();
        }
}

 int cafe:: login_menu()
 {
      cout<< "        >>>welcome to cyberline cafe<<<<<"<<endl;
   cout<< ":---------------------------------------------------------------:"<<endl;

    cout<<"\n\t\t1.Master Entry"<<endl;
    cout<<"\t\t2.Computer Entry"<<endl;
    cout<<"\t\t3.Cafe Management"<<endl;
    cout<<"\t\t4.Exit"<<endl;
int menu;
cout<< "Enter any of keys........."<<" ";
   cin>>menu;

    if(menu==1)
    {
        master_entry();
    }
     else if (menu==2)
    {
        computer_entry();
    }
    else if (menu==3)
    {
        cafe_mana();
    }



    else
    {
        cout<< "thanks,see you next time:"<<endl;
    }

 }




int cafe::cafe_mana()
{
    system("cls");
   cout<< "->>CaFe Management Ber"<<endl;
   cout<< "\t\t\n1.Booking "<<endl;
   cout<< "\t\t2.charges"<<endl;
   cout<< "\t\t3.Renewal"<<endl;
   cout<< "\t\t4.Return"<<endl;


int cmang;
cin>>cmang;
switch(cmang)
    {
        case 1:booking();
    break;
    case 2:charges();
    break;
    case 3:renewal();
    break;
    default:
        cout<< "return to main menu"<<endl;
    }

}
int cafe::master_entry()
{
 system("cls");
  cout<<">>>>>welcome to member entry<<<<<<"<<endl;
  cout<<"[1]Add new member"<<endl;
  cout<<"[2]Show Member"<<endl;
  cout<<"[3]Update Record"<<endl;
  cout<<"[4]Delete Record"<<endl;
  cout<<"[5]Search Record"<<endl;
  cout<<"[6]Return"<<endl;

  int memintry;
  cin>>memintry;

   switch(memintry)
   {
       case 1:add_new_mem();
       break;
       case 2:show_mem();
       break;
       case 3:update_rec();
       break;
       case 4:delete_rec();
       break;
       case 5:search_rec();
       break;
       default:
        cout<< "return to the main menu"<<endl;

   }
}

int cafe ::computer_entry()
{
     system("cls");

     cout<< "\t\t>>>Computer Entry<<<"<<endl;

      cout<< "\n\n\t\t1.Add Computer"<<endl;
      cout<< "\t\t2.Show Computer"<<endl;
      cout<< "\t\t3.Update Record"<<endl;
      cout<< "\t\t4.Delete Record"<<endl;
      cout<< "\t\t5.Search Record"<<endl;
      cout<< "\t\t6. return"<<endl;

 int com_entry;
cout<<"Choice any...................\t";
cin.ignore();
 cin>>com_entry;
 switch(com_entry)
 {
     case 1:add_com_rec();
     break;
     case 2:show_com();
     break;
     case 3:update_com();
     break;
     case 4:del_com();
     break;
     case 5:search_com();
     break;
     default:
        cout<< "return to the main menu"<<endl;

 }
}



int cafe:: add_com_rec()
{
      system("cls");
      cout<< "\t\t\tAdd Computer"<<endl;

      int serialnumber;
      char usercomid[8];
      ofstream addcomputer;
      addcomputer.open("addcomputerdara.txt",ios::out|ios::app);
     cout<< "Enter Computer Serial Number:";
     cin>>serialnumber;
    cin.ignore();
    cout<< "Enter computer User ID:";
     cin.getline(usercomid,8);
     cin.ignore();
      addcomputer<<"Serial Number:"<<serialnumber<<endl;
    addcomputer<<"User ID:" <<usercomid<<endl;
      cout<<"-------------------------------------------"<<endl;
      cout<<"\n\n\t\tThanks"<<endl;


      cin.ignore();
     system("cls");
     computer_entry();

}
   int cafe :: show_com()
   {
         cin.ignore();
         system("cls");
          cout<< "\t\t\Show Computer"<<endl;
          string shw_com;
          ifstream showcomputer("addcomputerdara.txt");
          while(getline(showcomputer,shw_com))
          {
              cout<<shw_com<<endl;
          }
          showcomputer.close();

   }
   int cafe:: update_com()
   {    

   }
   int cafe:: del_com()
   {

   }
   int cafe:: search_com()
   {

        int ch1;
        system("cls");
        cout<<"\t\t>>>Search Computer Information<<<"<<endl;
        cout<<"\n\n\t\t1.Search Computer by username"<<endl;
        cout<<"\t\t2.Search Computer by password"<<endl;
        cout<<"\t\t3.Main menu"<<endl;
        cout<<"\nEnter your choice ........................";
        cin>>ch1;
        switch(ch1)
        {
                case 1:
                {
                        int count=0;
                        string searchuser1,su1,sp1;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuser1;

                        ifstream searchu1("addcomputerdara.txt");
                        while(searchu1>>su1>>sp1)
                        {
                                if(su1==searchuser1)
                                {
                                        count=1;
                                }
                        }
                        searchu1.close();
                        if(count==1)
                        {
                                cout<<"\n\nHurray, account found\n";
                                cout<<"\nYour password is "<<sp1;
                                cin.get();
                                cin.get();
                                system("cls");
                                computer_entry();
                        }
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                               computer_entry();

                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass1,su21,sp21;
                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass1;

                        ifstream searchp1("database.txt");
                        while(searchp1>>su21>>sp21)
                        {
                                if(sp21==searchpass1)
                                {
                                        count=1;
                                }
                        }
                        searchp1.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found in the database \n";
                                cout<<"\nYour Id is : "<<su21;
                                cin.get();
                                cin.get();
                                system("cls");
                               computer_entry();

                        }
                        else
                        {
                                cout<<"Sorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();
                               computer_entry();
                        }

                        break;
                }

                case 3:
                {
                        cin.get();
                        computer_entry();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        computer_entry();
        }
   }





int cafe::add_new_mem()
{

}
int cafe::show_mem()
{

}
int cafe::update_rec()
{

}
int cafe::delete_rec()
{

}
int cafe::search_rec()
{

}

int cafe:: mem_login()
{

}

int cafe:: mem_logout()
{

}
int cafe:: non_mem()
{

}
int cafe:: nonmem_logout()
{

}

 int cafe:: booking()
 {

 }
   int cafe:: charges()
{

}

   int cafe:: renewal()
   {

   }




int main()
{

cafe ob1;
    return 0;
}
