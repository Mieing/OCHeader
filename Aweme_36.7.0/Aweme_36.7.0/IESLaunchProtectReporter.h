@interface IESLaunchProtectReporter : NSObject

+ (void)reportEnterFirstTry;
+ (void)reportRestoreSuccessByFirstTry;
+ (void)reportRestoreSuccessBySafemode;
+ (void)reportEnterSafemode;

@end
