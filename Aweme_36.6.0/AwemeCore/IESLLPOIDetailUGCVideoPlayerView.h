@class NSString, IESLLPOIDetailVideosPreviewPauseIcon, UIView, IESLLPOIVideoPlayerCore, UIViewController;
@protocol IESLLLoadingParticleViewInterface, IESLLPOIDetailUGCVideoPlayerDelegate;

@interface IESLLPOIDetailUGCVideoPlayerView : UIView <IESVideoPlayerDelegate>

@property (retain, nonatomic) IESLLPOIVideoPlayerCore *playerView;
@property (retain, nonatomic) IESLLPOIDetailVideosPreviewPauseIcon *pauseIcon;
@property (retain, nonatomic) UIView<IESLLLoadingParticleViewInterface> *loadingView;
@property (nonatomic) BOOL isPauseByUser;
@property (nonatomic) BOOL isReadyForDisplay;
@property (weak, nonatomic) UIViewController *vc;
@property (weak, nonatomic) id<IESLLPOIDetailUGCVideoPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)handleAppEnterForeground;
- (void)handleAppEnterBackground;
- (void)setPlayerCustomHeader:(id)a0;
- (void)setupNotification;
- (void)addPeriodicTimeObserver;
- (void)resetLoadingView;
- (void)handleWindowResignKey;
- (void)handleWindowBecomeKey;
- (void)playerSeekTo:(double)a0;
- (void)makeConstrains;
- (void)tryAutoPause;
- (void)tryAutoPlay;
- (double)playDurationWithProgress:(double)a0 totalDuration:(double)a1;
- (double)progressWithPlayDuration:(double)a0 totalDuration:(double)a1;
- (void)updatePlayURLs:(id)a0 videoID:(id)a1;
- (void)playerWillLoopPlaying:(id)a0;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)playerState;
- (void)dealloc;
- (void)setMute:(BOOL)a0;
- (void)setupUI;
- (void)prepareToPlay;
- (void)showLoadingView;
- (void)didTap;
- (void)resetPlayer;

@end
