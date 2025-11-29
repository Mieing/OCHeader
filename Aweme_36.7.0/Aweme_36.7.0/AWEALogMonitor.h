@class NSString, NSTimer, AWEALogMertic;

@interface AWEALogMonitor : NSObject

@property (retain, nonatomic) AWEALogMertic *mertic;
@property (copy) NSString *scene;
@property unsigned long long bootLaunchState;
@property BOOL appIsActive;
@property (nonatomic) BOOL alogSwitch;
@property (retain, nonatomic) NSTimer *timer;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)config;
+ (BOOL)isEnabled;
+ (id)sharedMonitor;

- (void)_setupBootAction;
- (void)_updateTimer:(BOOL)a0;
- (void)_handleSceneDidChange:(id)a0;
- (void)_handleAppNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)_setupNotifications;
- (void)_handleMemoryWarning:(id)a0;

@end
