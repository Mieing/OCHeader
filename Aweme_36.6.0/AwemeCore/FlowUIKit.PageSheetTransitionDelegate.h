@interface FlowUIKit.PageSheetTransitionDelegate : NSObject <UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ presentedViewController;
    void /* unknown type, empty encoding */ presentControl;
    void /* unknown type, empty encoding */ dismissControl;
    void /* unknown type, empty encoding */ transitionBGView;
    void /* unknown type, empty encoding */ wantsInteractiveDismiss;
    void /* unknown type, empty encoding */ config;
}

- (void).cxx_destruct;
- (id)init;
- (id)interactionControllerForPresentation:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;

@end
