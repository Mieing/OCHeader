@class NSMutableArray, AWETeenBaseVideoController;

@interface AWETeenPlayVideoStatusChecker : NSObject

@property (retain, nonatomic) NSMutableArray *playVideoViewControllers;
@property (weak, nonatomic) AWETeenBaseVideoController *lastPlayVideoViewController;
@property (nonatomic) long long playVideoViewControllerCount;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) double lastCheckTimestamp;

+ (id)sharedInstance;

- (void)didReceiveMemoryWarningNotification;
- (void)increasePlayVideoViewControllers;
- (void)decreasePlayVideoViewControllers;
- (void)updatePauseStatusWithPlayer:(id)a0;
- (void)updatePlayStatusWithPlayer:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)applicationWillResignActive;
- (void)applicationWillEnterForeground;
- (void)dealloc;

@end
