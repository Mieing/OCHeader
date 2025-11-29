@interface AWENoticeSwiftBizUI.InteractionNoticeVideoCoverContainerView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ currentConfig;
    void /* unknown type, empty encoding */ coverViewTapHandler;
    void /* unknown type, empty encoding */ gestureShouldRequireFailureBlock;
    void /* unknown type, empty encoding */ reuseId;
    void /* unknown type, empty encoding */ $__lazy_storage_$_singleVideoCoverView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_multiVideoCoverView;
}

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)coverViewTappedWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
