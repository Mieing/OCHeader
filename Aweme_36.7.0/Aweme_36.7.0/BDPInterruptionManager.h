@interface BDPInterruptionManager : NSObject

@property (nonatomic) BOOL isInterrupted;

+ (void)bootstrapLaunch;
+ (void)postEnterBackgroundNotification:(long long)a0 uniqueID:(id)a1;
+ (void)postEnterForegroundNotification:(long long)a0 uniqueID:(id)a1;
+ (id)sharedManager;

- (void)setupObserver;
- (void)applicationBeginInterrupted;
- (void)applicationEndInterrupted;
- (id)init;
- (void)dealloc;

@end
