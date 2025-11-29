@class NSMutableArray, UISelectionFeedbackGenerator, NSArray, UIView, UILabel, AWEListenFeedValueAdjustViewSlider;
@protocol AWEListenFeedValueAdjustViewDelegate;

@interface AWEListenFeedValueAdjustView : UIView

@property (retain, nonatomic) AWEListenFeedValueAdjustViewSlider *adjustSlider;
@property (retain, nonatomic) UIView *sliderBackgroundView;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSMutableArray *markLabelArray;
@property (retain, nonatomic) UISelectionFeedbackGenerator *generator;
@property (nonatomic) double currentSliderValue;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) NSArray *marksArray;
@property (weak, nonatomic) id<AWEListenFeedValueAdjustViewDelegate> delegate;
@property (nonatomic) double absorbThresold;
@property (nonatomic) double step;
@property (nonatomic) double firstSlidePartZoomScale;
@property (nonatomic) unsigned long long style;

- (void)actionTapGesture:(id)a0;
- (void)refreshSubviews;
- (void)setSliderValueWithSpeed:(double)a0;
- (double)usableSliderValue;
- (double)getFeedAdaptiveSizeWithValue:(double)a0 exemptDowngrade:(BOOL)a1;
- (void)setupSliderValue:(double)a0 animated:(BOOL)a1;
- (double)usableSliderValueWithCeil;
- (id)getThumbImage;
- (void)setupAdapterSize;
- (id)labelNameOf:(double)a0;
- (void)setValueLabelText:(id)a0;
- (struct CGPoint { double x0; double x1; })positionFromSliderValue;
- (double)calculateTranformValue:(double)a0;
- (double)positionXForValue:(double)a0;
- (void)adaptValueLabelFontIfNeeded:(id)a0 withValue:(id)a1;
- (void)triggerImpact;
- (void)adaptValueLabelFontIfNeeded:(id)a0;
- (void)triggerImpactIfNeed;
- (BOOL)absorbPostionIfNeed;
- (void)adjustSliderValueChanged:(id)a0;
- (void)adjustSliderTouchBegan:(id)a0;
- (void)adjustSliderTouchEnded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setIsAccessibilityElement:(BOOL)a0;
- (void)setupUI;
- (void)buildConstraints;

@end
