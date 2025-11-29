@class MinimizationTransitionContext, NSString, UIScreenEdgePanGestureRecognizer, MinimizeEdgeGestureHandler, MinimizePanGestureHandler, UIPanGestureRecognizer, UIViewController;
@protocol MinimizeNewTransitionControllerDelegate, UIViewControllerAnimatedTransitioning;

@interface MinimizeNewTransitionController : NSObject <MinimizeEdgeGestureHandlerDelegate, MinimizePanGestureHandlerDelegate, UIGestureRecognizerDelegate, MinimizationNewTransitionDelegate, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIViewController *taskViewController;
@property (retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler;
@property (retain, nonatomic) MinimizePanGestureHandler *panGesHandler;
@property (retain, nonatomic) MinimizationTransitionContext *transitioningContext;
@property (weak, nonatomic) id<UIViewControllerAnimatedTransitioning> currentTransition;
@property (nonatomic) BOOL isMinimizeCircleInteracting;
@property (nonatomic) BOOL isHitMinimizeCircleArea;
@property (nonatomic) BOOL isPerformingExtraAnimation;
@property (weak, nonatomic) id<MinimizeNewTransitionControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)interactionControllerForDismissal:(id)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (id)animationControllerForTrasitionType:(unsigned int)a0 fromVC:(id)a1 toVC:(id)a2;
- (void)onEdgeInteractiveTransitionBegin:(id)a0;
- (void)onEdgeInteractiveTransitionChanged:(id)a0 progress:(double)a1 translation:(struct CGPoint { double x0; double x1; })a2;
- (void)onEdgeInteractiveTransitionWillEnd:(id)a0 isComplete:(BOOL)a1;
- (void)onEdgeInteractiveTransitionDidEnd:(id)a0 isComplete:(BOOL)a1;
- (double)transitionProgressConvertedFromGestureProgress:(double)a0;
- (void)onPanInteractiveTransitionBegin:(id)a0;
- (void)onPanInteractiveTransitionChanged:(id)a0 progress:(double)a1 translation:(struct CGPoint { double x0; double x1; })a2;
- (void)onPanInteractiveTransitionWillEnd:(id)a0 isComplete:(BOOL)a1;
- (void)onPanInteractiveTransitionDidEnd:(id)a0 isComplete:(BOOL)a1;
- (double)transitionProgressConvertedFromPanGestureProgress:(double)a0;
- (void)performCompleteMinimizeAnimation;
- (void)performRecoverMinimizeAnimiation;
- (void)onMinimizationNewTransitionStart:(id)a0 withContext:(id)a1;
- (void)onMinimizationNewTransitionEnd:(id)a0 withContext:(id)a1 isComplete:(BOOL)a2;
- (unsigned int)decideTransitionTypeWithAnimationController:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)activeInteractiveTransition;
- (BOOL)isInteractiveTransitioning;
- (BOOL)isInteractiveTransitioningWithEdgeGesture;
- (BOOL)isInteractiveTransitioningWithPanGesture;
- (void).cxx_destruct;

@end
