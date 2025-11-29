@class NSTimer, IESLivePlaybackStatusBarView;

@interface IESLivePlaybackStatusBarControl : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) IESLivePlaybackStatusBarView *statusBar;

- (void)endMonitor;
- (void)destroyTimer;
- (void)checkAndMonitorBatteryLevel;
- (void)checkNetworkStatus;
- (void)addNetworkMonitor;
- (void)showTimeStr;
- (BOOL)is12HourFormat;
- (void)didChangeBatteryLevel:(id)a0;
- (void)didChangeBatteryStatus:(id)a0;
- (void)showBatteryStatus;
- (void)config;
- (void).cxx_destruct;
- (id)init;
- (void)createTimer;
- (void)startMonitor;
- (void)refreshContent;

@end
