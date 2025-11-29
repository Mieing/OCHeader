@interface SwiftyMidas.DefaultTitleBar : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_divider;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ outerTextColor;
}

@property (class, nonatomic, readonly) BOOL requiresConstraintBasedLayout;

- (void)traitCollectionDidChange:(id)a0;
- (void)backButtonDidClicked;
- (void)closeButtonDidClicked;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
