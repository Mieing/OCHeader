@class NSTimer;
@protocol IESLiveSubscription, IESLiveCustomConfig;

@interface IESLivePlaybackCellularFragment : IESLivePlaybackComponent

@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (nonatomic) long long currentNetStatus;
@property (weak, nonatomic) id noWifiAlert;
@property (retain, nonatomic) NSTimer *backgroundCountTimer;
@property (retain, nonatomic) id<IESLiveSubscription> dispose;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)getNetworkStatus;
- (void)changeToCellularNetwork;
- (void)changeToWifiNetwork;
- (void)changeToNetworkUnreachable;
- (void)checkNetworkForEnterWithCertainBlock:(id /* block */)a0;
- (BOOL)isBackgroundCutoffEnable;
- (void)showCellualrNetworkNoWifiAlert;
- (void)showCellularNetworkAlert;
- (void)showNetworkAlertWithCertainBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (long long)backgroundCutoffTimeOutInterval;
- (void)componentWillMount;
- (void)pauseStreamIfNeed;
- (BOOL)canShowInVideo;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
