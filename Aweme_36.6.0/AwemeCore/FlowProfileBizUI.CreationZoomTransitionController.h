@interface FlowProfileBizUI.CreationZoomTransitionController : NSObject <UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ interactiveTransition;
    void /* unknown type, empty encoding */ sourceInfo;
    void /* unknown type, empty encoding */ destinInfo;
    void /* unknown type, empty encoding */ sourceSnapShot;
}

- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;

@end
