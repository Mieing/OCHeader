@class MMProgressViewEx, NSString, UIView, WCPlayerView;

@interface WCPlayerControlView : UIView <WCPlayerControlProtocol>

@property (retain, nonatomic) UIView *coverMask;
@property (retain, nonatomic) MMProgressViewEx *loadingView;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isBufferingViewLoading;
@property (nonatomic) unsigned long long loadingLocation;
@property (weak, nonatomic) WCPlayerView *playerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addWCPlayerSubview;
- (void)layoutSubviews;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)showPercentView;
- (void)hiddenPercentView;
- (void)onVideoSizeChange:(struct CGSize { double x0; double x1; })a0;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void)onVideoPrepareToPlay:(id)a0;
- (void)onVideoPlay;
- (void)onDataSourceChangeStart:(id)a0;
- (void)onDataSourceChangeSucc:(id)a0;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)a0;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)onReceiveAllVideoData:(id)a0;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void)updateVideoCurrentTime:(double)a0;
- (void)updateVideoTotalTime:(double)a0;
- (void)updateVideoBufferPercent:(double)a0;
- (void)onPlayerGetSeiInfo:(id)a0;
- (void)onCreateThumbImage:(id)a0;
- (void).cxx_destruct;

@end
