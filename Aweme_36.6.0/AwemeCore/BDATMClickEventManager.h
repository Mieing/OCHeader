@interface BDATMClickEventManager : NSObject

+ (BOOL)isTargetViewForClick:(id)a0;
+ (void)addFilterTargetsForControl:(id)a0;
+ (void)addFilterTargetForGestureView:(id)a0;
+ (void)registerFilterHandlerForView:(id)a0;
+ (void)sendClickTrackerForGestureRecognizer:(id)a0;
+ (void)sendClickTrackerForView:(id)a0;

@end
