@interface AweMonitorMatrixBridge : NSObject

+ (id)systemVersionBrige;
+ (id)platformBrige;
+ (unsigned long long)lastSessionLaunchTimeBrige;
+ (unsigned long long)currentSessionLaunchTimeBrige;
+ (void)onAppLaunchBrige;
+ (void)stopAndInvalidThisSession;

@end
