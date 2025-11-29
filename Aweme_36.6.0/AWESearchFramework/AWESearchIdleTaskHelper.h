@interface AWESearchIdleTaskHelper : NSObject

@property (nonatomic) BOOL isRefreshMonitorFinish;

+ (id)sharedInstance;

- (void)searchRefreshMointorFinish:(id)a0;
- (void)searchRefreshMointorStart:(id)a0;
- (void)addSearchRefreshMonitorObserver;
- (void)removeSearchRefreshMonitorObserver;

@end
