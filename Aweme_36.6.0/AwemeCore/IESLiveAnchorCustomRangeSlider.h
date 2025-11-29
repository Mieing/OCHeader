@class IESLiveAnchorCustomRangeSliderConfig, UIImageView, UIView, UILabel;

@interface IESLiveAnchorCustomRangeSlider : UIView

@property (retain, nonatomic) IESLiveAnchorCustomRangeSliderConfig *sliderConfig;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *sliderTitleLabel;
@property (retain, nonatomic) UIImageView *minusIcon;
@property (retain, nonatomic) UIImageView *increaseIcon;
@property (retain, nonatomic) UIView *trackView;
@property (retain, nonatomic) UIView *highlightedTrackView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIView *defaultIndicatorView;
@property (nonatomic) double thumbWidth;
@property (nonatomic) double sliderHeight;
@property (nonatomic) long long currentValue;

- (id)initWithConfig:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)minusViewTapped;
- (void)increaseViewTapped;
- (void)addInitConstraint;
- (void)updateThumbPosition;
- (void)updateDefaultIndicatorPosition;
- (void)changeValueWithStep:(long long)a0 increase:(BOOL)a1;
- (double)convertToNormalizedValue:(long long)a0;
- (double)getPositionWithValue:(double)a0;
- (void).cxx_destruct;
- (void)setValue:(long long)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;

@end
