@class NSString;

@interface AWEStabilityAfterTrackerTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeTask;
+ (void)enableYYCacheTrim;
+ (void)uploadUniverseMonitorData:(BOOL)a0;
+ (void)observerTTTrackerStatus;
+ (void)observeFeedCellChange;
+ (void)observeAccessibilityChange;
+ (void)execute;


@end
