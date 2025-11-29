@class NSString, BDPVideoBottomView, UIImageView, BDPVideoPlayerModel, UIButton, BDPScreenCastHelpCircleView, BDPVideoTopBar, UILabel;

@interface BDPScreenCastControlView : UIView

@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *connectedDeviceLabel;
@property (retain, nonatomic) UIButton *exitButton;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) BDPScreenCastHelpCircleView *circleView;
@property (retain, nonatomic) BDPVideoTopBar *topBar;
@property (retain, nonatomic) BDPVideoBottomView *bottomBar;
@property (retain, nonatomic) BDPVideoPlayerModel *playerModel;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL seekEnable;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) unsigned long long connectState;
@property (nonatomic) unsigned long long playState;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL controls;
@property (nonatomic) BOOL showPlayBtn;
@property (nonatomic) BOOL showFullscreenBtn;
@property (copy, nonatomic) id /* block */ exitScreenCastBlock;
@property (copy, nonatomic) id /* block */ screenModeChangeBlock;
@property (copy, nonatomic) id /* block */ playBtnActionBlock;
@property (copy, nonatomic) id /* block */ seekToProgressBlock;
@property (copy, nonatomic) id /* block */ startSeekBlock;

- (void)exitButtonClicked;
- (void)setupSeekEnable;
- (void)updateProgressWithCurrentTime:(double)a0 duration:(double)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)seekTo:(double)a0;

@end
