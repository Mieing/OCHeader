@class AWEFeedRootViewController, NSString;
@protocol AWEBizTabBarFeedItemConfigCallProtocol;

@interface AWEBizTabBarFeedItemConfigAbilityProxy : NSObject <AWEBizTabBarFeedItemConfigAbility>

@property (weak, nonatomic) AWEFeedRootViewController *feedRootViewController;
@property (weak, nonatomic) id<AWEBizTabBarFeedItemConfigCallProtocol> itemConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showBackgroundImagesWithProgress:(double)a0;
- (BOOL)shouldBeginVerticalPanGestureWithReason:(id *)a0;
- (void).cxx_destruct;

@end
