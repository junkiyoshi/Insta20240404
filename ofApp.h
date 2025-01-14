#pragma once
#include "ofMain.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key) {};
	void keyReleased(int key) {};
	void mouseMoved(int x, int y) {};
	void mouseDragged(int x, int y, int button) {};
	void mousePressed(int x, int y, int button) {};
	void mouseReleased(int x, int y, int button) {};
	void windowResized(int w, int h) {};
	void dragEvent(ofDragInfo dragInfo) {};
	void gotMessage(ofMessage msg) {};

	glm::vec2 make_point(float theta);

	vector<glm::vec2> location_list;
	vector<glm::vec2> velocity_list;
	vector<float> size_list;
	vector<float> speed_list;
	vector<float> max_size_list;
	vector<float> deg_list;
	vector<ofColor> color_list;
};