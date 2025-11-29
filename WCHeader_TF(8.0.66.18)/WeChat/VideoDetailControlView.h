@class CAGradientLayer, MMMediaBrowserReporter, NSString, SightIconView, UIView, WCC2CPlayerProgressBar;
@protocol VideoDetailControlViewDelegate;

@interface VideoDetailControlView : WCPlayerControlView <WCC2CPlayerProgressBarDelegate>

@property (retain, nonatomic) UIView *bottomBkgView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *operateContentView;
@property (retain, nonatomic) SightIconView *loadingIconView;
@property (nonatomic) unsigned int scrubbBeginProgress;
@property (retain, nonatomic) MMMediaBrowserReporter *mediaBrowserReporter;
@property (retain, nonatomic) NSString *mediaId;
@property (nonatomic) BOOL isSyncSaveingData;
@property (weak, nonatomic) id<VideoDetailControlViewDelegate> delegate;
@property (retain, nonatomic) WCC2CPlayerProgressBar *progressBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (BOOL)isHDRVideo;
- (void)updateProgressBarColor:(BOOL)a0;
- (void)changeToShowDownloadPercent;
- (void)hiddenDownloadPercent;
- (void)setOperateToolView:(BOOL)a0;
- (void)setProgress:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onProgressBarHidden;
- (void)onProgressBarChangePlayRate:(float)a0 currentPlayRate:(float)a1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)a0;
- (void)onSliderSeekToTime:(float)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getCurrentPlaybackTime;
- (id)onPlayButtonExpose;
- (void)onPlayButtonClicked;
- (id)onPlayRateExpose;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPrepareToPlay:(id)a0;
- (void)updateVideoCurrentTime:(double)a0;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)onDownloadProgressChange:(id)a0 finishLength:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onReceiveAllVideoData:(id)a0;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void).cxx_destruct;

@end
