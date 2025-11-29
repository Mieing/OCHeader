@interface FlowKitBizUI.LightboxTransition : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGestureRecognizer;
    void /* unknown type, empty encoding */ interactive;
    void /* unknown type, empty encoding */ dismissing;
    void /* unknown type, empty encoding */ initialOrigin;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ lightboxController;
    void /* unknown type, empty encoding */ wrapperView;
    void /* unknown type, empty encoding */ interactiveContext;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)interactionControllerForPresentation:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startInteractiveTransition:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
