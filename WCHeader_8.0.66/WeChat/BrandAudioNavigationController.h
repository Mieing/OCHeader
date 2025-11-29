@class NSString, UIScreenEdgePanGestureRecognizer, MinimizeEdgeGestureHandler, MinimizeNewTransitionController;

@interface BrandAudioNavigationController : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasAppeared;
@property (retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler;
@property (retain, nonatomic) MinimizeNewTransitionController *transitionController;
@property (nonatomic) int lastPresentedScene;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (retain, nonatomic) NSString *identifier;

- (void)setupTransitionController;
- (BOOL)edgeGestureShouldBegin;
- (BOOL)useNewMinimizeTransition:(id)a0 withTransitionType:(unsigned int)a1;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)a0;
- (id)getMinimizationTransitionContext;
- (id)customDefaultAnimationForTransition:(unsigned int)a0;
- (void)onMinimizeTransitionEnd:(unsigned int)a0 isComplete:(BOOL)a1;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForPresentation:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;

@end
