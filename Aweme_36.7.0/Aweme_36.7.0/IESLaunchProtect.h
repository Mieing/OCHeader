@interface IESLaunchProtect : NSObject

+ (void)onAppStart;
+ (void)onAppDidFinishLaunching;
+ (void)onAppWillResignActive;
+ (void)onAppDidEnterBackground;
+ (void)onAppWillTermiate;
+ (BOOL)enterSafemodeIfContinualException:(int)a0 argv:(char **)a1 ret:(int *)a2;
+ (void)onLastCrashDetected;
+ (void)protectIfContinualException;
+ (void)onCurrentAnrDetected;
+ (double)getAppStartAbsoluteTime;
+ (double)getAppStartTimeSince1970;
+ (void)_internalOnAppStart;
+ (void)checkAppVersionIfUpdate;
+ (id)getSavedAppVersion;
+ (double)getAppStartTimeSince2001;
+ (unsigned long long)getAppLaunchInstallType;
+ (long long)getDeepCleanCount;

@end
