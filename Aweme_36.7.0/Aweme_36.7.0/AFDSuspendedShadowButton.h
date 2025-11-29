@interface AFDSuspendedShadowButton : UIButton {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ iconViewImage;
    void /* unknown type, empty encoding */ displayWidth;
    void /* unknown type, empty encoding */ lightBackgroundColor;
    void /* unknown type, empty encoding */ darkBackgroundColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_icon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shadow1View;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shadow2View;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hightlightMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_adaptiveIconWidth;
    void /* unknown type, empty encoding */ $__lazy_storage_$_adaptiveHeight;
}

@property (nonatomic) BOOL highlighted;

- (id)initWithText:(id)a0 icon:(id)a1 lightBackgroundColor:(id)a2 darkBackgroundColor:(id)a3;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithText:(id)a0 icon:(id)a1;

@end
