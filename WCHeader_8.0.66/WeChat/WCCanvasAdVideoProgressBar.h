@class MMUILabel, MMTimer, WXVideoSlider, UIView, UIButton;
@protocol WCCanvasAdVideoProgressBarDelegate;

@interface WCCanvasAdVideoProgressBar : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *operateButton;
@property (retain, nonatomic) MMUILabel *currentTimeLabel;
@property (retain, nonatomic) MMUILabel *totalTimeLabel;
@property (retain, nonatomic) WXVideoSlider *videoSlider;
@property (retain, nonatomic) UIButton *voiceBtn;
@property (retain, nonatomic) UIButton *fullScreenBtn;
@property (retain, nonatomic) MMTimer *progressUpdateTimer;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isMinimized;
@property (nonatomic) BOOL isSliderScrubbing;
@property (nonatomic) double totalTime;
@property (nonatomic) unsigned long long playerMode;
@property (weak, nonatomic) id<WCCanvasAdVideoProgressBarDelegate> m_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andPlayerMode:(unsigned long long)a1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)updateTotalTime:(double)a0;
- (void)setAudioBtnState:(BOOL)a0;
- (void)setFullScreenBtnState:(BOOL)a0;
- (void)setFullScreenBtnVisible:(BOOL)a0;
- (BOOL)isAudioOn;
- (BOOL)isFullScreen;
- (BOOL)isPlayBtnOn;
- (void)setAudioBtn:(BOOL)a0;
- (void)updateCurrentTimeLabel:(double)a0;
- (void)onSliderChange;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)onVoiceIconBtnClick;
- (void)onFullscreenButtonClick;
- (void)onOperationBtnClick;
- (void)updateProgress;
- (BOOL)isBtnValid;
- (BOOL)isVideoExist;
- (BOOL)ignoreEdgeInset;
- (BOOL)canSlider;
- (void).cxx_destruct;

@end
