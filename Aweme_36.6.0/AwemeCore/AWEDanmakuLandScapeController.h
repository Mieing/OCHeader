@class AWEDanmakuInputViewParamsConfig, NSString, AWEAwemeModel, UIView;
@protocol AWEPlayInteractionLandScapeDanmakuControllerDelegate, AWEDanmakuPageContextProtocol, AWECommentInputViewManagerProtocol, AWEDanmakuBaseLandScapeControllerProtocol, AWEDanmakuContainerControllerProtocol;

@interface AWEDanmakuLandScapeController : NSObject <AWEDanmakuBaseControllerDelegate, AWEPadUIAdaptionViewTransitionObserver, AWECommentInputViewManagerDelegate, AWEPlayInteractionLandscapeDanmakuControllerProtocol>

@property (retain, nonatomic) id<AWEDanmakuContainerControllerProtocol, AWEDanmakuBaseLandScapeControllerProtocol> danmakuController;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> danmakuInputViewManager;
@property (retain, nonatomic) UIView *danmakuContainView;
@property (nonatomic) BOOL danmakuPostPauseVideoPlay;
@property (nonatomic) double inputViewDidShowTime;
@property (nonatomic) double inputViewWillShowTime;
@property (nonatomic) BOOL isAuthorIdentityChecked;
@property (retain, nonatomic) id<AWEDanmakuPageContextProtocol> danmakuContext;
@property (retain, nonatomic) AWEDanmakuInputViewParamsConfig *inputParamsConfig;
@property (nonatomic) BOOL isViewDidDisappear;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayInteractionLandScapeDanmakuControllerDelegate> delegate;
@property (nonatomic) BOOL hasReceiveMaskInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (void)didDisplay;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (double)currentPlayTime;
- (id)aAWEPadModuleAdapter;
- (void)onPlayerDidReadyForDisplay:(id)a0;
- (long long)videoPlayState;
- (void)onPlayerPlay:(id)a0;
- (double)currentPlayRate;
- (id)getCurrentDanmakuStylesInfo;
- (BOOL)disableUpdateDanmakuStatus;
- (void)resumeDanmakuPlayer;
- (void)pauseDanmakuPlayer;
- (void)stopDanmakuPlayer;
- (BOOL)shouldHandleDanmaKuTap:(id)a0;
- (void)showLoginPageWithBackVertical;
- (void)reportWithDanmakuModel:(id)a0 completionBlock:(id /* block */)a1;
- (void)onPlayerWillLoopPlaying;
- (void)refreshDanmakuWithShieldWordChange;
- (void)addObserve;
- (void)setUI;
- (void)showDanmakuIfNeed;
- (void)showDanmakuShieldWordPanel;
- (void)updateDanmaKuStyle;
- (BOOL)canShowDanmakuView;
- (BOOL)isPadEvn;
- (void)updateDanmakuWithVideoStatus:(BOOL)a0;
- (void)danmakuButtonClicked:(id)a0;
- (void)trackDanmakuPlayResult;
- (void)trackDanmakuImpression;
- (void)handleProgressSliderTouchEnded;
- (void)handleCurrentVideoSpeedChange;
- (BOOL)isDanmakuShowing;
- (id)currentDanmakuCount;
- (id)initWithDelegate:(id)a0 enterFrom:(id)a1;
- (void)viewDidAppear;
- (double)videoDuration;
- (void).cxx_destruct;
- (id)playerController;
- (void)viewWillAppear;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (void)willDisplay;
- (void)updateModel:(id)a0;
- (double)currentTimeInterval;
- (void)viewWillDisappear;

@end
