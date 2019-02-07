#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    Tree.load("Images/tree1.png"); // Loads main Tree image
    
    Feather.load("Images/feather.png"); //Loads feather mouse
    
    Bird1.load("Images/bird1.png"); //Loads bird
    
    Welcome.load("Fonts/wood_sticks.ttf", 25); // Loads Texts for titles, the number is the font size
    
    Search.load("Fonts/wood_sticks.ttf", 15); // Search text font
    
    leaf1.load("Images/leaf.png"); //Twitter responces will be displayed over these images
    
    seed1.load("Images/seed.png"); //User can click on one of the seeds to search a category
    
    exit1.load("Images/exit.png"); //Exit icon for the user to leave the program
    
    //music change setup---------
    if(music){
    Day.load("Audio/Day.mp3"); //Audio for Track 1
    Day.setVolume(0.5); //volume set for Track 1
    Day.play(); //Plays audio for Track 1
    Day.setLoop(true);
    }
    
    else{
    Night1.setVolume(0.3); //volume set for Track 2
    Night1.load("Audio/Night1.mp3"); //Audio for Track 2
    Night1.play(); //Plays audio for Track 2
    Night1.setLoop(true);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
   
    if(night){// when the user presses x again they can change the interface from night to day again
    
    //Background gradient for night
    ofColor nightTop (21, 99, 99);
    ofColor nightBottom (55, 57, 46);
    ofBackgroundGradient(nightTop, nightBottom, OF_GRADIENT_LINEAR); //blends the two colours
        
        //when pressing x the user change the interface from day to night mode
        
    }
        else{
            ofBackground(40, 175, 176); // base background colour
            
            //Background gradient to day
            ofColor dayTop (238, 229, 229);
            ofColor dayBottom (40, 175, 176);
            ofBackgroundGradient(dayTop, dayBottom, OF_GRADIENT_LINEAR); //blends the two colours
        }
    //Draws main tree-------
    Tree.draw (ofGetWidth()/2 -300, ofGetHeight()/2 -300, 600, 600); //draws tree
    
    //Bird image--------
    Bird1.draw(430, 250, 50, 50); // Draws bird
    
    //Top 5 tweets to be displayed ontop of each leaf
    
    leaf1.draw(790, 0, 230, 200); //Draws leafs to display responses - leaf 1
    leaf1.draw(790, 125, 230, 200); //Draws leafs to display responses - leaf 2
    leaf1.draw(790, 250, 230, 200); //Draws leafs to display responses - leaf 3
    leaf1.draw(790, 375, 230, 200); //Draws leafs to display responses - leaf 4
    leaf1.draw(790, 500, 230, 200); //Draws leafs to display responses - leaf 5
    
    //Seeds represent a search option for the user
    seed1.draw (700, 450, 50, 100); //This draws the seed that will display the search option - Money
    seed1.draw (300, 450, 50, 100); //This draws the seed that will display the search option - Politics
    seed1.draw (300, 550, 50, 100); //This draws the seed that will display the search option - Paris
    seed1.draw (350, 600, 50, 100); //This draws the seed that will display the search option - Dreamworks
    seed1.draw (400, 575, 50, 100); //This draws the seed that will display the search option - Uber
    seed1.draw (490, 620, 50, 100); //This draws the seed that will display the search option - Trends
    seed1.draw (575, 580, 50, 100); //This draws the seed that will display the search option - President
    seed1.draw (635, 590, 50, 100); //This draws the seed that will display the search option - Celebrity
    seed1.draw (675, 525, 50, 100); //This draws the seed that will display the search option - Apple
    
    //ofSetColor(25, 100, 126); //colour of search bar (#19647e)
    ofDrawRectRounded(30, 260, 200, 300, 20); // search box dimentions and roundness of edges
    
    //Exit icon-----------
    exit1.draw (10, 600, 100, 100);
    
    // Cursor icon--------
    Feather.draw (ofGetMouseX()-10, ofGetMouseY()-75, 75, 75); //draws feather used as a mouse icon
    
    //Fonts installed seperately from 'DaFont.com'------
    Welcome.drawString("Welcome to Tweet Twoo!", 310, 160); //welcome title
    
    Search.drawString("Search...", 40, 250); //search bar text
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
   
    // onKeyPressed
    //Background Change--------
    if(key == 120) // the button X will change the settings from day to night mode
    {
        if(night)
        {
            night = false;
        }
        else
        {
            night = true;
        }
    }
    
    //Music Change--------------
    
    if(key == 112) // the button P will change the audio track
    {
        if(music)
        {
            music = false;
        }
        else
        {
            music = true;
        }
    }
    
}
