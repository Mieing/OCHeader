@interface FlowKit.MessagePanTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ inGesture;
    void /* unknown type, empty encoding */ outGesture;
    void /* unknown type, empty encoding */ interactive;
    void /* unknown type, empty encoding */ startLocation;
    void /* unknown type, empty encoding */ lastLocation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMaskView;
    void /* unknown type, empty encoding */ subController;
    void /* unknown type, empty encoding */ interactiveContext;
}

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startInteractiveTransition:(id)a0;

@end
