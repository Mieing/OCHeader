@class UILabel, UIColor;
@protocol RxInjector, RTVFeedSliderDelegate;

@interface RTVSlider : UISlider

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) UILabel *indicatorLabel;
@property (nonatomic) double indicatorLabelBotttomMargin;
@property (retain, nonatomic) UIColor *indicatorLabelTextColor;
@property (weak, nonatomic) id<RTVFeedSliderDelegate> delegate;
@property (nonatomic) BOOL showIndicatorLabel;
@property (copy, nonatomic) id /* block */ valueDisplayBlock;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__configComponents;
- (void)sliderTouchUp:(id)a0;
- (void)__valueChanged:(id)a0 forEvent:(id)a1;
- (void)__updateIndicatorLabelDisplayAndFrame;
- (void)__updateIndicatorLabelDisplay;
- (void)__updateIndicatorLabelFrame;
- (void)sliderValueChanged:(id)a0;
- (void).cxx_destruct;
- (void)setMinimumValue:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setValue:(float)a0;
- (void)layoutSubviews;
- (void)setMaximumValue:(float)a0;
- (void)setEnabled:(BOOL)a0;
- (id)accessibilityValue;

@end
