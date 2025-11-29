@interface FlowKitBizUI.ElasticArrowView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ maxPullHeight;
    void /* unknown type, empty encoding */ elasticFactor;
    void /* unknown type, empty encoding */ handlePullUpGesture;
    void /* unknown type, empty encoding */ handleTapGesture;
    void /* unknown type, empty encoding */ arrowImageView;
    void /* unknown type, empty encoding */ allowedRegion;
    void /* unknown type, empty encoding */ targetView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGesture;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
