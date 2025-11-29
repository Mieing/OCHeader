@class CAGradientLayer, UIColor, UIFont, UIImage, CALayer, MJGradientConfiguration, CATextLayer;
@protocol MJPublisherSliderAccessibilityDelegate;

@interface MJPublisherSlider : UIControl

@property (nonatomic) BOOL isThumbTracking;
@property (nonatomic) float initialTrackingValue;
@property (nonatomic) float baseValue;
@property (retain, nonatomic) CALayer *sliderLayer;
@property (retain, nonatomic) CALayer *trackLayer;
@property (retain, nonatomic) CALayer *minimumTrackLayer;
@property (retain, nonatomic) CALayer *maximumTrackLayer;
@property (retain, nonatomic) CAGradientLayer *minimumTrackGradientLayer;
@property (retain, nonatomic) CAGradientLayer *maximumTrackGradientLayer;
@property (retain, nonatomic) CAGradientLayer *overrideTrackGradientLayer;
@property (retain, nonatomic) CALayer *thumbLayer;
@property (retain, nonatomic) CALayer *minimumImageLayer;
@property (retain, nonatomic) CALayer *maximumImageLayer;
@property (nonatomic) double trackPaddingWithImage;
@property (retain, nonatomic) CATextLayer *textLayer;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (retain, nonatomic) UIColor *minimumTrackTintColor;
@property (retain, nonatomic) UIColor *maximumTrackTintColor;
@property (retain, nonatomic) MJGradientConfiguration *minimumTrackGradient;
@property (retain, nonatomic) MJGradientConfiguration *maximumTrackGradient;
@property (retain, nonatomic) MJGradientConfiguration *trackGradient;
@property (retain, nonatomic) UIImage *minimumValueImage;
@property (retain, nonatomic) UIImage *maximumValueImage;
@property (nonatomic) double thickness;
@property (nonatomic) double thumbSize;
@property (retain, nonatomic) UIColor *thumbColor;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (nonatomic) BOOL isRelativeTracking;
@property (nonatomic) BOOL trackInteractionEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchEdgeInsets;
@property (retain, nonatomic) UIColor *valueTextColor;
@property (retain, nonatomic) UIFont *valueTextFont;
@property (weak, nonatomic) id<MJPublisherSliderAccessibilityDelegate> accessibilityDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)layoutSublayersOfLayer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sliderRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slidingRectForTrackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)tintColorDidChange;
- (void)updateValueWithTouch:(id)a0;
- (float)valueForTouchPoint:(struct CGPoint { double x0; double x1; })a0 withTrackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateThumbPosition:(BOOL)a0;
- (void)hideValue;
- (void)showValue;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void).cxx_destruct;

@end
