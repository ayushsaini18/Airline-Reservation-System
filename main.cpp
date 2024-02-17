#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <cstdio>
using namespace std;

class BOOKING
{
    public :
        char name[20];
        char add[50];
        char email[50];
        long long mobile;
        int age;
        char sex;
        char departure[25];
        char arrival[25];
        char date[10];
        long long aadhar;
        char flightno[40];
        double time;
    public :
        int getInfo()
        {
            cout << "Enter Passenger's Name :- ";
            cin.get();
            cin.getline(name,20);

            cout << "Enter the Address Details :- ";
            cin.getline(add,50);

            cout << "Enter your email address :- ";
            cin.getline(email,50);

            cout << "Enter your Phone Number :- ";
            cin >> mobile;

            cout << "Enter your Age :- ";
            cin >> age;

            cout <<"Enter Sex(M/F) :- ";
            cin >> sex;

            cout << "Enter Aadhar Number :- ";
            cin >> aadhar;

            int n;
            int k = 0;
            do
            {
                cout << "\n\t\tSelect Your City of Departure\n";
                cout << "\t\t-----------------------------\n";
		        cout << "\t1. Patna\n";
		        cout << "\t2. Amritsar\n";
		        cout << "\t3. Bengaluru\n";
		        cout << "\t4. NEW DELHI\n";
		        cout << "\t5. Mumbai\n";
		        cout << "\t6. Chandigarh\n";

		        cout << "Please Input Your Choice Number :-  ";
                cin >> n;
		        switch (n)
                {
                    case 1:
                        strcpy(departure, "PATNA");
                        break;
                    case 2:
                        strcpy(departure, "AMRITSAR");
                        break;
                    case 3:
                        strcpy(departure, "BENGALURU");
                        break;
                    case 4:
                        strcpy(departure, "NEW DELHI");
                        break;
                    case 5:
                        strcpy(departure, "MUMBAI");
                        break;
                    case 6:
                        strcpy(departure, "CHANDIGARH");
                        break;
                    default:
                        cout << "Invalid Choice . Please Try Again.\n";
                        k++;
		        }
            }while(k != 0);

            int p = 0;
            do
            {
                cout << "\n\t\tSelect Your City of Arrival\n";
                cout << "\t\t---------------------------\n";
                cout << "\t1. DUBAI\n";
                cout << "\t2. USA\n";
                cout << "\t3. AUSTRALIA\n";
                cout << "\t4. EUROPE\n";
                cout << "\t5. UK\n";
                

                cout << "Please Input Your Choice :- ";
                cin >>n;

                switch(n)
                {
                    case 1:
                        strcpy(arrival,"DUBAI");
                        cout<<"Enter flight number:- "<<endl;
                        cin>>flightno;
                        
                        break;
                    case 2:
                        strcpy(arrival,"USA");
                        cout<<"Enter flight number:- "<<endl;
                        cin>>flightno;
                        break;
                    case 3:
                        strcpy(arrival,"AUSTRALIA");
                        cout<<"Enter flight number:- "<<endl;
                        cin>>flightno;
                        break;
                    case 4:
                        strcpy(arrival,"EUROPE");
                        cout<<"Enter flight number:- "<<endl;
                        cin>>flightno;
                        break;
                    case 5:
                        strcpy(arrival,"UK");
                        cout<<"Enter flight number:- "<<endl;
                        cin>>flightno;
                        break;
                   
                   default:
                        cout << "Invalid choice . Please Try Again.\n";
                        p++;
                }
            }while(p != 0);

            cout << "  Please confirm Date of Journey ( DD/MM/YYYY ) :- ";
            cin >> date;
            
        }

        int disInfo()
        {
            cout.setf(ios::left);
            cout <<setw(15)<<flightno<<setw(20)<< name <<setw(12)<< date <<setw(20)<< add <<setw(15)<< mobile <<setw(30)<<email<<setw(20)<<aadhar<<setw(12)<< departure <<setw(12)<< arrival<<setw(20)<<endl;
        }

};
class flight
{
    
