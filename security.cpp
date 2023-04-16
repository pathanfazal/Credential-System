#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;

int main(){
    int a=0,i=0;
    string text, old, pass1, pass2, name, pass0, age, user,word, word1,age1;
    string creds[2], cp[2];
    

    do{
        cout<<"##############Security System##############\n"<<endl;
        cout<<"-------------------------------------------\n"<<endl;
        cout<<"|_____________1. Sign up___________________|\n"<<endl;
        cout<<"|_____________2. Log up____________________|\n"<<endl;
        cout<<"|_____________3. Change Password___________|\n"<<endl;
        cout<<"|_____________4. End Program_______________|\n"<<endl;
        cout<<endl<<endl;
        cout<<"Enter Your choice: ";
        cin>>a;
        switch (a)
        {
        case 1:{
            cout<<"____________________________________________\n"<<endl<<endl;
            cout<<"|-----------------Sign In-------------------|\n"<<endl;
            cout<<"|___________________________________________|\n"<<endl<<endl;
            cout<<"Please Enter Username:       ";
            cin>>name;
            cout<<"Please Enter Password:       ";
            cin>>pass0;
            cout<<"Please Age:      ";
            cin>>age;

            ofstream of1;
            of1.open("file.txt");
            if(of1.is_open()){
                of1<<name<<"\n";
                of1<<pass0;
                cout<<"\n\n----------------Registration Successful----------------\n"<<endl;
            }
            break;
        }
        case 2:{
            i=0;
            cout<<"_________________________________________________\n"<<endl<<endl;
            cout<<"|---------------------Login---------------------|\n"<<endl;
            cout<<"|_______________________________________________|\n"<<endl<<endl;

            ifstream of2;
            of2.open("file.txt");
            cout<<"Enter the username:      ";
            cin>>user;
            cout<<"Enter the Password:      ";
            cin>>pass0;
            if(of2.is_open())
            {
                
                {
                    while(getline(of2,text)){
                        istringstream iss(text);
                        iss>>word;
                        creds[i]=word;
                        i++;
                    }
                    if(user==creds[0] && pass0==creds[1])
                    {
                        cout<<"\n\n----------------Login Successful----------------\n\n";
                        cout<<endl<<endl;

                        cout<<"Details:     "<<endl;
                        cout<<"Username:    "+ name<<endl;
                        cout<<"Password:    "+pass0<<endl;
                        cout<<"Age:         "+ age<<endl;
                    }

                    else{
                        cout<<"\n\n";
                        cout<<"\n----------------Incorrect Credentials----------------\n"<<endl;
                        cout<<"|    1. Press 2 to Login             |\n";
                        cout<<"|    2. Press 3 to change password   |\n";
                        break;
                    }
                }
            }
            break;
        }
        case 3:{
            i=0;
            cout<<"\n-----------------Change password------------------\n"<<endl;
            ifstream of0;
            of0.open("file.txt");
            cout<<"Enter Old Password:      ";
            cin>>old;
            if(of0.is_open()){
                while(getline(of0,text)){
                    istringstream iss(text);
                    iss>>word1;
                    cp[i]=word1;
                    i++;
                }
                if(old==cp[1]){
                    of0.close();
                    ofstream of1;
                    if(of1.is_open()){
                        cout<<"Enter new password:     ";
                        cin>>pass1;
                        cout<<"Enter new password again:        ";
                        cin>>pass2;
                        cout<<"Enter your Age:      ";
                        cin>>age1;
                        if(age1!=age){
                            cout<<"\n\nEntered Age does Not Matched!!\n\n";
                            break;
                        }

                        if(pass1==pass2){

                            of1<<cp[0]<<"\n";
                            of1<<pass1;
                            cout<<"\n----------------Password Changed Successfully----------------\n"<<endl;
                        }
                        else{
                            of1<<cp[0]<<"\n";
                            of1<<old;
                            cout<<"\n*****************password do not Match*****************\n"<<endl;
                        }
                    }
                }
                else{
                    cout<<"Please Enter Valid Password!!\n";
                    break;
                }
            }
        }
        break;

        case 4:
        {
            cout<<"\n\n________________Thank you!!________________\n\n\n";
            break;
        }
        default:
        cout<<"Please Select from Above Given Options!!!\n";
            break;
        }
    }while(a!=4); 
}
