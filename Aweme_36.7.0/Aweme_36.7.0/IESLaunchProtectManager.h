@class NSObject;
@protocol OS_dispatch_queue;

@interface IESLaunchProtectManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *detection_queue;
@property (nonatomic) BOOL isAppLaunchFromBackground;
@property BOOL isAnrDetected;
@property (nonatomic) unsigned long long protectState;

+ (void)_overrideOnAppStart;
+ (id)sharedManager;

- (void)onAppStart;
- (long long)getCurrentExceptionCounter;
- (void)onAppDidFinishLaunching;
- (void)onAppWillTerminate;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)onMain;
- (void)onCurrentAnrDetected;
- (void)onAppReadyByUserPerspective;
- (void)_startMonitorTimer;
- (void)_overrideDidFinishLaunching;
- (void)internalOnAppReadyByUserPerspective;
- (void).cxx_destruct;
- (id)init;

@end
