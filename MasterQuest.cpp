/*Logical Operators, !, && and ||, are used for creating expressions of falsity and/or truth. && and || are conditional operators, which designates that if
 one statement is true, the other one must be true (for '&&'), and only one of the two statements can be true (for '||'). '!' designates falsity.*/

#include <iostream>
#include <string>
#define newl '\n'
#define ind '\t'
#include <cmath>

using namespace std;

int main()
{string username;
    string password;
    string name;
    string lname;
    
    cout << ind << ind << ind << ind;
    cout << "MASTERQUEST" << endl;
    cout << newl;
    
    do
    {cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;
        cout << newl;
        if(username == "Alex.Marvick" && password == "alexmarvick") //If the username is Alex.Marvick AND the password is alexmarvick, the statements will work.
        {cout << "Login Successful. Hello Alex!" << endl;
            cout << newl;
            name = "Alex";
            lname = "Marvick";
            break;}
        
        else if(username == "Nick.Blackbourn" && password == "nickblackbourn" || username == "Nickblackbo" && password == "nblackbo") //Can use multiple!
        {cout << "Login Successful. Hello Nick!" << endl;
            cout << newl;
            name = "Nick";
            lname = "Blackbourn";
            break;}
        
        else if(username == "Michael.Marvick" && password == "michaelmarvick")
        {cout << "Login Successful. Hello Michael!" << endl;
            cout << newl;
            name = "Michael";
            lname = "Marvick";
            break;}
        
        else if(username == "Lorenzo.Juarez" && password == "lorenzojuarez")
	  	 	  {cout << "Login Successful. Hello Lorenzo!" << endl;
                  cout << newl;
                  name = "Lorenzo";
                  lname = "Juarez";
                  break;}
        
        else if(username == "Zack.Jankelson" && password == "zackjankelson")
	  	 	  {cout << "Login Successful. Hello Zack!" << endl;
                  cout << newl;
                  name = "Zack";
                  lname = "Jankelson";
                  break;}
        
        else if(username == "Ryan.Sheridan" && password == "ryansheridan")
	  	 	  {cout << "Login Successful. Hello Ryan!" << endl;
                  cout << newl;
                  name = "Ryan";
                  lname = "Sheridan";
                  break;}
        
        else if(username == "guest" || password == "guest")
        {cout << "Hello Guest!" << endl;
            cout << newl;
            name = "guest";
            break;}
        
        else //Otherwise, you are prompted to re-enter your username and password..
        {cout << "Incorrect username and password combination. Please try again." << endl;
            cout << "Remember, usernames and passwords are case sensitive." << endl;
            cout << newl;
            continue;}
        
    } while (!false); //While the loop is 'not false' (Practice with '!' operator, or the 'Logical NOT")
    
    int path, fight, jump, score;
    score = 0;
    bool truth;
    
    //PATH 1
    
    do
    {cout << "Which path would you like to go to? Left, Middle, or Right?" << endl;
        cout << newl;
        cout << "1. Left" << endl;
        cout << "2. Middle" << endl;
        cout << "3. Right" << endl;
        cout << newl;
        cout << "Path (1/2/3): ";
        cin >> path;
        cout << newl;
        switch (path)
        {case 1: cout << "You're taking the left path. You're safe! (+50)" << endl;
                cout << newl;
                truth = true;
                score = score + 50;
                break;
            case 2: cout << "You're taking the middle path. Unfortunately, a demon with a gun blasted your\nass and you died... (-40)" << endl;
                cout << newl;
                score = score - 40;
                truth = true;
                break;
            case 3: cout << "You're taking the right path. You're safe! (+50)" << endl;
                cout << newl;
                truth = true;
                score = score + 50;
                break;
            default: cout << "You picked an invalid option. Try again. (-10)" << endl;
                cout << newl;
                score = score - 10;
                truth = false;
        }} while (!truth);
    
    //GOING LEFT ON PATH 1, ENCOUNTERING DEMON
    
    //DEMON 1
    
    do
    {if (path != 1)
    {break;}
        cout << "You have just encountered a weak demon. Do you decide to attack it, or run away?";
        cout << newl;
        cout << "1. Attack" << endl;
        cout << "2. Run" << endl;
        cout << newl;
        cout << "Option (1/2): ";
        cin >> fight;
        cout << newl;
        switch (fight)
        {case 1: cout << "You attack it and you defeated it! Congratulations! (+100)" << endl;
                truth = true;
                score = score + 100;
                cout << newl;
                break;
            case 2: cout << "You ran away, unfortunately you tripped and got blown up by the demon... (-30)" << endl;
                cout << newl;
                score = score - 30;
                truth = true;
                break;
            default: cout << "You picked an invalid option. Try again. (-10)" << endl;
                cout << newl;
                score = score - 10;
                truth = false;
        }} while (!truth && path == 1);
    
    //GOING RIGHT ON PATH 1, ENCOUNTERING SINKHOLE
    
    //SINKHOLE 1
    
    do
    {if (path != 3)
    {break;}
        cout << "You encountered a sinkhole. Do you try to jump over it?" << endl;
        cout << newl;
        cout << "1. Jump" << endl;
        cout << "2. Do nothing" << endl;
        cout << newl;
        cout << "Option (1/2): ";
        cin >> jump;
        cout << newl;
        switch (jump)
        {case 1: cout << "You attempt to jump, and sink... ouch (-25)" << endl;
                cout << newl;
                score = score - 25;
                truth = true;
                break;
            case 2: cout << "You wait for a while, and the sinkhole disappears. You're free to continue!\n(+75)" << endl;
                cout << newl;
                truth = true;
                score = score + 75;
                break;
            default: cout << "You picked an invalid option. Try again. (-10)" << endl;
                score = score - 10;
                cout << newl;
                truth = false;
        }} while (!truth && path == 3); 
    
    
    cout << "Final score: " << score << endl;
    cout << newl;
    if(score < 0)
    {cout << "You scored NEGATIVE " << abs(score) << "? Are you freakin' kidding me, " << lname << "?" << endl;}
    else if (score == 150)	
    {cout << "You scored " << score << ", the highest possible score! Way to go, " << name << "!" << endl;}
    else if (score > 100)	 
    {cout << "You scored " << score << "! Nice job, " << name << "!" << endl;}
    else if (score > 50)
    {cout << "You scored " << score << "... Decent, but you can do better, " << name << "!" << endl;}
    else if (score > 0)	
    {cout << "You scored " << score << ", which is just over nothing... \nstep it up, " << lname << "!" << endl;}
    return 0;
}
