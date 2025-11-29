@interface AWEPopViewMonitorSetting : NSObject

+ (BOOL)enableMergeParamsAddPrefix;
+ (BOOL)popViewInfoTrackEnable;
+ (long long)showTimeoutWithAlertID:(id)a0;
+ (long long)closeTimeoutWithAlertID:(id)a0;
+ (BOOL)enableMainThreadAssert;
+ (long long)closeCheckAfterTransitionCount;
+ (double)closeCheckAfterTransitionTimeLimit;
+ (long long)configWithAlertID:(id)a0 key:(id)a1;
+ (id)popViewInfoTrackConfig;
+ (long long)popViewTriggerEndTrackType;
+ (BOOL)enable;

@end
