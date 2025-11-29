@class MMUILabel, MMTimer, WXVideoSlider, UIView, UIButton;
@protocol VideoProgressBarDelegate;

@interface VideoProgressBar : UIView

@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *operateButton;
@property (retain, nonatomic) MMUILabel *currentTimeLabel;
@property (retain, nonatomic) MMUILabel *totalTimeLabel;
@property (retain, nonatomic) WXVideoSlider *videoSlider;
@property (retain, nonatomic) MMTimer *progressUpdateTimer;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isMinimized;
@property (nonatomic) BOOL isSliderScrubbing;
@property (nonatomic) double totalTime;
@property (nonatomic) unsigned long long updateTimerCount;
@property (weak, nonatomic) id<VideoProgressBarDelegate> m_delegate;
@property (nonatomic) BOOL bForbidAutoHidden;

- (id)initWithSuper:(id)a0 totalTime:(double)a1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0;
- (void)onClickAtBackgroud;
- (void)onFocused:(BOOL)a0;
- (BOOL)isDenyHiddenProgressBar;
- (void)updateCurrentTimeLabel:(double)a0;
- (void)updateTotalTime:(double)a0;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)onStopButtonClick;
- (void)onPlayButtonClick;
- (void)onSliderChange;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)updateProgress;
- (void).cxx_destruct;

@end
