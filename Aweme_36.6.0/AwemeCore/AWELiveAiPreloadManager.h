@class NSMutableDictionary, NSTimer, AWEAwemeModel, AWEFeedLiveModuleController;

@interface AWELiveAiPreloadManager : NSObject

@property (retain, nonatomic) NSTimer *livePreloadStreamTimer;
@property (retain, nonatomic) AWEAwemeModel *preAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *nextAwemeModel;
@property (retain, nonatomic) NSMutableDictionary *roomPreloadReason;
@property (weak, nonatomic) AWEFeedLiveModuleController *delegate;

+ (id)sharedInstance;

- (void)addNotifications;
- (void)handleViewWillAppear:(id)a0;
- (void)tabBarDidChangeNotification:(id)a0;
- (void)feedContainerViewControllerDidSwitchTab:(id)a0;
- (void)stopPreloadStream;
- (void)predictPreloadTimeWithCell:(id)a0 preModel:(id)a1 nextModel:(id)a2;
- (void)registMethodWhenReady;
- (void)stopStreamWithCell:(id)a0 model:(id)a1;
- (void)preloadStreamWithCell:(id)a0 model:(id)a1 preloadPull:(BOOL)a2 preloadTime:(long long)a3 delayTime:(long long)a4 ignorePeakTime:(BOOL)a5;
- (void)registMethod;
- (void)registFixMethod;
- (void)preloadHotStreamWithCell:(id)a0 model:(id)a1 preloadTime:(long long)a2 delayTime:(long long)a3 ignorePeakTime:(BOOL)a4;
- (void)modelThinkPreloadStream:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
