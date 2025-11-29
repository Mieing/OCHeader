@interface MatrixAppRebootAnalyzer : NSObject

+ (void)installAppRebootAnalyzer;
+ (void)checkRebootType;
+ (BOOL)isAfterLastLaunchUserRebootDevice;
+ (unsigned long long)lastRebootType;
+ (unsigned long long)appLaunchTime;
+ (unsigned long long)lastAppLaunchTime;
+ (void)notifyAppQuitByExit;
+ (void)notifyAppQuitByUser;
+ (void)notifyAppEnterForeground;
+ (void)notifyAppEnterBackground;
+ (void)notifyAppBackgroundFetch;
+ (void)notifyAppWillSuspend;
+ (void)setUserScene:(id)a0;
+ (id)userSceneOfLastRun;
+ (void)isForegroundMainThreadBlock:(BOOL)a0;
+ (void)setDumpFileName:(id)a0;
+ (id)lastDumpFileName;
+ (BOOL)checkXPCReboot;
+ (unsigned long long)checkXPCLagFile:(unsigned long long)a0 withDate:(id)a1;
+ (BOOL)isAppChange;
+ (BOOL)isOSChange;
+ (unsigned long long)getSystemLaunchTimeStamp;
+ (BOOL)isOSReboot;

@end
