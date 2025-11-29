@interface WcPayPluginMessageReportor : NSObject

+ (void)reportNotifyMessage:(id)a0 event:(unsigned long long)a1;
+ (void)reportShowMessage:(id)a0;
+ (void)reportMessage:(id)a0 event:(unsigned long long)a1;
+ (BOOL)isTargetMsg:(id)a0;
+ (BOOL)isWxPayPlugin:(id)a0;
+ (BOOL)isAppMsg:(id)a0;
+ (BOOL)isOpenSwitch;
+ (void)updateReportSwitch;
+ (void)resetData;

@end
