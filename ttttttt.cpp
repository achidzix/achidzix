#include<iostream>
#include<string>
#include<vector>
using namespace std;
char name[100];
string RegNum;
char dprt[50];
int number;
int prog;
char choice;

class Library
{
  public :
 void books();	
void student_details();	
void ShowDetails();
void time();
};
void Library::books()
{
	cout<<"select program"<<endl;
	cout<<"1\t\t"<<"biotech"<<endl;
	cout<<"2\t\t"<<"food processing and technology(fpt)"<<endl;
	cout<<"3\t\t"<<"software engineering(se)"<<endl;
	cout<<"USE THE NUMBERS TO SELECT FOR THE PROGRAM"<<endl;
	
	cin>>prog;
	switch (prog)
	{
		case 1:
		{
		      vector<string> my_strings;
	    
         	my_strings.push_back("fundamental of thermodynamics ");
	        my_strings.push_back("advanced mathmetics for engineers");
	        my_strings.push_back("introduction to micro biology");
	        my_strings.push_back("cell separation and disruption");
            my_strings.push_back("fundamentals of biochemistry");
            my_strings.push_back("adavanced micro biology");
    
            cout <<"books available for borrow are :"<< endl;
            cout <<endl;
    
            cout <<"book id\t\t\t\t"<<"book name"<<endl;
    
            cout <<"1"<<"\t\t\t\t "<<  my_strings[0] << endl;
            cout <<"2"<<"\t\t\t\t "<<  my_strings[1] << endl;
            cout <<"3"<<"\t\t\t\t "<<  my_strings[2] << endl;
            cout <<"4"<<"\t\t\t\t "<<  my_strings[3] << endl;
            cout <<"5"<<"\t\t\t\t "<<  my_strings[4] << endl;
            cout <<"6"<<"\t\t\t\t "<<  my_strings[5] << endl;
            cout<<endl; 
	   
            cout<<"wnich book do you want: "<<"\tUSE BOOK ID"<<endl;
            cin>>number;
            cout<<"book borrowed :"<<my_strings[number-1] << endl;	
				break;
	}
		case 2:
	 {
		   
	        vector<string> my_strings;
	    
	        my_strings.push_back("advanced organic chemistry");
	        my_strings.push_back("intro to food processing ");
	        my_strings.push_back("introduction to computer science");
	        my_strings.push_back("drawing and graphics ");
            my_strings.push_back("micro biology");
            my_strings.push_back("mathematics for engineers");
    
            cout <<"books available for borrow are :"<< endl;
            cout <<endl;
    
            cout <<"book id\t\t\t\t"<<"book name"<<endl;
    
            cout <<"1"<<"\t\t\t\t "<<  my_strings[0] << endl;
            cout <<"2"<<"\t\t\t\t "<<  my_strings[1] << endl;
            cout <<"3"<<"\t\t\t\t "<<  my_strings[2] << endl;
            cout <<"4"<<"\t\t\t\t "<<  my_strings[3] << endl;
            cout <<"5"<<"\t\t\t\t "<<  my_strings[4] << endl;
            cout <<"6"<<"\t\t\t\t "<<  my_strings[5] << endl;
            cout<<endl; 
	   
            cout<<"wnich book do you want: "<<"\tUSE BOOK ID"<<endl;
            cin>>number;
            cout<<"book borrowed :"<<my_strings[number-1] << endl;	
		}	break;
			
		case 3:
			{
						    vector<string> my_strings;
	    
	my_strings.push_back("c++ programming");
	my_strings.push_back("object oriented programming in c++");
	my_strings.push_back("database design and concept");
	my_strings.push_back("discrete structures ");
    my_strings.push_back("data structures and algorithms");
    my_strings.push_back("web design concept");
    
    cout <<"books available for borrow are :"<< endl;
    cout <<endl;
    
    cout <<"book id\t\t\t\t"<<"book name"<<endl;
    
    cout <<"1"<<"\t\t\t\t "<<  my_strings[0] << endl;
    cout <<"2"<<"\t\t\t\t "<<  my_strings[1] << endl;
    cout <<"3"<<"\t\t\t\t "<<  my_strings[2] << endl;
    cout <<"4"<<"\t\t\t\t "<<  my_strings[3] << endl;
    cout <<"5"<<"\t\t\t\t "<<  my_strings[4] << endl;
    cout <<"6"<<"\t\t\t\t "<<  my_strings[5] << endl;
    cout<<endl; 
	   
    cout<<"wnich book do you want: "<<"\tUSE BOOK ID"<<endl;
    cin>>number;
    cout<<"book borrowed :"<<my_strings[number-1] << endl;	
		
			
	}		break;

    defualt :
    	cout<<"program not avaliable"<<endl;
    	
 }

}
	

void Library::student_details()
{
	cout<<"enter name"<<endl;
	cin >>name;
	cout<<"enter registration number"<<endl; 
	cin>>RegNum;
	cout<<"enter department"<<endl;
	cin>>dprt;
}

void Library::ShowDetails()
{
	cout<<"name\t\t"<<"registration number\t\t"<<"department\t\t"<<"borrowed book id"<<endl;
	cout<<name<<"\t\t"<<RegNum<<"\t\t\t\t"<<dprt<<"\t\t\t"<<number<<endl;
}
void Library::time()
{
	
}


int main()
{
	cout<<"LIBRARY SYSTEM"<<endl;
Library lib_rec;
lib_rec.books();
lib_rec.student_details();
lib_rec.ShowDetails();	
cout<<"do you want to enter more details : y/n"<<endl;
cin>>choice;
if(choice=='y')
{
	main();
}
else
system("pause");
return 0;	
} 
