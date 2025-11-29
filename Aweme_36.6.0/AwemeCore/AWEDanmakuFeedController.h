@class NSString;
@protocol AWEDanmakuContainerControllerProtocol, AWEDanmakuPageContextProtocol;

@interface AWEDanmakuFeedController : AWEPlayInteractionNewBaseController <AWEDanmakuBaseControllerDelegate, AWEPadUIAdaptionViewTransitionObserver, AWEPlayInteractionPlayerLifeCycleProtocol>

@property (retain, nonatomic) id<AWEDanmakuPageContextProtocol> danmakuContext;
@property (retain, nonatomic) id<AWEDanmakuContainerControllerProtocol> danmakuController;
@property (copy, nonatomic) id /* block */ danmakuGuideVideoPeriodBlock;
@property (copy, nonatomic) id /* block */ danmakuVideoPeriodBlock;
@property (nonatomic) BOOL commentWillDismiss;
@property (copy, nonatomic) NSString *bgPlayModelID;
@property (nonatomic) BOOL needUpdateDanmakuLayOut;
@property (copy, nonatomic) NSString *accountType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (unsigned long long)controllerLazyLoadStrategy;
+ (BOOL)enableFixDanmakuShieldGuideShow;

- (void)setHide:(BOOL)a0;
- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)onPlayer:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (id)aAWEPadModuleAdapter;
- (void)onPlayerPlay:(id)a0 ifPlay:(BOOL)a1;
- (void)onPlayerPause:(id)a0;
- (void)onPlayerStop:(id)a0;
- (void)onPlayerDidReadyForDisplay:(id)a0;
- (void)onPlayFromOutCall;
- (void)onPlayer:(id)a0 maskInfoCallBack:(id)a1 pts:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realMediaFrame;
- (void)lazyControllerDidLoad;
- (void)lazyControllerWillUnload;
- (double)currentVideoPlayTime;
- (long long)videoPlayState;
- (void)configTrackDanmakuSettingData;
- (id)danmakuContainerView;
- (BOOL)disableUpdateDanmakuStatus;
- (void)resumeDanmakuPlayer;
- (void)pauseDanmakuPlayer;
- (BOOL)shouldHandleDanmaKuTap:(id)a0;
- (void)didReceiveAWEPlayInteractionProgressTouchEndNotification:(id)a0;
- (void)layOutDanmakuContainerView;
- (void)setupEvent;
- (void)updateDanmakuShowStatusIfNeed:(BOOL)a0;
- (BOOL)isNeedToUpdateDanmakuLayOut;
- (void)updateDanmakuViewLayOut;
- (void)resetDanmakuViewLayOut;
- (void)startConfigDanmakuContainerIfNeed;
- (void)addDanmakuShieldGuideEvent;
- (void)removeGuideVideoPeriodBlockIfNeed;
- (void)configDanmakuStyle;
- (void)setDanmakuViewLayOut;
- (BOOL)enableBackgroundPauseDanmaku;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (id)playerController;
- (void)viewWillAppear;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (BOOL)isViewAppearing;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
