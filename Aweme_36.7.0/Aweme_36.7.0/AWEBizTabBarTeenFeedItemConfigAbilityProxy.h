@class NSString, AWETeenFeedRootViewController;
@protocol AWEBizTabBarTeenFeedItemConfigCallProtocol;

@interface AWEBizTabBarTeenFeedItemConfigAbilityProxy : NSObject <AWEBizTabBarTeenFeedItemConfigAbility>

@property (weak, nonatomic) AWETeenFeedRootViewController *feedRootViewController;
@property (weak, nonatomic) id<AWEBizTabBarTeenFeedItemConfigCallProtocol> itemConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showBackgroundImagesWithProgress:(double)a0;
- (void).cxx_destruct;

@end
