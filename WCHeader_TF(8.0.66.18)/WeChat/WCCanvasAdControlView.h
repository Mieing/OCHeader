@class MMTimer, WCCanvasAdVideoProgressBar, SightIconView, UIView, NSObject, NSString;
@protocol WCCanvasAdControlViewDelegate;

@interface WCCanvasAdControlView : WCPlayerControlView <SightIconViewDelegate, WCCanvasAdVideoProgressBarDelegate>

@property (nonatomic) BOOL withAudioButton;
@property (retain, nonatomic) MMTimer *autoHideControlViewTimer;
@property (nonatomic) unsigned long long playerMode;
@property (nonatomic) BOOL isBufferViewShow;
@property (nonatomic) BOOL ignoreEdgeInset;
@property (weak, nonatomic) NSObject<WCCanvasAdControlViewDelegate> *delegate;
@property (retain, nonatomic) UIView *toolPanView;
@property (retain, nonatomic) WCCanvasAdVideoProgressBar *progressBar;
@property (retain, nonatomic) SightIconView *iconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andPlayerMode:(unsigned long long)a1;
- (void)dealloc;
- (void)addSubviews;
- (void)setToolViewHidden:(BOOL)a0;
- (BOOL)isToolBarShow;
- (void)showPlayView;
- (void)hiddenIconView;
- (void)hideFullScreenBtn;
- (void)layoutSubviews;
- (void)onProgressEnd;
- (BOOL)needIgnoreEdgeInset;
- (BOOL)shouldHideVoiceBtn;
- (void)setProgress:(double)a0;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)updateVideoCurrentTime:(double)a0;
- (void)onTapSightIconView;
- (void)showDownloadPercentView;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)onVideoPrepareToPlay:(id)a0;
- (void)onVideoOperationBtnCLick:(BOOL)a0;
- (void)onSliderChangeTo:(float)a0;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)a0;
- (void)onVoiceBtnClick:(BOOL)a0;
- (void)onFullscreenBtnClick:(BOOL)a0;
- (void)onShowControllerView;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getCurrentPlaybackTime;
- (BOOL)isVideoExist;
- (BOOL)isBtnClickable;
- (void)onHideControllerView;
- (void)resetAutoHideTimer;
- (void)triggleToHideControlView;
- (void)onVideoProcessBarClick;
- (void)initSingleAndDoubleClick;
- (void)onSingleTap;
- (void)onDoubleTap;
- (void).cxx_destruct;

@end
