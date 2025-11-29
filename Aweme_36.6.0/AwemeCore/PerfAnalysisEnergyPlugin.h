@interface PerfAnalysisEnergyPlugin : PerfAnalysisPlugin

+ (double)GCDTimerSafetyBackupInterval;
+ (BOOL)enableNSTimerIntervalSafetyCheck;
+ (BOOL)enableGCDTimerIntervalSafetyCheck;
+ (BOOL)isNSTimerIntervalSafety:(double)a0 target:(id)a1 selector:(SEL)a2;
+ (BOOL)isNSTimerIntervalSafety:(double)a0 block:(id /* block */)a1;
+ (double)NSTimerSafetyBackupInterval;
+ (BOOL)isGCDTimerIntervalSafety:(id)a0 interval:(unsigned long long)a1;
+ (BOOL)isGCDTimerIntervalSafety:(id)a0 interval:(unsigned long long)a1 handler:(id /* block */)a2;
+ (id)name;

- (BOOL)isDisplayedInScreen:(id)a0;
- (id)getKeyWindow;
- (void)hookBDAnimation;
- (void)hookLOTAnimation;
- (void)hookAnimaXDisplaylink;
- (void)hookLynxUIExposure;
- (void)hookJSON;
- (void)hookView;
- (id)isViewHidden:(id)a0 depth:(long long)a1;
- (BOOL)isViewCovered:(id)a0;
- (id)generateViewPathWithView:(id)a0 keyView:(id *)a1;
- (void)didFindRunningWhenHidden:(id)a0 isLeak:(BOOL)a1;
- (void)didFindRunningOffScreen:(id)a0 isLeak:(BOOL)a1;
- (void)onLoad;

@end
