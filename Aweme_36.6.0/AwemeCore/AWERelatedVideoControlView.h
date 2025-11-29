@class AWEAwemeModel, UILongPressGestureRecognizer, AWERVDetailPageContext, NSString, AWEGradientView, AWEVideoPlayControllerDispatchManager, AWEElementContainer, UIPanGestureRecognizer, UIViewController;
@protocol AWERelatedVideoControlViewDelegate, AWEDemaciaContainerProtocol;

@interface AWERelatedVideoControlView : UIView <UIGestureRecognizerDelegate, AWEVideoPlayerLifeCycleProtocol>

@property (weak, nonatomic) UIViewController<AWEDemaciaContainerProtocol> *viewController;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEGradientView *bottomBarGradientView;
@property (retain, nonatomic) AWEElementContainer *topContainer;
@property (retain, nonatomic) AWEElementContainer *middleContainer;
@property (retain, nonatomic) AWEElementContainer *bottomContainer;
@property (retain, nonatomic) AWEVideoPlayControllerDispatchManager *dispatchManagerAboveBaseUI;
@property (retain, nonatomic) AWEVideoPlayControllerDispatchManager *dispatchManagerBelowBaseUI;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWERelatedVideoControlViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)onPlayerPlay:(id)a0 ifPlay:(BOOL)a1;
- (void)onPlayerPause:(id)a0;
- (void)onPlayerAddPeriodicTimeObserverCallback:(id)a0;
- (BOOL)reachEnd;
- (void)bindEvent;
- (void)setupDispatcherManager;
- (id)danmakuController;
- (BOOL)shouldBlockGesture:(id)a0 touch:(id)a1;
- (BOOL)shouldResponseRecognizer:(id)a0;
- (void)switchLoadingModel:(BOOL)a0;
- (BOOL)enterImmersionMode;
- (void)exitImmersionMode;
- (void)updateWithVideoType:(BOOL)a0;
- (void)initContainer;
- (void)registerTopElement;
- (void)registerMiddleElement;
- (void)registerBottomElement;
- (void)updateAllElementWithHide:(BOOL)a0;
- (void)switchPlayFailedMode:(BOOL)a0;
- (void)resetPlayNextReminderView;
- (void)switchLagLoadingModel:(BOOL)a0 needDelay:(BOOL)a1;
- (id)getAllControllerOrderByHierarchy;
- (id)getGradientView:(BOOL)a0;
- (id)initWithViewController:(id)a0 pageContext:(id)a1;
- (void)showScreenCastControlView:(id)a0;
- (void)refreshPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2 forceUpdate:(BOOL)a3 animated:(BOOL)a4;
- (void)handlePauseChangePlaying:(BOOL)a0;
- (void)handlePlayChangePlaying:(BOOL)a0;
- (BOOL)shouldResponseTapRecognizer:(id)a0;
- (void)updateUserInteractive:(BOOL)a0;
- (void)dismissPaymentMaskViewAndReplay;
- (id)progressSliderController;
- (void)viewDidAppear;
- (void)handlePan:(id)a0;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;

@end
