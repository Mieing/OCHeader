@class IESLiveLightingRecordButton, NSString, UIView, UIImageView, IESLiveGCDTimer, IESLiveAnchorContractAVRecordParamModel, UIButton, AVPlayerLayer, UILabel, AVPlayer;
@protocol IESLiveAnchorContractAVRecordViewDelegate;

@interface IESLiveAnchorContractAVRecordView : UIView

@property (retain, nonatomic) IESLiveAnchorContractAVRecordParamModel *config;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *flipCameraButton;
@property (retain, nonatomic) UIView *textContainer;
@property (retain, nonatomic) UILabel *durationLimitTips;
@property (retain, nonatomic) UIButton *startRecordButton;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UIButton *uploadVideoButton;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) IESLiveLightingRecordButton *lightingRecordButton;
@property (nonatomic) int totalDuration;
@property (nonatomic) int currentDuration;
@property (copy, nonatomic) NSString *totalDurationStr;
@property (copy, nonatomic) NSString *currentDurationStr;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL currentIsFront;
@property (retain, nonatomic) UIImageView *guideWireFrameView;
@property (retain, nonatomic) AVPlayer *videoPlayer;
@property (retain, nonatomic) AVPlayerLayer *videoPlayerLayer;
@property (retain, nonatomic) UIButton *playButton;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) UIView *videoPlayerContainer;
@property (retain, nonatomic) UIButton *reTryButton;
@property (weak, nonatomic) id<IESLiveAnchorContractAVRecordViewDelegate> delegate;

- (void)playButtonDidClick;
- (void)backBtnDidClick;
- (void)stopVideoPlayback;
- (void)flipCameraDidClick;
- (void)startRecordDidClick;
- (void)stopRecordDidClick;
- (void)uploadVideoDidClick;
- (void)videoReTryButtonDidClick;
- (void)setupInitialDuration;
- (void)pauseVideoPlayback;
- (void)startVideoPlayback;
- (void)updateCurrentDuration;
- (void)changeUIWithType:(unsigned long long)a0;
- (BOOL)checkIfRecordingDurationNeedReRecord;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)setVideoURL:(id)a0;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)setupUI;
- (void)createTimer;
- (void)playerItemDidReachEnd:(id)a0;

@end
