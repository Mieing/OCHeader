@interface FlowKitBizUI.FlowFontAdjustSlider : UISlider {
    void /* unknown type, empty encoding */ fontLevels;
    void /* unknown type, empty encoding */ previousValue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapGesture;
    void /* unknown type, empty encoding */ onValueChanged;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stantardLevelLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_minImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maxImageView;
}

@property (nonatomic) float value;

- (void)sliderDidTapped:(id)a0;
- (void)sliderDidChangeValue:(id)a0;
- (void)sliderDidTouchDown:(id)a0;
- (void)sliderDidTouchUp:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
