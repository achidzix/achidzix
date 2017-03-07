#include<iostream>
#include <ctime>
#include<string>
#include<vector>
using namespace std;

char name[100];
string RegNum;
int dprt;
int number;
int prog;
char choice;
int days;

class Library
{
  public :
  	
 void books();	
void student_details();	
void ShowDetails();
};

void Library::books()
{
	cout<<"select program"<<endl;
	cout<<"1\t\t"<<"biotech"<<endl;
	cout<<"2\t\t"<<"food processing and technology(fpt)"<<endl;
	cout<<"3\t\t"<<"software engineering(se)"<<endl;
	cout<<"4\t\t"<<"phamacy"<<endl;
	cout<<"5\t\t"<<"information security(isa)"<<endl;
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
            cout<<endl;
            cout<<"enter number of days for borrowing:"<<endl;
            cin>>days;				
			
	    }
	    break;
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
            cout<<endl;
            cout<<"enter number of days for borrowing:"<<endl;
            cin>>days;				
		}
		break;
			
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
	cout<<endl;		
	cout<<"enter number of days for borrowing:"<<endl;
    cin>>days;	
			
	}
	break;
	
    case 4:
    				{
						    vector<string> my_strings;
	    
	my_strings.push_back("pharmacognosy and natural products");
	my_strings.push_back("human physiology 1");
	my_strings.push_back("biochemistry");
	my_strings.push_back("pharmacentical formulations technology ");
    my_strings.push_back("general microbiology and immunology");
    my_strings.push_back("introduction to pharmacy");
    
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
	cout<<endl;		
	cout<<"enter number of days for borrowing:"<<endl;
    cin>>days;	
			
	}
	break;
	
	case 5:
					{
						    vector<string> my_strings;
	    
	my_strings.push_back("introduction of information security");
	my_strings.push_back("number theory");
	my_strings.push_back("fundamentals of computer architecture");
	my_strings.push_back("operating system");
    my_strings.push_back("programming technics(python)");
    my_strings.push_back("visual programming");
    
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
	cout<<endl;		
	cout<<"enter number of days for borrowing:"<<endl;
    cin>>days;	
			
	}
	break;
    	
    defualt :
    cout<<"program not avaliable"<<endl;
    books();	
 }

}
	
void Library::student_details()
{
	cout<<"enter name"<<endl;
	cin >>name;
	
	cout<<"enter department id"<<endl;
	cout<<"department id\t\t\t"<<"department"<<endl;
	
	cout<<"1\t\t\t"<<"biotech"<<endl;
	cout<<"2\t\t\t"<<"food processing and technology"<<endl;
	cout<<"3\t\t\t"<<"software engineering"<<endl;	
	cout<<"4\t\t\t"<<"information technology"<<endl;
	cout<<"5\t\t\t"<<"phamacy"<<endl;
	cout<<"6\t\t\t"<<"information sercurity"<<endl;	
	cin>>dprt;
	if(dprt<=5)
	{
	cout<<"enter registration number"<<endl; 
	cin>>RegNum;
	if(RegNum.length()!=4)
	{
	cout<<"USE 4 CHARACTERS!"<<endl;
	cout<<endl;
	student_details();
	}		
	}
    else
    {
    cout<<"department not available in the batadase"<<endl;
	student_details();    	
	}		
}

void Library::ShowDetails()
{
	cout<<"__________________________________________________________________________________________________________________"<<endl;
	cout<<"name\t\t"<<"registration number\t\t"<<"department\t\t"<<"days for borrow\t\t"<<"borrowed book id"<<endl;
	cout<<name<<"\t\t"<<RegNum<<"\t\t\t\t"<<dprt<<"\t\t\t"<<days<<"\t\t\t\t"<<number<<endl;
	cout<<"__________________________________________________________________________________________________________________"<<endl;
	time_t tommorrow = time(0);
	char *dt = ctime(&tommorrow);
	cout<<"the time now is :"<<dt<<endl;
	cout<<"return book in "<<days<<" days or you will be funded $2 per day after due date! "<<endl;
}

int main()
{
	cout<<"LIBRARY SYSTEM"<<endl;
Library lib_rec;
lib_rec.books();
lib_rec.student_details();
lib_rec.ShowDetails();
cout<<endl;	
cout<<"do you want to enter more details : y/n"<<endl;
cin>>choice;
if(choice=='y')
{
	main();
}
else
cout<<"thank you for using Anesu Library System"<<endl;
 
system("pause");
return 0;	
} 
//made by Anesu Chidziwo #Achidzix
