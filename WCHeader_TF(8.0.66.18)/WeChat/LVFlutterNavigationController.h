@class NSString, UIScreenEdgePanGestureRecognizer, MinimizeEdgeGestureHandler, MinimizeNewTransitionController;

@interface LVFlutterNavigationController : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, MinimizationNewTransitionDelegate, LVLandscapeTransitionDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler;
@property (retain, nonatomic) MinimizeNewTransitionController *transitionController;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (nonatomic) BOOL minizeWithPanStart;
@property (nonatomic) BOOL minizeWithPan;
@property (nonatomic) BOOL hasPrepared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)playerDetailViewController;
- (void)setupMinimizeTransitionController;
- (void)setupMinimizeTransitionGesture;
- (void)prepareMinimize:(id)a0;
- (id)minimizeContext;
- (id)makeMinimizeContext:(BOOL)a0;
- (BOOL)enterFromMinimize;
- (BOOL)pendingMinimize;
- (void)deactiveMinimize:(BOOL)a0 force:(BOOL)a1;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)a0;
- (void)onMinimizeTransitionBeginWithoutContext;
- (BOOL)useNewMinimizeTransition:(id)a0 withTransitionType:(unsigned int)a1;
- (id)customDefaultAnimationForTransition:(unsigned int)a0;
- (id)getMinimizationTransitionContext;
- (BOOL)isMinimizeTransitioning;
- (void)onMinimizeTransitionWillEnd:(unsigned int)a0 isComplete:(BOOL)a1;
- (void)onLVLandscapeTransitionStart:(id)a0;
- (void)onLVLandscapeTransitionEnd:(id)a0 transitionType:(unsigned long long)a1 isComplete:(BOOL)a2;
- (void)onMinimizationNewTransitionStart:(id)a0 withContext:(id)a1;
- (void)onMinimizationNewTransitionEnd:(id)a0 withContext:(id)a1 isComplete:(BOOL)a2;
- (void).cxx_destruct;

@end
