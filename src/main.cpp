#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:

	//ofSetupOpenGL(1024,768,OF_WINDOW); // <-------- setup the GL context
	//ofRunApp(new ofApp());


	// custom windows setup.
	ofGLFWWindowSettings settings;
	//settings.iconified = true;
	settings.resizable = false;
	settings.setSize(1920, 1080);
	ofCreateWindow(settings);
	return ofRunApp(new ofApp);

}
