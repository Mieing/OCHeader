@interface FlowProfileBizUI.FlowTitleButton : UIButton {
    void /* unknown type, empty encoding */ colors;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_icon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_btnTitle;
}

@property (nonatomic) BOOL enabled;

- (void)touchUpInside;
- (void)touchUpOutside;
- (void)touchCancel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (void)touchDown;

@end
