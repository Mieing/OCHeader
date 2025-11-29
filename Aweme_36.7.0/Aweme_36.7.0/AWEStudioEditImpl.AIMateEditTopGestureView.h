@interface AWEStudioEditImpl.AIMateEditTopGestureView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ downwardPan;
    void /* unknown type, empty encoding */ designatedTap;
    void /* unknown type, empty encoding */ isPossibleHandling;
    void /* unknown type, empty encoding */ panThreshold;
    void /* unknown type, empty encoding */ directionRatio;
}

- (void)handleDownwardPan:(id)a0;
- (void)handleDesignatedTap:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
