#pragma once

#include "ofxBehavior.h"

class ofxBoundaryBehavior : public ofxBehavior
{
public:
    ofxBoundaryBehavior();
    virtual ~ofxBoundaryBehavior();
    void setup();
    virtual void actUpon(ofxRParticle *particle, ofVec3f &pos, ofVec3f &vel, ofVec3f &acc, float dt);
    virtual void setBoundary(float _xMin, float _xMax, float _yMin, float _yMax, float _zMin = 0, float _zMax = 0);
    float xMin, xMax, yMin, yMax, zMin, zMax;    
};
