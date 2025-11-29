@interface AWEStudioSwiftBasic.HorizontalToolBarExpandPanel : UIView {
    void /* unknown type, empty encoding */ contentTopOffset;
    void /* unknown type, empty encoding */ contentLeftRightMargin;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dismissView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ contentViewTopConstraint;
    void /* unknown type, empty encoding */ willDismiss;
    void /* unknown type, empty encoding */ isShowing;
}

- (void)onDismiss:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
