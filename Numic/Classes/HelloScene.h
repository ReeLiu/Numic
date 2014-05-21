#ifndef _HELLO_SCENE_H_
#define _HELLO_SCENE_H_

#include "allScene.h"

class HelloScene : public cocos2d::Scene
{
public:
	virtual bool init();
	
	static cocos2d::Scene* Hello();
	
	void enterGame(float dt);			// ����2s���л��뿪ʼ����
	//void menuCloseCallback(cocos2d::Ref* pSender);
};

class bgLayer : public cocos2d::Layer
{
public:
	virtual bool init();
	
	//bool cngBackground(Sprite* bgsprit);

	CREATE_FUNC(bgLayer);
};

class logoLayer : public cocos2d::Layer
{
public:
	virtual bool init();
	CREATE_FUNC(logoLayer);
};

#endif