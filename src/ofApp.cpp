#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    Sender.setup(HOST,PORT);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    //現在のマウスの位置を円に描画
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

    ofxOscMessage m;//OSCメッセージの準備
    m.setAddress("/mouse/position");//OSCアドレスの設定
    m.addIntArg(x);//OSC引数として、現在のマウスのx座標を追加
    m.addIntArg(y);//OSC引数として、現在のマウスのy座標を追加
    Sender.sendMessage(m);//メッセージを送信
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    ofxOscMessage m;
    m.setAddress("/mouse/button");
    m.addStringArg("down");
    Sender.sendMessage(m);

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    ofxOscMessage m;
    m.setAddress("/mouse/button");
    m.addStringArg("up");
    Sender.sendMessage(m);

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
