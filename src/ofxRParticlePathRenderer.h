#pragma once

#include "ofxRParticleRenderer.h"

class ofxRParticlePathRenderer : public ofxRParticleRenderer
{
public:
    ofxRParticlePathRenderer();
    ~ofxRParticlePathRenderer();
    
    void setup();
    void draw();
    
    void setLineWidth(float _lineWidth);
    float* getLineWidthPtr();
    void setLineWidthPtr(float *_lineWidth);
    float getLineWidth();
    
    bool bAllocatedLineWidth; 
    float *lineWidth;
};