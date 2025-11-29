@interface FlowUIKit.PageSheetAnimatedController : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ animator;
    void /* unknown type, empty encoding */ config;
}

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
