@class NSString;

@interface AWEAppDelegateTrackModule : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFullLaunchLogCompensate;
+ (unsigned long long)priority;

- (void)onAppDidBecomeActive;
- (void)onAppWillEnterForeground;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (BOOL)writeLog;
- (void)fixedTrackManagerSetup;
- (void)legacyTrackManagerSetup;

@end
