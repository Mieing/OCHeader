@interface WeChat.TextStateFriendSquareTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ transitionType;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ animator;
    void /* unknown type, empty encoding */ completion;
}

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animationEnded:(BOOL)a0;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
