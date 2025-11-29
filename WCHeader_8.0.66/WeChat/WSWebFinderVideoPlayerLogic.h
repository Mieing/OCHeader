@class WCPlayerPlayArgs, NSString, WCPlayerView;

@interface WSWebFinderVideoPlayerLogic : WSWebNativeVideoPlayerLogic <WCPlayerControlProtocol>

@property (retain, nonatomic) WCPlayerView *retainPlayerView;
@property (retain, nonatomic) WCPlayerPlayArgs *playerPlayArgs;
@property (weak, nonatomic) WCPlayerView *playerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewId:(unsigned int)a0 andPlayerPlayArgs:(id)a1 andDelegate:(id)a2;
- (void)dealloc;
- (id)createPlayerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)stop;
- (void)destroy;
- (void)setPlayerContentMode:(long long)a0;
- (void)setMuted:(BOOL)a0;
- (void)setLoop:(BOOL)a0;
- (void)seek:(double)a0;
- (void)onAudioFirstFrameRendered;
- (void)onVideoFristFrameRendered;
- (void)onVideoPrepareToPlay:(id)a0;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void)onVideoDidPlayToEndTime;
- (void)onDownloadProgressChange:(id)a0 finishLength:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onReceiveAllVideoData:(id)a0;
- (void)updateVideoBufferPercent:(double)a0;
- (void)updateVideoCurrentTime:(double)a0;
- (void)onPlayerProcessStateChanged:(unsigned long long)a0;
- (void)onPlayerStateChanged:(unsigned long long)a0;
- (void).cxx_destruct;

@end
