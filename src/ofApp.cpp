#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

void ofApp::drawACircle(int numberOfSteps, float radius, float centerX, float centerY) {
  float degreesPerFloat = TWO_PI / numberOfSteps;
  
  for(float theta = 0; theta <= TWO_PI; theta += degreesPerFloat) {
    ofSetColor(mouseX % 255, theta*40, mouseY % 255, 255);
    ofSetLineWidth(((float)mouseX) / 32.0);
    
    float thetaOffset = ((float) mouseY) / 50;
    
    float x1 = centerX + cos(thetaOffset + theta) * radius;
    float y1 = centerY + sin(thetaOffset + theta) * radius;
    
    float x2 = centerX + cos(thetaOffset + theta + degreesPerFloat) * radius;
    float y2 = centerY + sin(thetaOffset + theta + degreesPerFloat) * radius;
    
    ofDrawLine(x1, y1, x2, y2);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  
  int numberOfSteps = max(1, (mouseX-80) / 5);
  float radius = mouseY / 5;
  float centerX = mouseX;
  float centerY = mouseY;

  drawACircle(numberOfSteps, radius, centerX, centerY);
  
  
  float smallCircleRadius = 10;
  float smallCircleCenterToCenterDeltaTheta = mouseY == 0 ? 1 : (float)mouseY / 200.0;

  for(float theta = 0; theta < TWO_PI; theta += smallCircleCenterToCenterDeltaTheta) {
    float x = centerX + cos(theta) * radius;
    float y = centerY + sin(theta) * radius;
    
    drawACircle(numberOfSteps, smallCircleRadius, x, y);
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
