@class NSString, UIImageView, UIView, TTVideoEnginePlayer, UIButton;
@protocol ACCPropGuideViewDelegate;

@interface ACCPropGuideView : UIView <TTVideoPlayerStateProtocol>

@property (retain, nonatomic) UIButton *skipBtn;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *playerContentView;
@property (retain, nonatomic) TTVideoEnginePlayer *player;
@property (nonatomic) long long loopTimes;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) double currentPlayTime;
@property (readonly, nonatomic) double videoDuration;
@property (weak, nonatomic) id<ACCPropGuideViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isShowing;

- (void)playerDidCreateKernelPlayer;
- (void)playerViewWillRemove;
- (void)playerVideoSizeChange;
- (void)playerVideoBitrateChanged:(long long)a0;
- (void)playerDeviceOpened:(long long)a0;
- (void)playerAudioRenderStart;
- (void)playerMediaInfoDidChanged:(long long)a0;
- (void)playerAVOutsyncStateChange:(long long)a0 pts:(long long)a1;
- (void)playerNOVARenderStateChange:(unsigned long long)a0 noRenderType:(int)a1;
- (void)playerStartTimeNoVideoFrame:(int)a0;
- (void)playerPreBuffering:(long long)a0;
- (void)playerOutleterPaused:(long long)a0;
- (void)playerBarrageMaskInfoCompleted:(long long)a0;
- (void)playbackDidFinish:(id)a0;
- (void)loadStateDidChange:(unsigned long long)a0 stallReason:(unsigned long long)a1;
- (void)playableDurationUpdate:(double)a0;
- (void)playerIsPrepared;
- (void)playerReadyToDisplay;
- (void)playerIsReadyToPlay;
- (void)skipBtnDidClick;
- (void)startVideoWithURL:(id)a0 cover:(id)a1 completion:(id /* block */)a2;
- (void)closePlay;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onWillResignActive;
- (void)onDidBecomeActive;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupSubviews;
- (void)setupPlayer;
- (void)playbackStateDidChange:(long long)a0;

@end
