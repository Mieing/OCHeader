@class UILabel, UIColor;
@protocol AWESliderDelegate;

@interface AWESlider : UISlider

@property (retain, nonatomic) UILabel *indicatorLabel;
@property (weak, nonatomic) id<AWESliderDelegate> delegate;
@property (nonatomic) double indicatorLabelBotttomMargin;
@property (nonatomic) BOOL showIndicatorLabel;
@property (copy, nonatomic) id /* block */ valueDisplayBlock;
@property (retain, nonatomic) UIColor *indicatorLabelTextColor;

- (void)sliderTouchUp:(id)a0;
- (void)valueChanged:(id)a0 forEvent:(id)a1;
- (void)updateIndicatorLabelDisplayAndFrame;
- (void)updateIndicatorLabelDisplay;
- (void)updateIndicatorLabelFrame;
- (void)sliderValueChanged:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setMinimumValue:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sliderTouchDown:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)accessibilityIncrement;
- (void)setValue:(float)a0;
- (void)layoutSubviews;
- (void)setMaximumValue:(float)a0;
- (void)setEnabled:(BOOL)a0;
- (void)handleValueChanged;

@end
