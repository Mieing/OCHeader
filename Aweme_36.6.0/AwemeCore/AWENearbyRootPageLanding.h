@interface AWENearbyRootPageLanding : NSObject

+ (BOOL)isColdLaunch;
+ (BOOL)landingNearbyWithParams:(id)a0;
+ (BOOL)landingGroupon;
+ (void)saveParamsForNearbyVC:(id)a0 paramDict:(id)a1;
+ (long long)indexForNearby;
+ (long long)indexForGroupOn;
+ (id)getNearbyViewControllerInFeedContainerViewController;

@end
