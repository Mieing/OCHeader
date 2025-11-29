@interface AWELaunchProtectReporter : NSObject

+ (void)reportEvent:(unsigned long long)a0 params:(id)a1;
+ (void)reportEnterFirstTry;
+ (void)reportRestoreSuccessByFirstTry;
+ (void)reportRestoreSuccessBySafemode;
+ (void)reportEvent:(id)a0 extraInfo:(id)a1;
+ (void)uploadKiteLogFromDaysBefore:(unsigned long long)a0 scene:(id)a1 byUser:(BOOL)a2 callback:(id /* block */)a3;
+ (void)uploadKiteLogByLogPaths:(id)a0 scene:(id)a1 byUser:(BOOL)a2 callback:(id /* block */)a3;
+ (void)reportEnterSafemode;
+ (BOOL)hasReportEnterFirstTry;
+ (void)uploadKiteLogFromDaysBefore:(unsigned long long)a0 scene:(id)a1 callback:(id /* block */)a2;
+ (void)uploadKiteLogByLogPaths:(id)a0 scene:(id)a1 callback:(id /* block */)a2;

@end
