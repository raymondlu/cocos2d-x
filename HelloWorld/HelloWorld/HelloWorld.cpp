#include "HelloWorld.h"

HelloWorld::HelloWorld()
{
    CCTextureCache * pTexCache = CCTextureCache::sharedTextureCache();

    m_pHSprite = HelloSprite::CreateWithTexture(pTexCache->addImage("/NEWPLUS/TDA_DATA/UserData/HelloWorld.png"));
    m_pHSprite->setPosition(CGPointMake(60.0f, 240.0f));
    addChild(m_pHSprite);
    m_pHSprite->retain();
}

HelloWorld::~HelloWorld()
{
}
