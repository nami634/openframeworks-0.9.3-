#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sender.setup(HOST, PORT);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    ofSetColor(255);
    ofDrawCircle(mouseX, mouseY, 10);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    ofxOscMessage m;
    m.setAddress("/mouse/position");
    m.addIntArg(x);
    m.addIntArg(y);
    sender.sendMessage(m);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    ofxOscMessage m;
    m.setAddress("/mouse/pressed");
    m.addStringArg("down");
    sender.sendMessage(m);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    ofxOscMessage m;
    m.setAddress("/mouse/pressed");
    m.addStringArg("up");
    sender.sendMessage(m);
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
