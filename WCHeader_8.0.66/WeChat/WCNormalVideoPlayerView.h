@class WCPlayerProgressBar, NSString, MMUIView, WCNetworkMediaCore, SightIconView, ImageBrowseButton;
@protocol WCNormalVideoPlayerViewDelegate;

@interface WCNormalVideoPlayerView : MMUIView <WCNetworkMediaCoreDelegate, VideoProgressBarDelegate, IVOIPUILogicMgrExt>

@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) MMUIView *controlView;
@property (retain, nonatomic) WCNetworkMediaCore *mediaCore;
@property (retain, nonatomic) ImageBrowseButton *closeButton;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) WCPlayerProgressBar *progressBar;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL hasStarted;
@property (weak, nonatomic) id<WCNormalVideoPlayerViewDelegate> playerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoUrl:(id)a1;
- (void)initMediaCore;
- (void)initView;
- (void)onSceenClicked;
- (void)onSightIconClick;
- (void)onCloseBtnClick;
- (void)layoutSubviews;
- (void)startPlay;
- (void)stopPlay;
- (void)pause;
- (void)dealloc;
- (void)onMediaCore:(id)a0 StateChange:(int)a1;
- (void)onMediaCore:(id)a0 CacheDarutionChange:(double)a1;
- (void)onMediaCore:(id)a0 DarutionUpdate:(double)a1;
- (void)onMediaCore:(id)a0 VideoSizeUpdate:(struct CGSize { double x0; double x1; })a1;
- (void)onProgressBarHidden;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onSliderChangeTo:(float)a0;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getCurrentPlaybackTime;
- (void)onVideoVoipViewDidAppear:(id)a0;
- (void).cxx_destruct;

@end