    public:
    void details(){
        cout<<"___________Welcome to Dubai semirates________\n"<<endl;
                        cout<<"1. DUB-650"<<endl;
                        cout<<"\t18-02-2023 8:00AM 10 hrs Rs. 18000"<<endl;
                        cout<<"2. DUB-652"<<endl;
                        cout<<"\t20-02-2023 7:00AM 11 hrs Rs. 16000"<<endl;
                        cout<<"3. DUB-654"<<endl;
                        cout<<"\t22-02-2023 8:00AM 12 hrs Rs. 15000"<<endl;
    cout<<"\n___________Welcome to USA emirates________\n"<<endl;
                         cout<<"1. USA-750"<<endl;
                        cout<<"\t08-02-2023 8:00AM 10 hrs Rs. 14000"<<endl;
                        cout<<"2. USA-752"<<endl;
                        cout<<"\t10-02-2023 7:00AM 11 hrs Rs. 12000"<<endl;
                        cout<<"3. USA-754"<<endl;
                        cout<<"\t12-02-2023 8:00AM 12 hrs Rs. 10000"<<endl;
    cout<<"\n___________Welcome to AUSTRALIA emirates________\n"<<endl;
                         cout<<"1. AUS-850"<<endl;
                        cout<<"\t08-02-2023 8:00AM 10 hrs Rs. 24000"<<endl;
                        cout<<"2. AUS-852"<<endl;
                        cout<<"\t10-02-2023 7:00AM 11 hrs Rs. 22000"<<endl;
                        cout<<"3. AUS-854"<<endl;
                        cout<<"\t12-02-2023 8:00AM 12 hrs Rs. 20000"<<endl;
    cout<<"\n___________Welcome to EUROPE emirates________\n"<<endl;
                        cout<<"1. EUR-950"<<endl;
                        cout<<"\t08-02-2023 8:00AM 10 hrs Rs. 31000"<<endl;
                        cout<<"2. EUR-952"<<endl;
                        cout<<"\t10-02-2023 7:00AM 11 hrs Rs. 29000"<<endl;
                        cout<<"3. EUR-954"<<endl;
                        cout<<"\t12-02-2023 8:00AM 12 hrs Rs. 27000"<<endl;
    cout<<"\n___________Welcome to UK emirates________\n"<<endl;                        
                        cout<<"1. Uk-450"<<endl;
                        cout<<"\t08-02-2023 8:00AM 10 hrs Rs. 14000"<<endl;
                        cout<<"2. Uk-452"<<endl;
                        cout<<"\t10-02-2023 7:00AM 11 hrs Rs. 12000"<<endl;
                        cout<<"3. Uk-454"<<endl;
                        cout<<"\t12-02-2023 8:00AM 12 hrs Rs. 10000"<<endl;

                        

                            
    }
};
class payment
{
    public:
     int charges;
    long long cardno;
    int cvv;

    void method()
    {
        cout<<"Enter charges to be paid :- "<<endl;
        cin>>charges;
        cout<<"Enter your Bank credit card number :- "<<endl;
        cin>>cardno;
        cout<<"Enter CVV:-"<<endl;
        cin>>cvv;
        cout<<"\n\n_________PAYMENT SUCCESSFULL______\n\n"<<endl;

    }
};

