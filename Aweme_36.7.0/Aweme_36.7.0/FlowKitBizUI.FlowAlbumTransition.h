@interface FlowKitBizUI.FlowAlbumTransition : NSObject <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ interactionController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ targetView;
    void /* unknown type, empty encoding */ albumService;
    void /* unknown type, empty encoding */ presentedVC;
    void /* unknown type, empty encoding */ targetStyle;
    void /* unknown type, empty encoding */ finalStyle;
    void /* unknown type, empty encoding */ albumIdentifiers;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ isInteractive;
    void /* unknown type, empty encoding */ presenting;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blackBackgroundView;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)interactionControllerForPresentation:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
