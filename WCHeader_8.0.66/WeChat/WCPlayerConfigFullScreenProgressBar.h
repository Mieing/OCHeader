@class MMUILabel, MMTimer, WCPlayerConfigFullScreenProgressBarParams, UIView, WXHighlightableVideoSlider;

@interface WCPlayerConfigFullScreenProgressBar : WCPlayerFullScreenProgressBarBase

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUILabel *currentTimeLabel;
@property (retain, nonatomic) MMUILabel *totalTimeLabel;
@property (retain, nonatomic) WXHighlightableVideoSlider *videoSlider;
@property (retain, nonatomic) MMTimer *progressUpdateTimer;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isMinimized;
@property (nonatomic) BOOL isStartTimeSetupFinish;
@property (nonatomic) double totalTime;
@property (nonatomic) unsigned long long updateTimerCount;
@property (retain, nonatomic) WCPlayerConfigFullScreenProgressBarParams *params;

- (id)initWithSuper:(id)a0 totalTime:(double)a1 delegate:(id)a2 params:(id)a3;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0;
- (void)onClickAtBackgroud;
- (void)onFocused:(BOOL)a0;
- (void)updateCurrentTimeLabel:(double)a0;
- (void)reloadSliderStartTime;
- (void)updateTotalTime:(double)a0;
- (float)currentProgress;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)onStopButtonClick;
- (void)onPlayButtonClick;
- (void)onSliderValueChanged;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)resetSliderToNMStatus;
- (void)resetSliderToHLStatus;
- (void)updateProgress;
- (void)_updateProgressWithoutAnimation;
- (void)resetPlayRateButtonIfNeed;
- (void).cxx_destruct;

@end
