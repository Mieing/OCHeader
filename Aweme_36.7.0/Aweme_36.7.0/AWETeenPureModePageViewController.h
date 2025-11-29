@class NSString, NSDictionary, AWEAwemeModel, UIViewController;
@protocol AWETeenPureModePageLongPressPanelDelegate, AWETeenDisplayViewControllerProtocol;

@interface AWETeenPureModePageViewController : AWEShellViewController <AWETeenPureModePageViewControllerProtocol, AWETeenPureModePageInnerContextProvider, AWETeenPureModePageOuterContextProvider, AWETeenPureModePageContainerProtocol>

@property (retain, nonatomic) UIViewController<AWETeenDisplayViewControllerProtocol> *videoController;
@property (nonatomic) double startPinchingTime;
@property (nonatomic) double startStayTime;
@property (nonatomic) double playerViewHeight;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long vcType;
@property (weak, nonatomic) id<AWETeenPureModePageLongPressPanelDelegate> longPressPanelDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)inner_pinchTransitionDidFinish;
- (void)playIfActive;
- (void)addGestureToVideoPlayerView:(id)a0;
- (void)pauseOrPlayByMethod:(unsigned long long)a0;
- (double)videoViewHeight;
- (long long)videoLoopTimes;
- (void)dismissByExitMethod:(long long)a0;
- (id)createControllerManager;
- (void)inner_pinchTransitionWillBegin;
- (void)inner_pinchTransitionDidCancel;
- (void)outer_pinchTransitionWillBegin;
- (void)outer_pinchTransitionDidFinish;
- (void)outer_pinchTransitionDidCancel;
- (id)relatedViewControllerForPrefetch;
- (void)setupVideoController;
- (BOOL)shouldPreventVideoPause;
- (id)outer_pinchTargetView;
- (void)outer_updatePlayerController:(id)a0 withPlayVideoVC:(id)a1 model:(id)a2;
- (id)updateToContextProvider;
- (void)inner_updatePlayerController:(id)a0 withPlayVideoVC:(id)a1 model:(id)a2;
- (void)p_handleBroadcastNotification:(id)a0;
- (void)updateModelWithModel:(id)a0 play:(BOOL)a1;
- (void)pauseOrPlayBySystemNotify:(BOOL)a0;
- (void)setupVideoControllerDelegate;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)isPlaying;
- (id)init;
- (id)playerController;
- (id)createContext;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)isActive;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)setupContext;

@end
