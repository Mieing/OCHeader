@class CAGradientLayer, BDPVideoSliderView, NSString, UILabel, NSNumber, UIButton;

@interface BDPVideoBottomView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (retain, nonatomic) UIButton *playBtn;
@property (retain, nonatomic) UIButton *fullScreenBtn;
@property (retain, nonatomic) UIButton *muteBtn;
@property (retain, nonatomic) UIButton *playSpeedBtn;
@property (retain, nonatomic) UIButton *definitionBtn;
@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (retain, nonatomic) UILabel *separateLabel;
@property (retain, nonatomic) BDPVideoSliderView *sliderView;
@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic) BOOL canShowFullScreenBtn;
@property (nonatomic) BOOL canShowPlayBackRateBtn;
@property (nonatomic) BOOL canShowMuteBtn;
@property (nonatomic) BOOL canShowDefinitionBtn;
@property (nonatomic) BOOL canShowPlayBtn;
@property (nonatomic) BOOL canShowProgress;
@property (nonatomic) BOOL isScreenCast;
@property (nonatomic) BOOL fullScreen;
@property (nonatomic) BOOL seekEnable;
@property (copy, nonatomic) NSString *speed;
@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSNumber *direction;
@property (copy, nonatomic) id /* block */ playBtnAction;
@property (copy, nonatomic) id /* block */ startSeekBlock;
@property (copy, nonatomic) id /* block */ playSpeedAction;
@property (copy, nonatomic) id /* block */ muteChangeAction;
@property (copy, nonatomic) id /* block */ seekTimeBlock;
@property (copy, nonatomic) id /* block */ seekingToProgress;
@property (copy, nonatomic) id /* block */ screenModeChangeAction;
@property (copy, nonatomic) id /* block */ definitionChangeAction;

- (void)updateUILayout;
- (void)setScreenCastType:(BOOL)a0;
- (void)setCacheProgress:(double)a0 animated:(BOOL)a1;
- (void)updateTimeWithCurrentTime:(double)a0 totalTime:(double)a1;
- (void)adjustPlayBtnImageWithState:(unsigned long long)a0;
- (void)playBtnClick;
- (void)fullScreenBtnAction;
- (void)muteBtnAction;
- (void)playSpeedBtnAction;
- (void)definitionBtnAction;
- (id)timeStrWithTime:(double)a0;
- (void)updateCanShowProgress;
- (void)updateCanShowButton;
- (void)updateNormalUILayout;
- (void)updatePortraitUILayout;
- (void)updateLandScapeUILayout;
- (void)adjustFullScreen:(BOOL)a0 direction:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (void)updateWithModel:(id)a0;

@end
