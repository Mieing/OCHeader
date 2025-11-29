@interface AWEUGAliveDurationMonitor : NSObject

@property (nonatomic) BOOL enableKeepAlive;
@property (nonatomic) long long enterBackgroundTime;
@property (nonatomic) unsigned long long backgroundUpdateTask;

+ (id)sharedInstance;

- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (void)setup;
- (void)trackDuration;
- (void)endBackgroundTask;
- (void)beginBackgroundTask;

@end
