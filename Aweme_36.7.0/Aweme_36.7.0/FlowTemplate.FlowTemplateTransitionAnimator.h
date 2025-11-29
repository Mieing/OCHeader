@interface FlowTemplate.FlowTemplateTransitionAnimator : NSObject <UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ transitionType;
    void /* unknown type, empty encoding */ animatedType;
    void /* unknown type, empty encoding */ transitionDuration;
    void /* unknown type, empty encoding */ interactivePopVC;
    void /* unknown type, empty encoding */ interactiveTransitionContext;
    void /* unknown type, empty encoding */ interactiveDrapDistance;
    void /* unknown type, empty encoding */ interactiveLastDrapDistance;
    void /* unknown type, empty encoding */ fromTabbar;
    void /* unknown type, empty encoding */ fromTabbarView;
    void /* unknown type, empty encoding */ fromTabbarFrame;
    void /* unknown type, empty encoding */ $__lazy_storage_$_customPopGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_interactiveMaskView;
}

@property (nonatomic, readonly) BOOL wantsInteractiveStart;

- (void)startInteractiveTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)handleCustomInteractivePopWithGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
