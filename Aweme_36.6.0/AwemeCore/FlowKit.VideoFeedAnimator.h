@interface FlowKit.VideoFeedAnimator : NSObject <UIViewControllerInteractiveTransitioning, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ animationInfo;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ presenting;
    void /* unknown type, empty encoding */ localMessageId;
    void /* unknown type, empty encoding */ videoIndex;
    void /* unknown type, empty encoding */ panGesture;
    void /* unknown type, empty encoding */ dismissCompletion;
    void /* unknown type, empty encoding */ cancelDismissCompletion;
    void /* unknown type, empty encoding */ presentationWillStart;
    void /* unknown type, empty encoding */ presentationDidEnd;
    void /* unknown type, empty encoding */ updateAnimationInfo;
    void /* unknown type, empty encoding */ presentedWrapperView;
    void /* unknown type, empty encoding */ transitionContext;
    void /* unknown type, empty encoding */ dimmingView;
}

- (void)handleDismissPanGesture:(id)a0;
- (void)startInteractiveTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;

@end
