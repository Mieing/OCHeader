@interface AWEInteractionCommentElementReplacementAnimator : NSObject <AWEInteractionElementReplacementAnimationProtocol> {
    void /* unknown type, empty encoding */ showAnimator;
    void /* unknown type, empty encoding */ dismissAnimator;
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ replacementView;
    void /* unknown type, empty encoding */ originAnchorPoint;
    void /* unknown type, empty encoding */ originAlpha;
    void /* unknown type, empty encoding */ originFrame;
}

- (void)beginAnimationWithTarget:(id)a0 replacementView:(id)a1;
- (void)dismissAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;

@end
