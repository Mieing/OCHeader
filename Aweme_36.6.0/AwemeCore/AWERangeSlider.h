@class UIColor, UIView;

@interface AWERangeSlider : AWESlider

@property (retain, nonatomic) UIView *defaultIndicator;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *backgroundTrackView;
@property (nonatomic) BOOL showDefaultIndicator;
@property (nonatomic) BOOL enableSliderAdsorbToDefault;
@property (nonatomic) double defaultIndicatorPosition;
@property (nonatomic) double minimumAdsorptionDistance;
@property (nonatomic) double originPosition;
@property (retain, nonatomic) UIColor *rangeMinimumTrackColor;
@property (retain, nonatomic) UIColor *rangeMaximumTrackColor;

- (void)updateRange;
- (void)rangeSliderValueChange:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setValue:(float)a0;
- (void)handleValueChanged;

@end
