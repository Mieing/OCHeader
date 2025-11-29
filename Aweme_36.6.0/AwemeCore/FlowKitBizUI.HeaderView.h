@interface FlowKitBizUI.HeaderView : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gotoButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gotoSourceImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gotoSourceLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ gotoURL;
}

- (void)configureLayout;
- (void)closeButtonDidPress:(id)a0;
- (void)gotoButtonDidPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
