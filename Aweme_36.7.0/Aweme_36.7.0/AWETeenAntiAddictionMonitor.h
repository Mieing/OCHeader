@interface AWETeenAntiAddictionMonitor : NSObject

+ (id)commonParams;
+ (void)monitorTimerFireSuccess:(BOOL)a0 scene:(id)a1;
+ (void)monitorTimerStopSuccess:(BOOL)a0 scene:(id)a1;
+ (void)monitorTimerCreateSuccess:(BOOL)a0;
+ (void)monitorAntiAddictionUsage;
+ (void)monitorTimeLockShow;
+ (void)monitorTimeLockPageNotifySuccess:(BOOL)a0 topVC:(id)a1;
+ (void)monitorNightLockPageNotifySuccess:(BOOL)a0 topVC:(id)a1;
+ (void)monitorTimeLockDismiss;
+ (void)monitorNightLockShow;
+ (void)monitorNightLockDismiss;
+ (void)monitorScreenTimeRecordParams:(id)a0 error:(id)a1;
+ (void)monitorMinorSettingsError:(id)a0;
+ (void)monitorTimerCalibrateParams:(id)a0;

@end
