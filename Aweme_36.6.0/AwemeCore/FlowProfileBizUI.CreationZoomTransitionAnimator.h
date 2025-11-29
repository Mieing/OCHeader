@interface FlowProfileBizUI.CreationZoomTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ interactiveTransition;
    void /* unknown type, empty encoding */ isPresenting;
    void /* unknown type, empty encoding */ sourceInfo;
    void /* unknown type, empty encoding */ destinInfo;
    void /* unknown type, empty encoding */ wrapperView;
    void /* unknown type, empty encoding */ presentStartVcFrame;
    void /* unknown type, empty encoding */ sourceSnapShot;
    void /* unknown type, empty encoding */ maskView;
    void /* unknown type, empty encoding */ lastTransForm;
}

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
