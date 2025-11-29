@class NSTimer, WCFinderLiveReplaySliderBar, MMUIButton, MMUILabel;
@protocol WCFinderLiveReplayProgressBarDelegate;

@interface WCFinderLiveReplayProgressBar : UIView

@property (retain, nonatomic) MMUIButton *operateButton;
@property (retain, nonatomic) MMUILabel *currentTimeLabel;
@property (retain, nonatomic) MMUILabel *totalTimeLabel;
@property (retain, nonatomic) WCFinderLiveReplaySliderBar *sliderBar;
@property (retain, nonatomic) NSTimer *progressUpdateTimer;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isSliderScrubbing;
@property (nonatomic) double totalTime;
@property (nonatomic) unsigned int totalUIntTime;
@property (nonatomic) unsigned int displayTotalTime;
@property (nonatomic) long long timeDisplayFormat;
@property (nonatomic) unsigned int currentTime;
@property (nonatomic) unsigned int timeLimit;
@property (readonly, nonatomic) unsigned int totalDisplayUIntTime;
@property (readonly, nonatomic) BOOL enableShowControlWidgets;
@property (weak, nonatomic) id<WCFinderLiveReplayProgressBarDelegate> m_delegate;
@property (copy, nonatomic) id /* block */ sliderBarFrameChangeCallback;
@property (copy, nonatomic) id /* block */ greateTimeDotExposeCallback;
@property (nonatomic) BOOL hideOperationButtonInPortrait;

+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutOperateButton;
- (BOOL)needShowOperateButton;
- (void)updateOperateButton;
- (void)layoutCurrentTimeLabel;
- (void)updateCurrentTimeLabelOrigin;
- (void)layoutTotalTimeLabel;
- (void)updateTotalTimeLabelOrigin;
- (void)layoutSliderBar;
- (void)updateSliderBarOrigin;
- (void)hideControlWidgets;
- (void)showControlWidgets;
- (void)updateCurrentTimeLabel:(double)a0;
- (void)updateProgress;
- (void)updateTimeLabelSize:(struct CGSize { double x0; double x1; })a0;
- (void)onSliderScrubbingChanged;
- (void)onStopButtonClick;
- (void)onPlayButtonClick;
- (void)onSliderChange;
- (void)onSliderScrubbBegin:(unsigned long long)a0;
- (void)onSliderScrubbEnd:(unsigned long long)a0;
- (void)updateTotalTime:(double)a0;
- (void)updateDisplayTotalTime:(unsigned int)a0;
- (void)updateTotalTimeLabel:(unsigned long long)a0;
- (void)updateCurrentTime:(unsigned int)a0;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)clearSrc;
- (void)beginExternalProgressManipulation;
- (void)endExternalProgressManipulation;
- (double)timeForValue:(float)a0;
- (float)valueForTime:(double)a0;
- (double)getPreviewViewCenterXWithTime:(double)a0;
- (void)updateGreatTimeList:(id)a0;
- (void)invokePlayButtonClick;
- (void)invokeStopButtonClick;
- (void)reportForGreateTimeDotExpose;
- (void).cxx_destruct;

@end
