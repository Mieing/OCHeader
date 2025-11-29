@interface FlowKitBizUI.MessageLabelView : UIView {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ iconUrl;
    void /* unknown type, empty encoding */ iconUri;
    void /* unknown type, empty encoding */ preClickTime;
    void /* unknown type, empty encoding */ contentInsets;
    void /* unknown type, empty encoding */ imageInsets;
    void /* unknown type, empty encoding */ imageSize;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ avatar;
    void /* unknown type, empty encoding */ trailingView;
    void /* unknown type, empty encoding */ placeHolderView;
    void /* unknown type, empty encoding */ isTouchingInside;
    void /* unknown type, empty encoding */ didTouchUpInside;
}

- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
