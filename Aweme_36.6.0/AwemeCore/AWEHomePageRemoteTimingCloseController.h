@class NSTimer;

@interface AWEHomePageRemoteTimingCloseController : AWEHomePageRemoteCommonController

@property (nonatomic) BOOL isConsumed;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long countDownTime;
@property (nonatomic) BOOL isPanelShowing;
@property (nonatomic) BOOL isTiming;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)addNotifications;
- (void)addBinding;
- (void)homePageRemotePanelWillShow;
- (void)homePageRemotePanelDidShow;
- (BOOL)isBusinessConsumed;
- (BOOL)canShowCellView;
- (void)homePageRemoteCellClick;
- (BOOL)needLoadController;
- (void)homePageRemotePanelDidDismissWithReason:(long long)a0;
- (void)rootVCWillAppear;
- (void)tryUpdateButtonStatus;
- (void)tryUpdateButtonStatusWithRemainTime:(long long)a0;
- (void)startTimingWithCountDownTime:(long long)a0;
- (void)updateButtonTextWithTime:(long long)a0;
- (void)timeCountDown;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (id)button;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)removeNotifications;
- (void)appWillEnterForeground:(id)a0;
- (id)currentChannelID;
- (void)stopTiming;

@end
