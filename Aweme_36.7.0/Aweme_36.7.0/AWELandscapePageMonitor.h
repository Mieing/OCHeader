@interface AWELandscapePageMonitor : NSObject

+ (void)trackTransitionWithPhase:(long long)a0 duration:(double)a1 entering:(BOOL)a2 enterFrom:(id)a3 extraParams:(id)a4;
+ (void)trackWrongTransitionWithEnterTime:(double)a0 fromVC:(id)a1 toVC:(id)a2 fromCP:(id)a3 toCP:(id)a4;

@end
