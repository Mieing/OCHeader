@class NSString, AWENearbyIconGuideViewController;

@interface AWENearbyPublishGuideManager : NSObject <AWEBizTabBarMessage>

@property (retain, nonatomic) AWENearbyIconGuideViewController *iconGuideViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)tabBarController:(id)a0 didSelectItemType:(long long)a1 previousItemType:(long long)a2;
- (void)__observeTabChange;
- (void)__handleTabChange:(BOOL)a0;
- (void)__handleFeedContainerIndexChange:(id)a0;
- (long long)__indexForNearby;
- (id)__plusButton;
- (void).cxx_destruct;
- (id)init;
- (id)__containerView;
- (id)__contentViewController;

@end
