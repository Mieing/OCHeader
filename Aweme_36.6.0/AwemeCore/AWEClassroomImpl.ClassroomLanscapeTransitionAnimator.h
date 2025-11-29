@interface AWEClassroomImpl.ClassroomLanscapeTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ animationType;
    void /* unknown type, empty encoding */ transform;
    void /* unknown type, empty encoding */ transformView;
    void /* unknown type, empty encoding */ snapshotView;
    void /* unknown type, empty encoding */ targetFrame;
    void /* unknown type, empty encoding */ originFrame;
    void /* unknown type, empty encoding */ orientationAngle;
}

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
