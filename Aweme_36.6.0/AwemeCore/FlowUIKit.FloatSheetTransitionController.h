@interface FlowUIKit.FloatSheetTransitionController : NSObject <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ dismissOnBackgroundTap;
    void /* unknown type, empty encoding */ dismissWithAnimation;
    void /* unknown type, empty encoding */ prefersGrabEnabled;
    void /* unknown type, empty encoding */ prefersGrabberVisible;
    void /* unknown type, empty encoding */ grabContentViewBackgroundColor;
    void /* unknown type, empty encoding */ preferredCornerRadius;
    void /* unknown type, empty encoding */ prefersEdgeScrollingEnabled;
    void /* unknown type, empty encoding */ prefersContentSizeChangeWhenScrolling;
    void /* unknown type, empty encoding */ shouldDimBackground;
    void /* unknown type, empty encoding */ shouldPassThroughBackgroundTouch;
    void /* unknown type, empty encoding */ customDimingBackgroundColor;
    void /* unknown type, empty encoding */ backgroundColor;
    void /* unknown type, empty encoding */ containerMaskToBounds;
    void /* unknown type, empty encoding */ detents;
    void /* unknown type, empty encoding */ selectedDetentIndex;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lifecycleDelegate;
    void /* unknown type, empty encoding */ shouldTriggerLayoutAfterSizeChange;
    void /* unknown type, empty encoding */ transitionController;
    void /* unknown type, empty encoding */ dismissalTapGesture;
    void /* unknown type, empty encoding */ grabberPanGesture;
    void /* unknown type, empty encoding */ sortedDetents;
    void /* unknown type, empty encoding */ presentedViewController;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ presentedView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ dimmingView;
    void /* unknown type, empty encoding */ sheetContainer;
    void /* unknown type, empty encoding */ grabber;
    void /* unknown type, empty encoding */ beginLocationY;
    void /* unknown type, empty encoding */ scrollingOnEdgeState;
    void /* unknown type, empty encoding */ dismissalReason;
    void /* unknown type, empty encoding */ initialVerticalScrollIndicatorVisible;
}

- (void)handleScrollViewPan:(id)a0;
- (void)handleDismissalTap:(id)a0;
- (void)handleGrabberPan:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
