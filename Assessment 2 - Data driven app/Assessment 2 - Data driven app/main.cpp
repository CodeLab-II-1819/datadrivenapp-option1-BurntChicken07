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
    
    string currentTweets;
    int totalTweets = 0;
    
    ifstream tweets;
    
    //------ Opening and counting the tweets
    
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
    
    //------------------ Searching and counting for money
    
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
    
    //------------------ Searching and counting for Politics
    
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
    
    //------------------ Searching and counting for Paris
    
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
    
    //------------------ Searching and counting for DreamWorks
    
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
    
    //------------------ Searching and counting for Uber
    
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
    
    return 0;
        
}

