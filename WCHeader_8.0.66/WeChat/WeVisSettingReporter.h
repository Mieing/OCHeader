@interface WeVisSettingReporter : NSObject

+ (void)reportWithInfo:(id)a0 action:(int)a1 cgiSettingsInfo:(id)a2 scene:(id)a3;
+ (void)reportCgiFail;
+ (void)reportLoadingFail;
+ (void)reportSingleAction:(int)a0;
+ (void)reportSysMsgCgi;
+ (void)reportSettingUsage:(id)a0 scene:(int)a1;
+ (void)reportSettingInfo:(id)a0 scene:(int)a1;

@end
