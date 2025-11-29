@class WXVideoSlider, UIView, UIImageView, NSMutableDictionary, WCC2CPlayerRateLabel, MMUILabel, MMUIButton, MMTimer;
@protocol WCC2CPlayerProgressBarDelegate;

@interface WCC2CPlayerProgressBar : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUIButton *playButton;
@property (retain, nonatomic) MMUILabel *currentTimeLabel;
@property (retain, nonatomic) UIImageView *separatorLine;
@property (retain, nonatomic) MMUILabel *totalTimeLabel;
@property (retain, nonatomic) MMUILabel *playingTipsLabel;
@property (retain, nonatomic) WCC2CPlayerRateLabel *playRateLabel;
@property (retain, nonatomic) WXVideoSlider *videoSlider;
@property (retain, nonatomic) MMUILabel *currentTimeLabelForTracking;
@property (retain, nonatomic) UIImageView *separatorLineForTracking;
@property (retain, nonatomic) MMUILabel *totalTimeLabelForTracking;
@property (retain, nonatomic) MMTimer *progressUpdateTimer;
@property (nonatomic) BOOL isSliderScrubbing;
@property (nonatomic) double totalTime;
@property (nonatomic) unsigned long long updateTimerCount;
@property (weak, nonatomic) id<WCC2CPlayerProgressBarDelegate> m_delegate;
@property (nonatomic) BOOL bForbidAutoHidden;
@property (nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) NSMutableDictionary *palette;

- (id)initWithSuper:(id)a0 totalTime:(double)a1;
- (id)initWithSuper:(id)a0 totalTime:(double)a1 palette:(id)a2;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updatePalette:(id)a0;
- (void)setWantsExtendedDynamicRangeContent:(BOOL)a0;
- (void)updateCurrentTimeLabel:(double)a0;
- (void)updateTotalTime:(double)a0;
- (void)updatePlayingTips:(id)a0;
- (void)onPlayStart;
- (void)startProgressUpdate;
- (void)onPlayStop;
- (void)resetPlayRateIfNeed;
- (void)resetPlayRate;
- (void)onFocused:(BOOL)a0;
- (void)updateProgress;
- (void)onClickPlayButton;
- (void)onSliderScrubbBegin;
- (void)onSliderChange;
- (void)onSliderScrubbEnd;
- (void)handlePanGesture:(id)a0;
- (void).cxx_destruct;

@end
