#include<iostream>
#include<string>
using namespace std;


//function declaration
int studentPanal();
int adminPanal();
int userPanal();
int electionYear();
int electionCandidates();
int electionResult();
int electionLogout();
int mainSystem();
int backToStart();
int takeElection();

// Goble variable
int option,roll_no,year;
const int maxCandidates=10000;//maxcandidates for vote
string candidates[maxCandidates];
int votes[maxCandidates];
int totalCandidates=0;

int main()
{
    mainSystem();
    return 0; 
}

// Student Panal
int studentPanal()
{
    int option;
    cout<<"YOUR IN STUDENT PANAL BOOT"<<endl;
    cout<<"1.View Election Year"<<endl<<"2.View Candidate"<<endl<<"3.Vote"<<endl<<"4.View Result"<<endl<<"5.Back to Main System"<<endl;
    cout<<"Enter the option: ";
    cin>>option;

    switch (option)
    {
    case 1:
        cout<<"Election Year :"<<year <<endl;
        break;
    case 2:
        cout<<"Candidate: ";
        for (int i=0;i<totalCandidates;i++)
		{
            cout<<candidates[i]<< " ";
        }
        break;
    case 3:
        electionResult();
        break;
    case 4:
        takeElection();
        break;
    case 5:
        backToStart();
        break;
    
    default:
    	cout<<"Invalid option"<<endl;
        break;
    }
    
    return 0;
}

int takeElection()
{
    string candidate;
    bool found=false;
    cout<<"Enter the candidate you want to vote for: ";
    cin>>candidate;
    
    //to cheak whether a candidate exists or not
    for (int i=0;i<totalCandidates;i++)
    {
        if(candidates[i]==candidate){
            votes[i]++;
            cout<<"Vote cast successfully for "<<candidate <<endl;
            found=true;
            break;
        }
        
    }
    if(!found)
	{
        cout<<"Candidate not found.Please enter the valid candidate"<<endl;
    }
    return 0;
}

// Admin Panal
int adminPanal(){
    int option;
    cout<<"ADMIN PANAL"<<endl;
    if (userPanal()==0)
    {
        cout<<"1:Election year"<<endl<<"2.Election Candited"<<endl<<"3.Result"<<endl<<"4.LogOut"<<endl<<endl<<"Enter the Option :"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
            electionYear();
            break;
        case 2:
            electionCandidates();
            break;
        case 3:
            electionResult();
            break;
        case 4:
            electionLogout();
            break;            
        default:
            cout<<"Enter the correct option.";
            break;
        }
    }
    return 0;
}

// username and password function
int userPanal(){
    string user,pass;
    string arr[2]={"admin","admin@123"};
    cout<<"Enter the username : ";
    cin>>user;
    if (arr[0]==user){
        cout<<"Enter the password: ";
        cin>>pass;
        if (arr[1]==pass)
        {
            cout<<"Login Successfully"<<endl;
            return 0;
        }
        
    }
    cout<<"Login Failer"<<endl;
    return -1;
}

//election year
int electionYear(){
    cout<<"Enter the election year : ";
    cin>>year;
    //cout<<"Enter the max roll no : ";
    //cin>>roll_no;
    electionCandidates();
    return 0;
}

//election candited
int electionCandidates(){
    cout<<"Enter total no. of candidates : ";
    cin>>totalCandidates;
    for(int i=0;i<totalCandidates;i++){
        cout<< "Enter the candided : ";
        //string candidate[maxCandidates]
        cin>> candidates[i];
        votes[i]=0;
    }
    return 0;
}

// Result
int electionResult(){
    cout<<"Displaying the election result..."<<endl;
    for(int i=0;i<=totalCandidates;i++){
        cout<<candidates[i] <<":"<<votes[i]<<"votes"<<endl;
    }
    return 0;
}

// Logout
int electionLogout(){
    cout<<"Logging out..."<<endl;
    return 0;
}

//Main System
int mainSystem(){
    while(1)
    {
        cout<<"VOTING SYSTEM"<<endl<<endl;
        cout<<"1:Student's Panal"<<endl<<"2:Admin Panal"<<endl<<"3:Exit"<<endl<<endl<<"Enter the option : ";
        cin>>option;
        switch (option)
        {
        case 1:
        /* code */
            studentPanal();
            break;
        case 2:
        /* code */
            adminPanal();
            break;
        case 3:
        /* code */
            cout<<"Your out of system."<<endl;
            break;    
        default:
            cout<<"Enter correct option from above."<<endl;
            break;
    }
        
    }
    
    return 0;
}

//back function
int backToStart(){
    mainSystem();
    cout<<"You have successfully enter the main system!......"<<endl;     
    return 0;
}


