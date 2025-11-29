@interface FlowKit.MessaingUnderedAWETransitionDelegate : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ messagingViewController;
    void /* unknown type, empty encoding */ aweContainerViewController;
    void /* unknown type, empty encoding */ dismissType;
    void /* unknown type, empty encoding */ navSnapView;
    void /* unknown type, empty encoding */ collectionSnapView;
    void /* unknown type, empty encoding */ presentVelocity;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dragPanGesture;
    void /* unknown type, empty encoding */ beginPoint;
    void /* unknown type, empty encoding */ willDragDismiss;
    void /* unknown type, empty encoding */ dragBgTop;
    void /* unknown type, empty encoding */ shouldDragPop;
    void /* unknown type, empty encoding */ listSnapView;
}

- (void)handlePan;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;

@end
