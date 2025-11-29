@interface FlowKitBizUI.FlowCustomPopoversBubbleTipsView : UIView {
    void /* unknown type, empty encoding */ maxContentWidth;
    void /* unknown type, empty encoding */ horizontalPadding;
    void /* unknown type, empty encoding */ verticalPadding;
    void /* unknown type, empty encoding */ screenBoundSafeDistance;
    void /* unknown type, empty encoding */ downImageSize;
    void /* unknown type, empty encoding */ closeButtonSize;
    void /* unknown type, empty encoding */ titleLineHeight;
    void /* unknown type, empty encoding */ contentLineHeight;
    void /* unknown type, empty encoding */ maxFontSize;
    void /* unknown type, empty encoding */ minFontSize;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ isShowed;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shadowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shadowLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_upImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_container;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
}

- (void)dissmissView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
