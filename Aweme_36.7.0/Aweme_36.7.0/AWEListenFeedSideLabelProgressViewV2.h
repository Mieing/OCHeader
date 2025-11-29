@class AWEAwemeModel, UIView, UIImage, NSString, AWEListenFeedProgressIndicator, AWEListenFeedSideLabelProgressSlider, NSMutableArray, UILabel;
@protocol AWEListenFeedProgressViewDelegate;

@interface AWEListenFeedSideLabelProgressViewV2 : UIView <AWEListenFeedProgressViewProtocol>

@property (retain, nonatomic) AWEListenFeedSideLabelProgressSlider *progressSlider;
@property (retain, nonatomic) UIView *progressCenterYView;
@property (retain, nonatomic) UILabel *currentTime;
@property (retain, nonatomic) UILabel *remainTime;
@property (retain, nonatomic) UIView *gestureView;
@property (retain, nonatomic) UIView *progressContainerView;
@property (retain, nonatomic) UILabel *progressChapterLabel;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) AWEListenFeedProgressIndicator *indicator;
@property (retain, nonatomic) NSMutableArray *chapterList;
@property (retain, nonatomic) UIImage *thumbImageNormal;
@property (retain, nonatomic) UIImage *thumbImageStrong;
@property (nonatomic) BOOL isNormalStatus;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) double totalTime;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL hasHaptic;
@property (nonatomic) double gestureStartSliderValue;
@property (weak, nonatomic) id<AWEListenFeedProgressViewDelegate> delegate;
@property (readonly, nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)progressSliderValueChanged:(id)a0;
- (id)formateDuration:(double)a0;
- (void)updateProgressSliderToNormal;
- (BOOL)shouldAdaptLargeFontV2;
- (void)updateCurrentTime:(double)a0 totalTime:(double)a1;
- (void)updateChapterInfoWithModel:(id)a0;
- (void)updateCurrentTimeWithoutAnimation:(id)a0;
- (void)updateProgressSliderToStrong;
- (void)setSliderDragEnabled:(BOOL)a0;
- (void)p_feedback;
- (void)handleAccessibilityWithIncrease:(BOOL)a0;
- (void)_updateChapterPointView;
- (id)generalProgressAccessibilityLabel:(double)a0 current:(double)a1;
- (id)generalProgressAccessibilityValue:(double)a0;
- (void)sliderProgressSliderTouchEnded:(id)a0;
- (id)formateDuration:(double)a0 forceAlign:(BOOL)a1;
- (void)tapGestureUpdateSliderValue:(id)a0;
- (void)sliderProgressSliderTouchEnded:(id)a0 isSingleTouch:(BOOL)a1;
- (void)_updateIndicatorWithPlayProgress:(double)a0;
- (void)updateSliderValueWithGesture:(id)a0;
- (void)sliderProgressSliderTouchBegan:(id)a0;
- (id)fontForLabel:(id)a0;
- (double)currentRatio;
- (void).cxx_destruct;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;
- (void)handleTapGesture:(id)a0;

@end
