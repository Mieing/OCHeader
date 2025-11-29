@interface FlowKitBizUI.FlowEditorDefaultTransition : NSObject <UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ fadeInAnimator;
    void /* unknown type, empty encoding */ fadeOutAnimator;
    void /* unknown type, empty encoding */ coverAnimator;
}

- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;

@end
