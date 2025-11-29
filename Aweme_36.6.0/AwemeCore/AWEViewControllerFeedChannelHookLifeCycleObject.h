@class AWEFeedChannelObject;
@protocol AWEFeedChannelHookLifeCycleDelegate, AWETabBarItemChannelObjectProtocol;

@interface AWEViewControllerFeedChannelHookLifeCycleObject : NSObject

@property (weak, nonatomic) id<AWETabBarItemChannelObjectProtocol> tabBarChannel;
@property (weak, nonatomic) AWEFeedChannelObject *channelObject;
@property (weak, nonatomic) id<AWEFeedChannelHookLifeCycleDelegate> channelDelegate;

- (void).cxx_destruct;

@end
