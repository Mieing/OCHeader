@class UIView, DUXBaseImageView, ACCEditSingleVideoSliderView, ACCCameraSubscription, ACCEditSingleVideoFakeProgressView, CAGradientLayer, UIPanGestureRecognizer, UILabel, ACCEditSingleVideoPlayControlConfig;

@interface ACCEditSingleVideoProgressView : UIView

@property (retain, nonatomic) ACCEditSingleVideoSliderView *progressSlider;
@property (retain, nonatomic) ACCEditSingleVideoFakeProgressView *fakeProgressSlider;
@property (retain, nonatomic) UIView *progressSliderUnderView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL needAdapt;
@property (nonatomic) BOOL isSliding;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) BOOL isHandleGesture;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) UIView *progressLabelView;
@property (retain, nonatomic) UILabel *progressLeftLabel;
@property (retain, nonatomic) UILabel *progressRightLabel;
@property (retain, nonatomic) DUXBaseImageView *lineImageView;
@property (nonatomic) double minTime;
@property (nonatomic) double maxTime;
@property (nonatomic) BOOL isAdaptForSecondaryPage;
@property (nonatomic) BOOL isDisabled;
@property (retain, nonatomic) ACCEditSingleVideoPlayControlConfig *config;

- (void)progressSliderValueChanged:(id)a0;
- (void)updateProgressSliderToNormal;
- (void)updateProgressSliderToWakeUp;
- (id)strongDefaultThumbImage;
- (id)defaultThumbImage;
- (void)progressSliderTouchEnded:(id)a0 bySlideScreen:(BOOL)a1;
- (void)showFakeSliderIfNeeded;
- (void)restoreToNormalWhenTouchEnd;
- (void)progressSliderTouchEnded;
- (double)progressSliderHorizontalInset;
- (void)addFakeProgressSliderIfNeeded;
- (void)setMinTime:(double)a0 maxTime:(double)a1;
- (void)setPlayTime:(double)a0 animated:(BOOL)a1;
- (id)maximumTrackColor;
- (id)minimumTrackColor;
- (void)adaptForSecondaryPage;
- (double)progressBarNormalHeight;
- (double)progressBarUnderHeight;
- (id)initWithScreenAdapt:(BOOL)a0 config:(id)a1;
- (void)disableRespondToPanGesture:(BOOL)a0;
- (void)addGradientMaskLayer;
- (id)secondaryPageThumbImage;
- (id)secondaryPageDefaultMinimumTrackColor;
- (id)secondaryPageDefaultMaximumTrackColor;
- (void)refreshLabelValue:(id)a0;
- (void)reloadMaskViewWithHeight:(double)a0;
- (id)secondaryPageWakeUpMinimumTrackColor;
- (id)secondaryPageWakeUpMaximumTrackColor;
- (void)progressSliderPanGesture:(id)a0;
- (void)progressSliderTouchBegan:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)setupUI;

@end
