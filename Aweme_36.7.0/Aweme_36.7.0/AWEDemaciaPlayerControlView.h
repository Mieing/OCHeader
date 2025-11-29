@class CAGradientLayer, AWEDemaciaPlayerProgressSlider, UIProgressView, NSString, UIView, UILabel, UIButton;
@protocol AWEDemaciaPlayerControlViewDelegate;

@interface AWEDemaciaPlayerControlView : UIView <AWEDemaciaPlayerControlView>

@property (nonatomic) double totalTime;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (weak, nonatomic) id<AWEDemaciaPlayerControlViewDelegate> delegate;
@property (nonatomic) long long viewMode;
@property (nonatomic) long long rotateMode;
@property (nonatomic) long long frameMode;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isSlidering;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (retain, nonatomic) UIButton *fullScreenButton;
@property (retain, nonatomic) UIButton *replayBtn;
@property (retain, nonatomic) UILabel *replayTipLabel;
@property (retain, nonatomic) AWEDemaciaPlayerProgressSlider *progressSlider;
@property (retain, nonatomic) UIProgressView *bufferProgressView;
@property (nonatomic) double dragTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playBtnClick:(id)a0;
- (void)progressSliderValueChanged:(id)a0;
- (BOOL)reachEnd;
- (void)hideFullScreenBtn:(BOOL)a0;
- (void)showReplayBtn:(BOOL)a0;
- (id)formateDuration:(id)a0;
- (void)relayoutWithMode;
- (void)refreshPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)topBottomBarOpacity:(double)a0;
- (void)progressSliderTouchBegan:(id)a0;
- (void)progressSliderTouchEnded:(id)a0;
- (void).cxx_destruct;
- (id)imageNamed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
