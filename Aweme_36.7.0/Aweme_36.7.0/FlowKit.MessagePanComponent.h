@interface FlowKit.MessagePanComponent : FlowCommon.TightCouplingComponent <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ $__lazy_storage_$_slideInGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_slideOutGestureRecognizer;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ inTransition;
    void /* unknown type, empty encoding */ outTransition;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)interactionControllerForPresentation:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)slideInGesture:(id)a0;
- (void)slideOutGesture:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
