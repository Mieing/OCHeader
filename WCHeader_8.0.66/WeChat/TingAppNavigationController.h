@class NSString, UIScreenEdgePanGestureRecognizer, MinimizeEdgeGestureHandler, MinimizeNewTransitionController;

@interface TingAppNavigationController : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, MinimizationNewTransitionDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler;
@property (retain, nonatomic) MinimizeNewTransitionController *transitionController;
@property (nonatomic) int lastPresentedScene;
@property (nonatomic) BOOL lastPresentedFullPlayer;
@property (nonatomic) BOOL presentFromTingApp;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (retain, nonatomic) NSString *identifier;

+ (BOOL)shouldUsePushTransitionFromScene:(int)a0;

- (void)setupTransitionController;
- (void)setupLastScene:(int)a0 shouldPresentFullPlayer:(BOOL)a1;
- (BOOL)edgeGestureShouldBegin;
- (id)systemDismissTransitionWithInteracting:(BOOL)a0;
- (BOOL)useNewMinimizeTransition:(id)a0 withTransitionType:(unsigned int)a1;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)a0;
- (id)getMinimizationTransitionContext;
- (id)customDefaultAnimationForTransition:(unsigned int)a0;
- (void)onMinimizeTransitionEnd:(unsigned int)a0 isComplete:(BOOL)a1;
- (void)onMinimizationNewTransitionStart:(id)a0 withContext:(id)a1;
- (void)onMinimizationNewTransitionEnd:(id)a0 withContext:(id)a1 isComplete:(BOOL)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
