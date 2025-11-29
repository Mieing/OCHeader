@interface BDPNativeAppLaunchObject : BDPLaunchObjectBase

+ (BOOL)openWithLaunchParam:(id)a0;
+ (void)launchRouteStartWithLaunchParam:(id)a0 uniqueID:(id)a1;
+ (id)extractPreLaunchTimelineWithLaunchParams:(id)a0 uniqueID:(id)a1;
+ (void)collectPreLaunchTimeline:(id)a0 routeID:(id)a1 launchParams:(id)a2 uniqueID:(id)a3 date:(id)a4;

- (id)customLoadMetaAndPkgWithContext:(id)a0;

@end
