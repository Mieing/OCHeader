@interface DanceUILottie.AnimationCompletionDelegate : NSObject <CAAnimationDelegate> {
    void /* unknown type, empty encoding */ animationLayer;
    void /* unknown type, empty encoding */ animationKey;
    void /* unknown type, empty encoding */ ignoreDelegate;
    void /* unknown type, empty encoding */ animationState;
    void /* unknown type, empty encoding */ completionBlock;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;

@end
