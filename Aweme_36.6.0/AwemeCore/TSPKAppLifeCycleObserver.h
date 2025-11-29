@interface TSPKAppLifeCycleObserver : NSObject

@property (nonatomic) BOOL isBackground;
@property (nonatomic) double timeLastDidEnterBackground;

+ (id)sharedObserver;

- (BOOL)isAppBackground;
- (void)addNotifications;
- (double)getTimeLastDidEnterBackground;
- (void)handlePageStatusChangeNotification:(id)a0;
- (void)handlePageDeallocNotification:(id)a0;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)applicationWillResignActive;
- (void)applicationWillEnterForeground;
- (void)applicationWillTerminate;
- (void)setup;
- (void)applicationDidReceiveMemoryWarning;

@end
