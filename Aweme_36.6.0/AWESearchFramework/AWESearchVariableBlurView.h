@interface AWESearchVariableBlurView : UIVisualEffectView {
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ $__lazy_storage_$_variableBlurFilter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientLayer;
    void /* unknown type, empty encoding */ gradientMaskImage;
}

@property (nonatomic) float blurRadius;

- (void)awe_themeDidChange:(long long)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)a0;
- (id)initWithEffect:(id)a0;
- (void)layoutSubviews;
- (id)initWithDirection:(long long)a0;

@end
