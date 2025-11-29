@class NSString, UIViewController;

@interface AWEPadRotateControlAdapter : NSObject <AWEPadRotateControlAdapter>

@property (nonatomic) long long lastOrientation;
@property (nonatomic) BOOL enablePadSnapshotOpt;
@property (retain, nonatomic) UIViewController *fakeLaunchViewController;
@property (retain, nonatomic) UIViewController *tempWindowRootViewController;
@property (nonatomic) double appStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)GetAdapter;
+ (id)sharedInstance;

- (BOOL)isTeenModeEnabled;
- (void)setRotationEnvironment;
- (void)setupHybirdCustomOrientationChange;
- (void)setupDUXRotateConfig;
- (BOOL)enablePadSnapshotOptV2;
- (void)appDidEnterBackgroundForSnapshotOpt:(id)a0;
- (void)appDidBecomeActiveForSnapshotOpt:(id)a0;
- (void)trackOrientationChange:(long long)a0;
- (BOOL)enableHybirdCustomOrientationChange;
- (id)snapshotOptV2Config;
- (void)activeWindowRootVC;
- (void).cxx_destruct;
- (id)init;
- (id)weakTarget;
- (void)orientationDidChange:(id)a0;
- (void)setupOrientation;

@end
