@interface FlowUIKit.DismissBackgroundView : FlowUIKit.AutoCallSetupView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_tap;
    void /* unknown type, empty encoding */ onPressed;
}

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)handleTap:(id)a0;

@end
