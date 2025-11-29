@class UIView, NSString, AWEButton, AWEListenFeedValueAdjustView, AWEListenFeedContext, DUXSwitch, DUXCheckBox, UILabel, AWEListenFeedAccessibilityView;
@protocol AWEListenFeedValueAdjustPopupViewDelegate;

@interface AWEListenFeedValueAdjustPopupView : AWEFeedBasePopupView <UIGestureRecognizerDelegate, AWEListenFeedValueAdjustViewDelegate>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEButton *closePopupButton;
@property (retain, nonatomic) AWEListenFeedAccessibilityView *speedSwitchContainerView;
@property (retain, nonatomic) UILabel *speedSwitchLabel;
@property (retain, nonatomic) DUXSwitch *speedSwitch;
@property (retain, nonatomic) AWEListenFeedAccessibilityView *closeAfterCompletionSwitchContainerView;
@property (retain, nonatomic) UILabel *closeAfterCompletionLabel;
@property (retain, nonatomic) DUXSwitch *closeAfterCompletionSwitch;
@property (retain, nonatomic) DUXCheckBox *closeAfterCompletionBox;
@property (readonly, nonatomic) BOOL isTime;
@property (retain, nonatomic) AWEListenFeedValueAdjustView *sliderView;
@property (weak, nonatomic) id<AWEListenFeedValueAdjustPopupViewDelegate> delegate;
@property (retain, nonatomic) UIView *titleView;
@property (nonatomic) BOOL hasMovedSlider;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEListenFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listenFeedTimePopupView;
+ (id)listenFeedSpeedPopupViewWithCurrentSpeed:(double)a0;

- (id)initWithContentViewHeight:(double)a0;
- (void)setupSliderViewValue:(double)a0 animated:(BOOL)a1;
- (void)configStyle:(unsigned long long)a0;
- (void)refreshSubviews;
- (void)handleEdgeLeftGesture:(id)a0;
- (void)showSpeedSwitchGuideIfNeed;
- (void)refreshTitleViewWithSliderValue:(double)a0;
- (double)getFeedAdaptiveSizeWithValue:(double)a0 exemptDowngrade:(BOOL)a1;
- (void)remakeForTimeClose;
- (void)remakeForSpeedSwitchView;
- (BOOL)useNewSpeedOptimize;
- (void)resetCompletionBox;
- (void)trackSpeedSwitchChange:(BOOL)a0;
- (void)closeAfterCompletionBoxChanged;
- (id)sliderView:(id)a0 markLabelNameOf:(double)a1;
- (double)sliderView:(id)a0 calculateTranformValue:(double)a1;
- (void)sliderView:(id)a0 adjustSliderTouchBegan:(id)a1;
- (void)sliderView:(id)a0 adjustSliderTouchEnded:(id)a1;
- (void)sliderView:(id)a0 adjustSliderValueChanged:(id)a1;
- (void)sliderView:(id)a0 adjustSliderTapped:(id)a1;
- (double)sliderView:(id)a0 tapValueMapFrom:(double)a1;
- (void)showAtView:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)show;
- (void)showInView:(id)a0;
- (void)setupUI;
- (double)currentSliderValue;
- (void)buildConstraints;

@end
