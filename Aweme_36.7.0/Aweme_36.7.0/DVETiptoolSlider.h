@class NSString, DVECustomSlider, DVEBubbleView, NSMutableArray;
@protocol DVEBaseTooltipSliderDelegate;

@interface DVETiptoolSlider : UIControl

@property (retain, nonatomic) DVECustomSlider *slider;
@property (retain, nonatomic) DVEBubbleView *tiptoolView;
@property (retain, nonatomic) NSMutableArray *sliderNumbers;
@property (nonatomic) BOOL isTouchEvent;
@property (nonatomic) float step;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) float value;
@property (retain, nonatomic) NSString *tiptoolTextFloatValueFormat;
@property (weak, nonatomic) id<DVEBaseTooltipSliderDelegate> delegate;

- (void)updateValueByAddingPercentage:(double)a0;
- (void)setMinimumValue:(float)a0 maximumValue:(float)a1 value:(float)a2;
- (float)valueOfCurrentStep:(int)a0;
- (void)setCombinationValue:(struct DVESliderCombinationValue { float x0; float x1; float x2; })a0;
- (void)p_setupSliderTapAction;
- (void)sliderUpinside:(id)a0;
- (void)p_resetSliderNumbers;
- (unsigned long long)p_getRoundIntValue:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sliderValueThumbPosition:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sliderValueTrackPosition;
- (void)updateTiptoolPosition;
- (void)sliderValueChangedByTap:(id)a0;
- (void)setCombinationValue:(struct DVESliderCombinationValue { float x0; float x1; float x2; })a0 step:(float)a1;
- (void)sliderValueChanged:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)setThumbImage:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setMinimumTrackTintColor:(id)a0;
- (void)sliderTouchDown:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)accessibilityIncrement;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)accessibilityActivate;

@end
