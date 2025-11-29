@interface FlowKitBizUI.FailedRetryView : UIView {
    void /* unknown type, empty encoding */ retryImageView;
    void /* unknown type, empty encoding */ messageLabel;
    void /* unknown type, empty encoding */ delegate;
}

- (void)retryImageViewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
