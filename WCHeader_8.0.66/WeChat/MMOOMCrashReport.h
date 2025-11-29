@interface MMOOMCrashReport : NSObject

+ (id)rebootTypeString:(unsigned long long)a0;
+ (void)checkAndReport;
+ (void)setScene:(id)a0;
+ (id)lastScene;
+ (void)setWeAppName:(id)a0;
+ (id)lastWeAppName;
+ (void)userHasWatch:(BOOL)a0;
+ (void)reportIDKeyData:(unsigned long long)a0;
+ (void)reportKVData:(unsigned long long)a0;
+ (void)reportFoomScene;
+ (void)reportWeAppFoomScene;
+ (void)reportWeAppBoomScene;
+ (void)reportWeAppSuspendOOMScene;
+ (void)reportWeAppCrashScene;
+ (void)reportWeAppQualityIssueForAppid:(id)a0 nickname:(id)a1 inScene:(id)a2;
+ (void)reportLiveScene:(id)a0;
+ (void)repotWCFinderScene:(id)a0;
+ (void)logFinderOrLiveKV:(id)a0;
+ (void)clearFinderKV;
+ (void)reportFinderExitReason:(unsigned long long)a0;

@end
