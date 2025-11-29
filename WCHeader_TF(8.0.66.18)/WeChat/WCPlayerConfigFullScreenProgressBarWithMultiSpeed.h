@class WXVideoSlider, UIView, NSArray, UIImageView, NSMutableArray, WCPlayerConfigFullScreenProgressBarParams, MMUILabel, MMUIButton, MMTimer;

@interface WCPlayerConfigFullScreenProgressBarWithMultiSpeed : WCPlayerFullScreenProgressBarBase

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUILabel *currentTimeLabel;
@property (retain, nonatomic) UIImageView *separatorLine;
@property (retain, nonatomic) MMUILabel *totalTimeLabel;
@property (retain, nonatomic) WXVideoSlider *videoSlider;
@property (retain, nonatomic) MMTimer *progressUpdateTimer;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isMinimized;
@property (nonatomic) BOOL isStartTimeSetupFinish;
@property (nonatomic) double totalTime;
@property (readonly, nonatomic) BOOL hasGlowEffectplayRateButton;
@property (retain, nonatomic) NSMutableArray *customizeAccessibilityElements;
@property (retain, nonatomic) MMUIButton *playRateButton;
@property (retain, nonatomic) NSArray *supportedPlayRateArr;
@property (nonatomic) int curPlayRateIndex;
@property (retain, nonatomic) WCPlayerConfigFullScreenProgressBarParams *params;

- (id)initWithSuper:(id)a0 totalTime:(double)a1 delegate:(id)a2 params:(id)a3;
- (void)initSubviews;
- (id)accessibilityElements;
- (void)addPlayRateButtonGlowEffect;
- (float)getSliderHeight:(unsigned long long)a0;
- (id)getSliderDotImage:(unsigned long long)a0;
- (void)setProgressBarType:(unsigned long long)a0;
- (void)configureSliderDragingSizeAndLayout;
- (void)configureSliderNormalSizeAndLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0;
- (id)formatStrOfTime:(double)a0;
- (void)updateCurrentTimeLabel:(double)a0;
- (void)reloadSliderStartTime;
- (void)updateTotalTime:(double)a0;
- (float)currentProgress;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)dealloc;
- (void)playRatebuttonButtonTapped:(id)a0;
- (void)resetPlayRateButtonIfNeed;
- (void)resetPlayRate;
- (void)playRatebuttonHighlighted:(id)a0;
- (void)onSliderValueChanged;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)resetSliderToNMStatus;
- (void)resetSliderToHLStatus;
- (void)updateProgress;
- (void)_updateProgressWithoutAnimation;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handlePanGesture:(id)a0;
- (void).cxx_destruct;

@end
