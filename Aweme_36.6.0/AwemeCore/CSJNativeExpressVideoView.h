@class UIView, NSArray, BUTimer, BUReachability, UIButton, CSJDislikeContext, CSJVideoAdTracker, CSJPlayerTimeObserverModel, BUAudioSessionHandler;
@protocol CSJNormalVideoFinishViewProtocol;

@interface CSJNativeExpressVideoView : CSJNativeExpressAdView

@property (retain, nonatomic) BUTimer *autoPlayTimer;
@property (retain, nonatomic) BUReachability *reachability;
@property (retain, nonatomic) UIView<CSJNormalVideoFinishViewProtocol> *finishBackgroundView;
@property (retain, nonatomic) UIButton *playButton;
@property (nonatomic) BOOL muteSwitch;
@property (nonatomic) long long videoAutoPlayType;
@property (nonatomic) BOOL last_paused;
@property (nonatomic) long long presentationType;
@property (nonatomic) BOOL codeExecuted;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (retain, nonatomic) CSJVideoAdTracker *videoTracker;
@property (copy, nonatomic) NSArray *superScrollViewArray;
@property (retain, nonatomic) BUAudioSessionHandler *sessionHandler;
@property (retain, nonatomic) CSJPlayerTimeObserverModel *playerTimeObserverModel;

- (void)playerReadyToPlay:(id)a0;
- (void)continuePlay;
- (BOOL)getAutoPlayVideoSwitch;
- (void)playerSeekToTime:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nativeAd:(id)a1 nativeExpressAdViewSource:(long long)a2;
- (void)_initPlayer;
- (void)startPlayVideo;
- (void)receiveWillEnterForegroundNotification;
- (void)receiveEnterBackgroundNotification;
- (void)player:(id)a0 stateDidChanged:(long long)a1;
- (void)playerDidPlayFinish:(id)a0 error:(id)a1;
- (void)player:(id)a0 decodeModeChanged:(unsigned long long)a1;
- (void)playerBoundaryTimeReached:(id)a0;
- (id)findSupperScrollViews:(id)a0;
- (void)audioSessionHandlerWhenFinishOrDismiss;
- (void)setSettingConfig:(id)a0;
- (void)innerPause;
- (void)appStoreControllerDidAppear:(id)a0;
- (void)appStoreControllerDidDisappear:(id)a0;
- (void)innerContinuePlay;
- (BOOL)shouldRenderBackup;
- (void)handleClickEventInvideo:(id)a0;
- (BOOL)isValidExpressVideo;
- (void)videoInfoSetting;
- (void)registregistReachability;
- (void)innerPlay;
- (void)audioSessionHandleWithMute:(BOOL)a0;
- (id)getContextSource;
- (void)videoClickTypeConfigWith:(id)a0 context:(id)a1;
- (void)addNotification;
- (void)goToDetail:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)replay;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToWindow;
- (BOOL)shouldAutoPlay;
- (void)applicationWillTerminateNotification:(id)a0;
- (void)tick:(id)a0;

@end
