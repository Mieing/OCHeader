@class AWENormalModeTabBarItemChannelObject;
@protocol AWEBizTabBarItemConfigLifeCycle;

@interface AWENormalModeTabBarControllerLongPressPair : NSObject

@property (retain, nonatomic) AWENormalModeTabBarItemChannelObject *channel;
@property (retain, nonatomic) id<AWEBizTabBarItemConfigLifeCycle> respondsController;

- (void).cxx_destruct;

@end
