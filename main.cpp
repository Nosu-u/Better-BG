#include <Geode.hpp>

USE_GEODE_NAMESPACE();

class $modify(MenuLayer) {
    bool init() {

        int omg = MenuLayer::init();
        auto yea = GameManager::sharedState()->m_menuLayer;
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        auto sprite = CCSprite::create("background.jpg");

		sprite->setScaleY(winSize.height / sprite->getContentSize().height);
		sprite->setScaleX(winSize.width / sprite->getContentSize().width);
		sprite->setPositionX(winSize.width / 2);
		sprite->setPositionY(winSize.height / 2);
        
        auto node = ((CCNode*)yea->getChildren()->objectAtIndex(0));
		
        node->addChild(sprite, 99);
					
		return omg;
    }
};
