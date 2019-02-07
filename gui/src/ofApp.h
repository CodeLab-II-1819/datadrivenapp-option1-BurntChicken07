#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void keyPressed(int key);
    bool night = false;
    bool music = false;

    ofImage Tree; //Variable for the tree image file
    ofImage Feather; //Variable for feather mouse
    ofImage Bird1; //Bird logo
    ofImage leaf1; //Response
    ofImage seed1; //search categories
    ofImage exit1; //exit icon for the user to leave
    ofTrueTypeFont Welcome;
    ofTrueTypeFont Search;
    //ofTrueTypeFont myFont2;
    ofSoundPlayer Day; // Music track 1
    ofSoundPlayer Night1; //Music track 2
};
