@class NSString, WCFinderSimplePlayerView;

@interface FlutterThumbPlayerForMegaVideo : FlutterThumbPlayer <WCFinderFeedContentMediaActionProtocol>

@property (retain, nonatomic) WCFinderSimplePlayerView *finderPlayer;
@property (nonatomic) double initStartPlayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayerId:(id)a0 registry:(id)a1;
- (void)setupFinderObject:(id)a0;
- (void)setupStartPlayPostionMs:(long long)a0;
- (void)updaetFinderPlayer:(id)a0;
- (struct CGSize { double x0; double x1; })getVideoSize;
- (double)getVideoDuration;
- (int)getCommentScene;
- (void)prepare;
- (void)updatePlayerSize:(int)a0 height:(int)a1 x:(int)a2 y:(int)a3;
- (void)play;
- (void)pause;
- (void)seek:(double)a0;
- (void)setMute:(BOOL)a0;
- (void)setLoop:(BOOL)a0;
- (void)stop;
- (void)destroy;
- (void)setPlaySpeed:(float)a0;
- (struct __CVBuffer { } *)getCVPixelBuffer;
- (unsigned long long)playerState;
- (unsigned long long)flutterPlayerStateFromPlayerState:(unsigned long long)a0;
- (id)getFeedbackInfo;
- (void)playerView:(id)a0 onVideoPrepareToPlay:(id)a1;
- (void)playerView:(id)a0 onVideoFrameOut:(id)a1;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (void)onPlayerStateChanged:(unsigned long long)a0;
- (void)contentMediaDidEndPlay:(id)a0;
- (void)onVideoShowBufferingView;
- (void)onVideoHiddenBufferingView;
- (void).cxx_destruct;

@end
