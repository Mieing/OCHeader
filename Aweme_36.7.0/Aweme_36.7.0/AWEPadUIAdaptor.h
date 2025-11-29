@interface AWEPadUIAdaptor : NSObject

@property (nonatomic) long long orientation;
@property (nonatomic) BOOL didEnterBackGround;
@property (readonly, nonatomic) BOOL enable;
@property (nonatomic) BOOL rotateLockOn;

+ (BOOL)awe_isDeviceVertical;
+ (BOOL)awe_isIpad;
+ (unsigned long long)awe_interfaceOrientationMaskFrom:(long long)a0;
+ (id)sharedInstance;

- (void)__setupNotifications;
- (void)setHooksForRotationControl;
- (void)onApplicationWillEnterForeground:(id)a0;
- (void)onApplicationDidChangeStatusBarOrientation:(id)a0;
- (void)setRotationEnvironmentWithEnable:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (void)onApplicationDidEnterBackground:(id)a0;

@end
