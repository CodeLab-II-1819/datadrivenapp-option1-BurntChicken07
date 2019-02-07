//
//  main.cpp
//  Assessment 2 - Data driven app
//
//  Created by Clarke Williams on 11/12/2018.
//  Copyright © 2018 Clarke Williams. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;


int main() {
    
    int input = 0;
    
    cout << "Welcome to Tweet Twoo" << endl;
    cout << "Please look at the menu below" << endl << endl;
    
    cout << "Enter 0 to search for a keyword" << endl;
    
    cout << "Enter 1 to count tweets" << endl;
    
    cout << "Enter 2 to count tweets mentioning money" << endl;
    
    cout << "Enter 3 to count tweets mentioning politics" << endl;
    
    cout << "Enter 4 to count tweets mentioning Paris" << endl;
    
    cout << "Enter 5 to count tweets mentioning Dreamworks" << endl;

    cout << "Enter 6 to count tweets mentioning Uber" << endl;

    cout << "Enter 7 to count tweets mentioning Trends" << endl;
 
    cout << "Enter 8 to count tweets mentioning President" << endl;
    
    cout << "Enter 9 to count tweets mentioning Celebrity" << endl;

    cout << "Enter 10 to count tweets mentioning Apple" << endl;
    cin >> input;
    
    string currentTweets;
    int totalTweets = 0;
    string search;
    
    
    ifstream tweets;
    
    if (input == 0){
        
        cout << "Please enter your search word" << endl;
        cin >> search;
        
        tweets.open("sampleTweets.csv"); // opens the sample tweetstweets.open("sampleTweets.csv"); // opens the sample tweets
        if(tweets.good()){ // checks to see if the file has opened
            
            while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
                getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
                
                if (currentTweets.find(search)<=currentTweets.length()){ // if the word searched for is found before the length of the tweet do this
                    cout << currentTweets << endl;
                    
                }
            }
            
        }else {
            cout << "The files havent opened" << endl; // prints if the files havent opened
        }
        tweets.close(); // closes the file
        
    }
    
    //------ Opening and counting the tweets
    
    else if (input == 1){
    
    tweets.open("sampleTweets.csv"); // opens the sample tweets
    if(tweets.good()){ // checks to see if the file has opened
        cout << "Files open successfully" << endl; // prints if it has opened successfully
    
        while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
            getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
            cout << currentTweets << endl; // prints the tweets held
            totalTweets++; // counts
        }
        cout <<"The total number of tweets are: " << totalTweets << endl;
        
    }else {
        cout << "The files havent opened" << endl; // prints if the files havent opened
    }
    tweets.close(); // closes the file
        
    }
    
    //------------------ Searching and counting for money

    else if (input == 2){
        
    tweets.open("sampleTweets.csv"); // opens the sample tweets
    if(tweets.good()){ // checks to see if the file has opened
        
        while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
            getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
            
            if (currentTweets.find("money")<=currentTweets.length()){ // if the word 'money' is found before the length of the tweet do this
                cout << currentTweets << endl;
                
            }
            

        }
        
    }else {
        cout << "The files havent opened" << endl; // prints if the files havent opened
    }
    tweets.close(); // closes the file
    
    }
    //------------------ Searching and counting for Politics

    else if (input == 3){
        
    tweets.open("sampleTweets.csv"); // opens the sample tweets
    if(tweets.good()){ // checks to see if the file has opened
        
        while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
            getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
            
            if (currentTweets.find("Politics")<=currentTweets.length()){ // if the word 'Politics' is found before the length of the tweet do this
                cout << currentTweets << endl;
                
            }
            
            
        }
        
    }else {
        cout << "The files havent opened" << endl; // prints if the files havent opened
    }
    tweets.close(); // closes the file
    }
    
    //------------------ Searching and counting for Paris

    else if (input == 4){
    
    tweets.open("sampleTweets.csv"); // opens the sample tweets
    if(tweets.good()){ // checks to see if the file has opened
        
        while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
            getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
            
            if (currentTweets.find("Paris")<=currentTweets.length()){ // if the word 'Paris' is found before the length of the tweet do this
                cout << currentTweets << endl;
                
            }
            
            
        }
        
    }else {
        cout << "The files havent opened" << endl; // prints if the files havent opened
    }
    tweets.close(); // closes the file
    
    }
    
    //------------------ Searching and counting for DreamWorks

    else if (input == 5){
        
    tweets.open("sampleTweets.csv"); // opens the sample tweets
    if(tweets.good()){ // checks to see if the file has opened
        
        while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
            getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
            
            if (currentTweets.find("DreamWorks")<=currentTweets.length()){ // if the word 'DreamWorks' is found before the length of the tweet do this
                cout << currentTweets << endl;
                
            }
            
            
        }
        
    }else {
        cout << "The files havent opened" << endl; // prints if the files havent opened
    }
    tweets.close(); // closes the file
        
    }
    
    //------------------ Searching and counting for Uber

    else if (input == 6){
        
    tweets.open("sampleTweets.csv"); // opens the sample tweets
    if(tweets.good()){ // checks to see if the file has opened
        
        while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
            getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
            
            if (currentTweets.find("Uber")<=currentTweets.length()){ // if the word 'Uber' is found before the length of the tweet do this
                cout << currentTweets << endl;
                
            }
            
            
        }
        
    }else {
        cout << "The files havent opened" << endl; // prints if the files havent opened
    }
    tweets.close(); // closes the file
    
    }
    //------------------ Searching and counting for Trends

    else if (input == 7){
        
    tweets.open("sampleTweets.csv"); // opens the sample tweets
    if(tweets.good()){ // checks to see if the file has opened
        
        while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
            getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
            
            if (currentTweets.find("Trends")<=currentTweets.length()){ // if the word 'Trends' is found before the length of the tweet do this
                cout << currentTweets << endl;
                
            }
            
            
        }
        
    }else {
        cout << "The files havent opened" << endl; // prints if the files havent opened
    }
    tweets.close(); // closes the file
        
    }
    
    //------------------ Searching and counting for President

    else if (input == 8){
        
    tweets.open("sampleTweets.csv"); // opens the sample tweets
    if(tweets.good()){ // checks to see if the file has opened
        
        while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
            getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
            
            if (currentTweets.find("President")<=currentTweets.length()){ // if the word 'President' is found before the length of the tweet do this
                cout << currentTweets << endl;
                
            }
            
            
        }
        
    }else {
        cout << "The files havent opened" << endl; // prints if the files havent opened
    }
    tweets.close(); // closes the file
        
    }
    
    //------------------ Searching and counting for Celebrity

    else if (input == 9){
        
    tweets.open("sampleTweets.csv"); // opens the sample tweets
    if(tweets.good()){ // checks to see if the file has opened
        
        while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
            getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
            
            if (currentTweets.find("Celebrity")<=currentTweets.length()){ // if the word 'Celebrity' is found before the length of the tweet do this
                cout << currentTweets << endl;
                
            }
            
            
        }
        
    }else {
        cout << "The files havent opened" << endl; // prints if the files havent opened
    }
    tweets.close(); // closes the file
    
    }
        
    //------------------ Searching and counting for Apple

    else if (input == 10){
        
    tweets.open("sampleTweets.csv"); // opens the sample tweets
    if(tweets.good()){ // checks to see if the file has opened
        
        while(!tweets.eof()){ // while the program is at the end of the file (eof), do this loop
            getline(tweets, currentTweets); // goes through each 63,693 tweets, get 1 line per run through, saves the line to this variable called 'currentTweets'
            
            if (currentTweets.find("Apple")<=currentTweets.length()){ // if the word 'Apple ' is found before the length of the tweet do this
                cout << currentTweets << endl;
                
            }
            
            
        }
        
    }else {
        cout << "The files havent opened" << endl; // prints if the files havent opened
    }
    tweets.close(); // closes the file
    
    }
        
    return 0;
        
}
