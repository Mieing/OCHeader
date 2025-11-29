@interface AWEActivityPendantHelper : NSObject

+ (id)currentFeedTableVC;
+ (id)currentFeedContainerViewController;
+ (id)currentFeedViewController;
+ (BOOL)canShowInCurrentPage:(id)a0 isSwitchTab:(BOOL)a1;
+ (BOOL)shouldHideForCurrentVideo:(id)a0 baseViewType:(unsigned long long)a1;
+ (BOOL)shouldHideForCurrentVideo:(id)a0;
+ (BOOL)shouldHideInCurrentPage:(id)a0 isSwitchTab:(BOOL)a1;
+ (BOOL)shouldHideForCurrentVideo:(id)a0 baseViewType:(unsigned long long)a1 configMode:(id)a2;
+ (void)recordClosePendantTime:(long long)a0;
+ (void)recoverCanShowDeadLineWhenLaunch:(BOOL)a0;
+ (BOOL)disablePendantFold:(id)a0;
+ (BOOL)isShowSkylightViewOnFeed;

@end
