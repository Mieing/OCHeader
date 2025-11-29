@class IESLiveCircleProgressView, IESLiveSoloKTVGradientButton, IESLiveGCDTimer, UILabel, UIImage, UIButton;
@protocol IESLiveSoloKTVRecordControlDelegate;

@interface IESLiveSoloKTVRecordControlBar : UIView

@property (retain, nonatomic) IESLiveCircleProgressView *progressView;
@property (retain, nonatomic) IESLiveSoloKTVGradientButton *playPauseButton;
@property (retain, nonatomic) UIButton *originalButton;
@property (retain, nonatomic) UIButton *restartButton;
@property (retain, nonatomic) UIButton *tuneButton;
@property (nonatomic) long long songDuration;
@property (nonatomic) float progress;
@property (retain, nonatomic) UILabel *songTimeLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) IESLiveSoloKTVGradientButton *countDownButton;
@property (nonatomic) int countDownTime;
@property (nonatomic) int countDownTimeOrigin;
@property (retain, nonatomic) IESLiveGCDTimer *countDownTimer;
@property (retain, nonatomic) UIImage *recordPauseImage;
@property (retain, nonatomic) UIImage *recordPlayImage;
@property (retain, nonatomic) UIImage *originalOpenImage;
@property (retain, nonatomic) UIImage *originalCloseImage;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) long long scaleRatio;
@property (nonatomic) double centerButtonSize;
@property (nonatomic) double fourSideButtonSize;
@property (nonatomic) double fourSideViewWidth;
@property (nonatomic) double fourSideViewHeight;
@property (weak, nonatomic) id<IESLiveSoloKTVRecordControlDelegate> delegate;
@property (retain, nonatomic) UIButton *completeButton;
@property (nonatomic) BOOL supportOrigin;
@property (nonatomic) BOOL isPlaying;

- (void)startCountDown;
- (void)stopCountDown;
- (void)didClickComplete;
- (void)didClickRestart;
- (BOOL)isCountDown;
- (id)createGraientBtn;
- (void)didClickPlayPause;
- (void)updateButtonImageWithName:(id)a0 button:(id)a1;
- (void)didClickOriginal;
- (id)creatControlLabelWithTitle:(id)a0;
- (id)creatSingleControlViewWithButton:(id)a0 label:(id)a1;
- (void)didClickTuning;
- (void)updateOriginalStateWithIsOpen:(BOOL)a0;
- (id)initWithSongDuration:(long long)a0 needCountDownTime:(int)a1;
- (void)updateWithCurrentPlayTime:(double)a0;
- (void)updatePlayStateWithState:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadImage;
- (id)createAnimation;
- (void)setupUI;
- (void)updateDuration:(double)a0;

@end
