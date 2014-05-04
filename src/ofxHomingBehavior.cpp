#include "ofxHomingBehavior.h"
#include "ofxRParticle.h"

ofxHomingBehavior::ofxHomingBehavior() : ofxBehavior()
{
    setup(); 
}

ofxHomingBehavior::~ofxHomingBehavior()
{
    
}

void ofxHomingBehavior::setup()
{
    
}

void ofxHomingBehavior::actUpon(ofxRParticle *particle, ofVec3f &pos, ofVec3f &vel, ofVec3f &acc, float dt)
{
    acc+=(particle->getHome()-pos)*(*magnitude)*dt;
}
