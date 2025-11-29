@class MiniTaskTransitionContext, MiniTaskTransitionHelper, NSString, MiniTaskNavEdgeGestureHandler, MultiTaskPageActionInfo, MultiTaskItemPageBrowseInfo;

@interface MiniTaskNavigationController : MMWebNavigationController <MiniTaskTransitionAnimationDelegate, MiniTaskEdgeGestureHandlerDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) MiniTaskTransitionHelper *animationLogic;
@property (retain, nonatomic) MiniTaskNavEdgeGestureHandler *leftEdgeGestureHandler;
@property (retain, nonatomic) MiniTaskNavEdgeGestureHandler *rightEdgeGestureHandler;
@property (nonatomic) BOOL shouldAutoRotate;
@property (retain, nonatomic) MiniTaskTransitionContext *transitionContext;
@property (retain, nonatomic) MultiTaskItemPageBrowseInfo *pageBrowseInfo;
@property (retain, nonatomic) MultiTaskPageActionInfo *pageActionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setRootViewController:(id)a0;
- (id)leftEdgePanGestureRecognizer;
- (id)rightEdgePanGestureRecognizer;
- (void)setupNaviGestureHandlers;
- (void)setupLeftScreenEdgeGestureHandler;
- (void)setupRightScreenEdgeGestureHandler;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)didBecomeActive;
- (void)willResignActive;
- (BOOL)shouldAutorotate;
- (BOOL)shouldMiniInteractiveTransitionBegin:(id)a0;
- (void)onMiniInteractiveTransitionBegin:(id)a0;
- (void)onMiniInteractiveTransitionChanged:(id)a0 progress:(double)a1 translation:(struct CGPoint { double x0; double x1; })a2;
- (void)onMiniInteractiveTransitionWillEnd:(id)a0 isComplete:(BOOL)a1;
- (void)onMiniInteractiveTransitionDidEnd:(id)a0 isComplete:(BOOL)a1;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForPresentation:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)onTransitionEnd:(id)a0 isComplete:(BOOL)a1 isInteracting:(BOOL)a2;
- (void).cxx_destruct;

@end