int main()
{
start :
    cout << "\n\n*********************************************************************\n";
    cout <<"..............Welcome to the MEGA Airline Services ............\n\n";
    cout << "*********************************************************************\n";
    int k = 0;
    int choice;
    do
    {
        cout << "\tChoose the Option of your Choice\n";
        cout << "--------------------------------------------------------------------\n";
        cout << "\t1. Booking of flight\t\t2. Flight Details\n";
        cout << "\t3. Search \t\t\t4. Modify your details\n";
        cout << "\t5. Cancellation of flight\t6. Passenger Details\n";

        cout << "Please Enter your Preferred Choice :- ";
        cin >> choice;
        if(choice<1 || choice >6)
        {
            cout << "\nInvalid Choice . Please Try Again .\n";
            k++;
        }
    }while (k != 0);

    switch (choice)
    {
        case 1:
            {
                BOOKING b;
                fstream f1;
                char ch;
                int book_id = 1;
                f1.open("booking.dat",ios::in|ios::out|ios::app|ios::binary);
                cout << "\t\tWelcome to Booking Services\n";
                cout << "\t\t---------------------------\n";

                do
                {
                    b.getInfo();
                    f1.write((char *)&b , sizeof(b));

                    cout << "\n\t\tBooking Details are following\n";
                    cout << "\t\t-----------------------------\n";
                    cout.setf(ios::left);
                    cout <<setw(15)<<"Flight No."<<setw(20)<<"Name"<<setw(12)<<"Date"<<setw(20)<<"Address"<<setw(15)<<"Mobile"<<setw(30)<<"Email"<<setw(20)<<"Aadhar"<<setw(12)<<"Depart."<<setw(12)<<"Arrival"<<endl;
                    cout <<setw(15)<<"----"<<setw(20)<<"----"<<setw(12)<<"-------"<<setw(20)<<"------"<<setw(15)<<"-----"<<setw(30)<<"------"<<setw(20)<<"-------"<<setw(12)<<"-------"<<setw(12)<<"-------"<<endl;
                    b.disInfo();
                    cout << "\nDo you want to register again ?\n";
                    cout << "(Y for yes,N for no)";
                    cin >> ch;
                }
                while (ch == 'Y'|| ch == 'y');
                cout << "\n\t..........Booking Successful...............\n";
                payment p;
                p.method();

                cout<<"\nYour Ticket is :-\n"<<endl;
                 cout <<setw(15)<<"Flight No."<<setw(20)<<"Name"<<setw(12)<<"Date"<<setw(20)<<"Address"<<setw(15)<<"Mobile"<<setw(30)<<"Email"<<setw(20)<<"Aadhar"<<setw(12)<<"Depart."<<setw(12)<<"Arrival"<<endl;
                cout <<setw(15)<<"----"<<setw(20)<<"----"<<setw(12)<<"-------"<<setw(20)<<"------"<<setw(15)<<"-----"<<setw(30)<<"------"<<setw(20)<<"-------"<<setw(12)<<"-------"<<setw(12)<<"-------"<<endl;
                b.disInfo();

                char c1;
                cout << "\tPress 'q' to terminate or any other key to return to HomeScreen :- ";
                cin >>c1;
                if(c1 == 'q' || c1 == 'Q')
                    exit(EXIT_FAILURE);
                else
                    goto start;
                f1.close();
            }
            break;

         case 2:
            {
                flight f;
                f.details();
                char c0;
                cout << "\tPress 'q' to terminate or any other key to return to HomeScreen :- ";
                cin >>c0;
                if(c0 == 'q' || c0 == 'Q')
                    exit(EXIT_FAILURE);
                else
                    goto start;
                
            }
            break;

        case 3:
            {
                BOOKING s;
                int choice;
                fstream f3;
                char sName[20];
                char sEmail[20];
                long sMobile;
                long long sAadhar;
                f3.open("booking.dat",ios::in|ios::out|ios::binary);
                cout << "\tChoose the Criteria by which you want to search the PASSENGERS list\n";
                cout <<"\t1. By Name\n\t2. By Email\n";
                cout <<"\t3. By Aadhar Number(Recommended)\n\t4. By Phone Number\n";

                cout << "Enter your Preferred Choice :- ";
                cin >> choice;

                switch (choice)
                {
                    case 1:
                        {

                            int flag = 0;
                            cout << "Enter the name which you want to search :- ";
                            cin >> sName;
                            f3.seekg(0,ios::beg);
                            f3.read((char *)&s,sizeof(s));
                            cout.setf(ios::left);
                            cout <<setw(15)<<"Flight No."<<setw(20)<<"Name"<<setw(12)<<"Date"<<setw(20)<<"Address"<<setw(15)<<"Mobile"<<setw(30)<<"Email"<<setw(20)<<"Aadhar"<<setw(12)<<"Depart."<<setw(12)<<"Arrival"<<endl;
                            cout <<setw(15)<<"----"<<setw(20)<<"----"<<setw(12)<<"-------"<<setw(20)<<"------"<<setw(15)<<"-----"<<setw(30)<<"------"<<setw(20)<<"-------"<<setw(12)<<"-------"<<setw(12)<<"-------"<<endl;
                            while (f3.eof() != 1)
                            {
                                if (strcmp(sName,s.name) == 0)
                                {
                                    s.disInfo();
                                    flag = 1;
                                }
                               f3.read((char *)&s,sizeof(s));
                            }

                            if (flag == 0)
                            cout << "\t!!!!!!Search Query Not Found!!!!!!!!\n";
                            f3.close();

                            char c3_a;
                            cout << "\tEnter 'q' to quit or Any Other key to go to HomeScreen\n";
                            cin >> c3_a;

                            if(c3_a == 'q'|| c3_a == 'Q')
                                exit(EXIT_FAILURE);
                            else
                                goto start;
                        }
                        break;

                    case 2:
                        {
                            int flag = 0;
                            cout << "Enter the Email-id you want to search :- ";
                            cin >> sEmail;

                            f3.seekg(0,ios::beg);
                            f3.read((char *)&s,sizeof(s));

                            cout.setf(ios::left);
                             cout <<setw(15)<<"Flight No."<<setw(20)<<"Name"<<setw(12)<<"Date"<<setw(20)<<"Address"<<setw(15)<<"Mobile"<<setw(30)<<"Email"<<setw(20)<<"Aadhar"<<setw(12)<<"Depart."<<setw(12)<<"Arrival"<<endl;
                            cout <<setw(15)<<"----"<<setw(20)<<"----"<<setw(12)<<"-------"<<setw(20)<<"------"<<setw(15)<<"-----"<<setw(30)<<"------"<<setw(20)<<"-------"<<setw(12)<<"-------"<<setw(12)<<"-------"<<endl;
                            {
                                if (strcmp(sEmail,s.email) == 0)
                                {
                                    s.disInfo();
                                    flag = 1;
                                }
                               f3.read((char *)&s,sizeof(s));
                            }

                            if(flag == 0)
                                cout << "\t\tSearch Query Not Found !!!\n";

                            char c3_b;
                            cout << "\tPress 'q' to quit or Any Other Key to go to HomeScreen\n";
                            cin >> c3_b;

                            if(c3_b == 'q' || c3_b == 'Q')
                               exit (EXIT_FAILURE);
                            else
                                goto start;
                        }
                        break;

                    case 3:
                        {
                            int flag = 0;
                            cout << "Enter the Aadhar number which you want to search :- ";
                            cin >> sAadhar;

                            f3.seekg(0,ios::beg);
                            f3.read((char*)&s,sizeof(s));

                            cout.setf(ios::left);
                             cout <<setw(15)<<"Flight No."<<setw(20)<<"Name"<<setw(12)<<"Date"<<setw(20)<<"Address"<<setw(15)<<"Mobile"<<setw(30)<<"Email"<<setw(20)<<"Aadhar"<<setw(12)<<"Depart."<<setw(12)<<"Arrival"<<endl;
                             cout <<setw(15)<<"----"<<setw(20)<<"----"<<setw(12)<<"-------"<<setw(20)<<"------"<<setw(15)<<"-----"<<setw(30)<<"------"<<setw(20)<<"-------"<<setw(12)<<"-------"<<setw(12)<<"-------"<<endl;
                            while (f3.eof() != 1)
                            {
                                if(sAadhar == s.aadhar)
                                {
                                    s.disInfo();
                                    flag = 1;
                                  break;
                                }
                                
                            }

                            if(flag == 0)
                                cout << "\t\tSearch Query Not Found !!!!\n";
                                
                            char c3_c;
                            cout << "\tPress 'q' to quit or Any Other Key to go to HomeScreen\n";
                            cin >> c3_c;

                            if(c3_c == 'q' || c3_c == 'Q')
                                exit(EXIT_FAILURE);
                            else
                                goto start;
                                
                        }
                        break;

                    case 4:
                        {
                            int flag = 0;
                            cout << "Please Enter the phone number which you want to search :- ";
                            cin >> sMobile;

                            f3.seekg(0,ios::beg);
                            f3.read((char *)&s,sizeof(s));

                            cout.setf(ios::left);
                            cout <<setw(15)<<"Flight No."<<setw(20)<<"Name"<<setw(12)<<"Date"<<setw(20)<<"Address"<<setw(15)<<"Mobile"<<setw(30)<<"Email"<<setw(20)<<"Aadhar"<<setw(12)<<"Depart."<<setw(12)<<"Arrival"<<endl;
                             cout <<setw(15)<<"----"<<setw(20)<<"----"<<setw(12)<<"-------"<<setw(20)<<"------"<<setw(15)<<"-----"<<setw(30)<<"------"<<setw(20)<<"-------"<<setw(12)<<"-------"<<setw(12)<<"-------"<<endl;
                            while (f3.eof() != 0)
                            {
                                if (sMobile,s.mobile)
                                {
                                    s.disInfo();
                                    flag = 1;
                                }
                            }

                            if(flag == 0)
                                cout << "\tSearch Query Not Found !!!!!!!!\n";

                            char c3_d;
                            cout << "\tPress 'q' to quit or Any other key to go to HomeScreen\n";
                            cin >> c3_d;

                            if(c3_d == 'q' || c3_d == 'Q')
                                exit(EXIT_FAILURE);
                            else
                                goto start;
                        }
                }

            }
            break;

        case 4:
            {
                BOOKING m;
                int line;
                fstream f4;
                cout << "Enter the line number which you want to modify :- ";
                cin >> line;

                int pos;
                pos = (line -1) *sizeof(m);
                f4.open("booking.dat",ios::in|ios::out|ios::binary);

                f4.seekp(pos,ios::beg);
                m.getInfo();
                f4.write((char *)&m,sizeof(m));
                f4.close();

                char c4;
                cout << "\tEnter 'q' to quit or Any Other key to go to HomeScreen\n";
                cin >> c4;

                if(c4 == 'q'|| c4 == 'Q')
                    exit(EXIT_FAILURE);
                else
                    goto start;
            }
            break;

        case 5:
            {
                BOOKING c;
                fstream f4,fr;
                f4.open("booking.dat",ios::in|ios::out|ios::binary);
                fr.open("b.dat",ios::in|ios::out|ios::binary|ios::app);

                char nam[20];
                cout << "Enter the name of passsenger for cancellation of ticket. :- ";
                cin >> nam;

                f4.seekg(0,ios::beg);
                f4.read((char*)&c,sizeof(c));
                while (f4.eof() != 1)
                {
                    if(strcmp(nam,c.name) != 0)
                        fr.write((char *)&c,sizeof(c));
                    f4.read((char*)&c,sizeof(c));
                }

                cout << "\n\t******Ticket Cancellation Successful******\n";

                remove ("booking.dat");
                rename ("b.dat","booking.dat");

                f4.close();
                fr.close();
                char c5;
                cout << "\tEnter 'q' to quit or Any Other key to go to HomeScreen\n";
                cin >> c5;

                if(c5 == 'q'|| c5 == 'Q')
                    exit(EXIT_FAILURE);
                else
                    goto start;

            }
            break;

        case 6:
            {
                BOOKING p;
                int count = 0;
                fstream f6;
                f6.open("booking.dat",ios::in|ios::out|ios::binary);
                f6.seekg(0,ios::beg);
                f6.read ((char *)&p,sizeof(p));
                cout.setf(ios::left);
                cout <<endl;
                 cout <<setw(15)<<"Flight No."<<setw(20)<<"Name"<<setw(12)<<"Date"<<setw(20)<<"Address"<<setw(15)<<"Mobile"<<setw(30)<<"Email"<<setw(20)<<"Aadhar"<<setw(12)<<"Depart."<<setw(12)<<"Arrival"<<endl;
                    cout <<setw(15)<<"----"<<setw(20)<<"----"<<setw(12)<<"-------"<<setw(20)<<"------"<<setw(15)<<"-----"<<setw(30)<<"------"<<setw(20)<<"-------"<<setw(12)<<"-------"<<setw(12)<<"-------"<<endl;
                    
                while(f6.eof() != 1)
                {
                    p.disInfo();
                    f6.read ((char *)&p,sizeof(p));
                    count++;
                }
                f6.close();

                cout << "\n\tTotal Number of passengers is "<<count<<endl;
                char c6;
                cout << "\tEnter 'q' to quit or Any Other key to go to HomeScreen\n";
                cin >> c6;

                if(c6 == 'q'|| c6 == 'Q')
                    exit(EXIT_FAILURE);
                else
                    goto start;
            }
    }
}
