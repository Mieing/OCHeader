@class NSString, UIScreenEdgePanGestureRecognizer, MinimizeEdgeGestureHandler, MinimizeNewTransitionController;

@interface EcsGiftNavigationController : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, MinimizationNewTransitionDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler;
@property (retain, nonatomic) MinimizeNewTransitionController *transitionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupTransitionController;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)a0;
- (id)getMinimizationTransitionContext;
- (id)customDefaultAnimationForTransition:(unsigned int)a0;
- (void).cxx_destruct;

@end
