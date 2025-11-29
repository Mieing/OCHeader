@class MMLivePlayerProgressBar, WCPlayerView, WCPlayerPlayArgs, WXFullScreenGestureRecognizer, MMLiveTaskId, WCPlayerConfigControlView, NSString, LiveInfo, MMUILabel, MMUIButton;

@interface MMLiveReplayViewController : MMCPUIViewController <FullScreenGestureDelegate, WCPlayerConfigDelegate, VideoProgressBarDelegate>

@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMLivePlayerProgressBar *progressBar;
@property (retain, nonatomic) WCPlayerView *hlsPlayer;
@property (retain, nonatomic) WCPlayerPlayArgs *playerInfo;
@property (retain, nonatomic) WCPlayerConfigControlView *controlView;
@property (retain, nonatomic) LiveInfo *liveInfo;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGesture;
@property (nonatomic) BOOL toolViewHidden;
@property (readonly, nonatomic) MMLiveTaskId *liveTaskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTask:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (void)setupHLSPlayer;
- (id)createHLSPlayerConfig;
- (id)createPlayerInfo;
- (void)layoutHeader;
- (void)startPlay;
- (void)stopPlay;
- (void)pause;
- (void)onCloseButtonClicked;
- (void)onProgressBarHidden;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getCurrentPlaybackTime;
- (void)onSliderChangeTo:(float)a0;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)a0;
- (void)onSightIconProgressEnd;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)a0;
- (void)onTapAttachButton:(id)a0;
- (void)onVideoPlay;
- (void)onToolViewAutoClose;
- (void)onVideoPause;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onGetVideoSize:(struct CGSize { double x0; double x1; })a0;
- (void)onShowBufferingView;
- (void)onHiddenBufferingView;
- (void)onFullScreenSingleTap;
- (void).cxx_destruct;

@end
