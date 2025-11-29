@class AWEAwemeModel, NSString, NSArray, AWEMVChannelPlayerCardContext, AWEMVChannelPlayerCardElementConfigs, AWEGradientView, AWEMVChannelPlayerCardElementContainer, UIViewController, UIPanGestureRecognizer, AWEMVChannelPlayerCardDispatchManager;
@protocol AWEMVChannelPlayVideoViewControllerProtocol, AWEMVChannelPlayerCardInteractionViewDelegate;

@interface AWEMVChannelPlayerCardInteractionView : UIView <AWEMVChannelPlayerCardDispatchProtocol, AWEMVChannelPlayerCardContainerProtocol, UIGestureRecognizerDelegate, AWEMVChannelPlayerCardDispatchProtocol, AWEMVChannelPlayerCardPlayerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEMVChannelPlayerCardElementConfigs *elementConfigs;
@property (nonatomic) long long state;
@property (nonatomic) long long lastState;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (weak, nonatomic) UIViewController<AWEMVChannelPlayVideoViewControllerProtocol> *viewController;
@property (retain, nonatomic) AWEMVChannelPlayerCardElementContainer *bottomContainer;
@property (retain, nonatomic) AWEMVChannelPlayerCardElementContainer *topContainer;
@property (retain, nonatomic) AWEMVChannelPlayerCardDispatchManager *dispatchManagerAboveBaseUI;
@property (retain, nonatomic) AWEMVChannelPlayerCardDispatchManager *dispatchManagerBelowBaseUI;
@property (retain, nonatomic) AWEMVChannelPlayerCardContext *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (copy, nonatomic) NSArray *gestureList;
@property (weak, nonatomic) id<AWEMVChannelPlayerCardInteractionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (id)containerList;
- (BOOL)shouldFailedGestureRecognizer:(id)a0;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (void)bindEvents;
- (void)updateState:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleResponseLongPressAction:(id)a0;
- (BOOL)hasRespondedGestureRecognizer:(id)a0;
- (void)handleResponsePanAction:(id)a0;
- (void)setupDispatchManager;
- (void)configContainers;
- (void)updateContainersWithModel:(id)a0;
- (void)progressViewDidTouchEnded;
- (void)configBeforeEnterLandscape;
- (void)configAfterQuitLandscape;
- (void)prepareBeforeTransition;
- (void)configAfterBackFromTransition;
- (void)willShowActiveViewInVisibleRange;
- (void)configAfterUpdatePlayerControllerInWindowPlayStatus;
- (void)player:(id)a0 willLoading:(BOOL)a1;
- (BOOL)shouldBlockGestureCardState;
- (void)setupGesturesWithTargetView:(id)a0;
- (void)updateContainersState:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewController:(id)a1 context:(id)a2;
- (void)playerWillLoopPlaying:(id)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateWithModel:(id)a0;

@end
