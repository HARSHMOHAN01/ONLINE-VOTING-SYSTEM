#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    cout<<" ||======================================================================================================||"<<'\n';
    cout<<" ||                                                                                                      ||"<<'\n';
    cout<<" ||                                                                                                      ||"<<'\n';
    cout<<" ||  ***                                 ***     **************     *****************    **************  ||"<<'\n';
    cout<<" ||    ***                             ***       **          **            **            **              ||"<<'\n';
    cout<<" ||      ***                         ***         **          **            **            **              ||"<<'\n';
    cout<<" ||        ***                     ***           **          **            **            **              ||"<<'\n';
    cout<<" ||          ***                 ***             **          **            **            **************  ||"<<'\n';
    cout<<" ||            ***             ***               **          **            **            **              ||"<<'\n';
    cout<<" ||              ***         ***                 **          **            **            **              ||"<<'\n';
    cout<<" ||                ***     ***                   **          **            **            **              ||"<<'\n';
    cout<<" ||                  ******                      **************            **            **************  ||"<<'\n';
    cout<<" ||                                                                                                      ||"<<'\n';
    cout<<" ||                                                                                                      ||"<<'\n';
    cout<<" ||======================================================================================================||"<<'\n';
    int times,ac,age,count;
    string name,epic,sc;
    cout<<"ENTER THE NUMBER OF PEOPLE WHO WANTS TO VOTE : ";
    cin>>times;
    for(int i=0;i<times;i++)
    {
        cout<<endl;
        cout<<"ENTER YOUR NAME : ";
        cin>>name;
        cout<<endl;
        cout<<"ENTER YOUR ELECTORAL PHOTO IDENTITY CARD : ";
        cin>>epic;
        cout<<endl;
        cout<<"ENTER YOUR AADHAR CARD NUMBER : ";
        cin>>ac;
        cout<<endl;
        cout<<"ENTER YOUR AGE : ";
        cin>>age;
        cout<<endl;
        cout<<"CHOOSE YOUR POLITICAL PARTY FROM BELOW LIST AND VOTE WITH "<<endl;
        cout<<" ||=====================================================================================================================||"<<'\n';
        cout<<" ||                             ||                                            ||                                        ||"<<'\n';
        cout<<" ||        SERIAL NUMBER        ||            POLITICAL PARTY NAME            ||              SPECIAL CODE              ||"<<'\n';
        cout<<" ||                             ||                                            ||                                        ||"<<'\n';
        cout<<" ||              1              ||            BHARTIYA JANTA PARTY            ||                     A                  ||"<<'\n';
        cout<<" ||                             ||                                            ||                                        ||"<<'\n';
        cout<<" ||              2              ||           INDIAN NATIONAL CONGRESS         ||                     B                  ||"<<'\n';
        cout<<" ||                             ||                                            ||                                        ||"<<'\n';
        cout<<" ||              3              ||                   CPI(M)                   ||                     C                  ||"<<'\n';
        cout<<" ||                             ||                                            ||                                        ||"<<'\n';
        cout<<" ||              4              ||               AAM AADMI PARTY              ||                     D                  ||"<<'\n';
        cout<<" ||                             ||                                            ||                                        ||"<<'\n';
        cout<<" ||              5              ||             BAHUJAN SAMJ PARTY             ||                     E                  ||"<<'\n';
        cout<<" ||                             ||                                            ||                                        ||"<<'\n';
        cout<<" ||              6              ||            NATIONAL PEOPLE PARTY           ||                     F                  ||"<<'\n';
        cout<<" ||                             ||                                            ||                                        ||"<<'\n';
        cout<<" ||=====================================================================================================================||"<<'\n';
        cout<<endl;
        cout<<"ENTER YOUR VOTE BY PRESSING THE SPECIAL CODE : ";
        cin>>sc;
        if(sc=="A")
        {
            cout<<"THANK YOU FOR GIVING YOUR VOTE TO BHARTIYA JANTA PARTY ";
        }
        else if(sc=="B")
        {
            cout<<"THANK YOU FOR GIVING YOUR VOTE TO INDIAN NATIONAL CONGRESS ";
        }
        else if(sc=="C")
        {
            cout<<"THANK YOU FOR GIVING YOUR VOTE TO COMMUNIST PARTY OF INDIA MARXIST ";
        }
        else if(sc=="D")
        {
            cout<<"THANK YOU FOR GIVING YOUR VOTE TO AAM AADMI PARTY ";
        }
         else if(sc=="E")
         {
            cout<<"THANK YOU FOR GIVING YOUR VOTE TO BAHUJAN SAMAJ PARTY ";
         }
         else if(sc=="F")
         {
            cout<<"THANK YOU FOR GIVING YOUR VOTE TO NATIONAL PEOPLE PARTY ";
         }
         ofstream myfile("vote.txt",ios::app);
         myfile<<"*******************************************************************************************"<<endl;
         myfile<<"------------------------------ELECTION COMMISION OF INDIA----------------------------------"<<endl;
         myfile<<"              *************************VOTER SLIP*****************************             "<<endl;
         myfile<<"                               **************************"<<endl;
         myfile<<"                                          *****"<<endl;
         myfile<<"NAME OF VOTER : "<<name<<endl;
         myfile<<"ELECTROAL PHOTO IDENTITY CARD OF VOTER : "<<epic<<endl;
         myfile<<"AADHAR CARD NUMBER OF VOTER : "<<ac<<endl;
         myfile<<"AGE OF VOTER : "<<age<<endl;
         myfile<<"**all above information is fake and does not affect election through any means ";
         cout<<'\n';
         cout<<'\n';
         myfile.close();
         cout<<" VOTER'S DETAIL IS NOTED IN SEPRATE FILE ";
    }
    return 0;
}