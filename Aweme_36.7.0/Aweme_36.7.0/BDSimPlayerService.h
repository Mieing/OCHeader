@interface BDSimPlayerService : NSObject

+ (void)setApplicationDidBecomeActive;
+ (void)setApplicationWillResignActive;
+ (BOOL)isSimPlayerV2:(id)a0;
+ (void)setLoggerFlag:(int)a0;
+ (Class)getSimPlayerClass;
+ (void)setDebugEnable:(BOOL)a0;
+ (void)openDebugMonitor:(int)a0;
+ (id)defaultService;

- (id)getSimPlayer:(id)a0;
- (id)getDefaultConfig;
- (void)registerCustomBizConfig:(id)a0;
- (void)initPlayer:(id)a0;
- (id)getSuperResolutionManager;
- (id)getBitrateSelectorManager;

@end
