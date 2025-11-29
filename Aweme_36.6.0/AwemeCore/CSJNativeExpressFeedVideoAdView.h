@class NSArray, BUTimer, UIImageView, UIButton, CSJVideoAdTracker, BUReachability, CSJPlayerTimeObserverModel, UIScrollView;

@interface CSJNativeExpressFeedVideoAdView : CSJNativeExpressAdView

@property (retain, nonatomic) BUTimer *autoPlayTimer;
@property (retain, nonatomic) BUReachability *reachability;
@property (retain, nonatomic) UIImageView *finishBackgroundView;
@property (nonatomic) BOOL muteSwitch;
@property (nonatomic) long long videoAutoPlayType;
@property (nonatomic) BOOL drawVideo_tapPaused;
@property (nonatomic) BOOL last_paused;
@property (nonatomic) long long presentationType;
@property (nonatomic) BOOL codeExecuted;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIScrollView *scrollSuperView;
@property (copy, nonatomic) NSArray *superScrollViewArray;
@property (retain, nonatomic) CSJVideoAdTracker *videoTracker;
@property (retain, nonatomic) CSJPlayerTimeObserverModel *playerTimeObserverModel;
@property (nonatomic) double totalPlayedTime;
@property (nonatomic) long long playTimes;

+ (id)videoAdViewInstanceArray;

- (void)playerReadyToPlay:(id)a0;
- (void)continuePlay;
- (BOOL)getAutoPlayVideoSwitch;
- (void)playerSeekToTime:(double)a0;
- (void)refreshWkWebView;
- (BOOL)isDrawVideo;
- (void)recordCurrentTapPaused;
- (void)resetCurrentTapPaused;
- (void)videoClickEventHanderWith:(id)a0;
- (unsigned long long)videoAdViewInstanceCount;
- (void)pauseWithIsFromNativeDynamic:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nativeAd:(id)a1 nativeExpressAdViewSource:(long long)a2;
- (void)_initPlayer;
- (void)startPlayVideo;
- (void)receiveWillEnterForegroundNotification;
- (void)receiveEnterBackgroundNotification;
- (void)handleInvalidVideoUrl;
- (void)player:(id)a0 stateDidChanged:(long long)a1;
- (void)playerDidPlayFinish:(id)a0 error:(id)a1;
- (void)player:(id)a0 decodeModeChanged:(unsigned long long)a1;
- (void)playerBoundaryTimeReached:(id)a0;
- (id)findSupperScrollViews:(id)a0;
- (void)setSettingConfig:(id)a0;
- (void)innerPause;
- (void)appStoreControllerDidAppear:(id)a0;
- (void)appStoreControllerDidDisappear:(id)a0;
- (void)innerContinuePlay;
- (BOOL)shouldRenderBackup;
- (void)handleClickEventInvideo:(id)a0;
- (void)videoInfoSetting;
- (void)registregistReachability;
- (void)innerPlay;
- (void)addNotification;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)replay;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToWindow;
- (BOOL)shouldAutoPlay;
- (void)applicationWillTerminateNotification:(id)a0;
- (void)tick:(id)a0;

@end
