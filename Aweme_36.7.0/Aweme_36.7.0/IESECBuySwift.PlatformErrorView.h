@interface IESECBuySwift.PlatformErrorView : UIView {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subTitleLabel;
    void /* unknown type, empty encoding */ actionLabel;
    void /* unknown type, empty encoding */ closeView;
    void /* unknown type, empty encoding */ retryClickedCallback;
    void /* unknown type, empty encoding */ closeClickedCallback;
    void /* unknown type, empty encoding */ subTitleTopConstraint;
}

- (void)retry:(id)a0;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
