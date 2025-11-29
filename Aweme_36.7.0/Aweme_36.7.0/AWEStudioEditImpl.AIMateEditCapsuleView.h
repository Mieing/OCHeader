@interface AWEStudioEditImpl.AIMateEditCapsuleView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentStatus;
    void /* unknown type, empty encoding */ swipeGesture;
    void /* unknown type, empty encoding */ animator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_middleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_newPointView;
}

- (void)handleSwipeGesture;
- (void)handleTapBall;
- (void)handleTapRightView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
