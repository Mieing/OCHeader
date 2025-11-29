@interface AWECommentMediaFeedSwfitImpl.CommentPinchGuideAnimationView : UIView <AWECommentPinchGuideAnimationViewProtocol> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lottieView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hintLabel;
    void /* unknown type, empty encoding */ isPlaying;
}

- (void)playAnimationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
