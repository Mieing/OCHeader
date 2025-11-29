@interface ImageAndSightSettingDataReporter : NSObject

+ (void)reportDataAtLaunchSuccess;
+ (void)reportDataAtLeaveSettingController;
+ (void)reportDataAtScene:(unsigned long long)a0;
+ (void)reportDataAtOptionChanged:(unsigned long long)a0 isSwitchOn:(BOOL)a1;

@end
