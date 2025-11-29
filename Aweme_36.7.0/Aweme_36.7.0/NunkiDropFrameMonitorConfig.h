@interface NunkiDropFrameMonitorConfig : NSObject

+ (BOOL)enableLog;
+ (BOOL)useCADisplayLink;
+ (double)levelHoldTime;
+ (double)thresholdHeavy;
+ (double)thresholdLight;
+ (double)levelDowngradeDelay;
+ (long long)consecutiveLagLimit;
+ (BOOL)enableAsyncNunkiNotification;
+ (BOOL)enableTrackerUpLoad;
+ (double)consecutiveLagLimitTimeWindow;

@end
