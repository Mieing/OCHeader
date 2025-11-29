@class UIColor, NSArray, NSString, NSNumberFormatter, BU_ASValuePopUpView;
@protocol BU_ASValueTrackingSliderDelegate;

@interface BU_ASValueTrackingSlider : UISlider <BU_ASValuePopUpViewDelegate> {
    NSNumberFormatter *_numberFormatter;
    UIColor *_popUpViewColor;
    NSArray *_keyTimes;
    double _valueRange;
}

@property (retain, nonatomic) BU_ASValuePopUpView *popUpView;
@property (nonatomic) BOOL popUpViewAlwaysOn;
@property (retain, nonatomic) UIColor *popUpViewColor;
@property (retain, nonatomic) NSArray *popUpViewAnimatedColors;
@property (nonatomic) double popUpViewCornerRadius;
@property (nonatomic) double popUpViewArrowLength;
@property (nonatomic) double popUpViewWidthPaddingFactor;
@property (nonatomic) double popUpViewHeightPaddingFactor;
@property (nonatomic) BOOL autoAdjustTrackColor;
@property (weak, nonatomic) id<BU_ASValueTrackingSliderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentValueOffset;
- (void)colorDidUpdate:(id)a0;
- (void)setPopUpViewAnimatedColors:(id)a0 withPositions:(id)a1;
- (id)keyTimesFromSliderPositions:(id)a0;
- (void)_showPopUpViewAnimated:(BOOL)a0;
- (void)_hidePopUpViewAnimated:(BOOL)a0;
- (void)updatePopUpView;
- (void)didBecomeActiveNotification:(id)a0;
- (void)showPopUpViewAnimated:(BOOL)a0;
- (void)hidePopUpViewAnimated:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRect;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setMinimumValue:(float)a0;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)setMinimumTrackTintColor:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setImage:(id)a0;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)setValue:(float)a0;
- (void)layoutSubviews;
- (void)setup;
- (void)didMoveToWindow;
- (void)setMaximumValue:(float)a0;

@end
