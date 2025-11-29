@interface AWEFeedGlobalPiPUtilManager : NSObject

@property (nonatomic) BOOL shouldBlockPipWhenPlayerPause;

+ (id)shareInstance;

- (void)applicationWillResignActive:(id)a0;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)addObserver;

@end
