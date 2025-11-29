@class AVPlayerItemVideoOutput, CADisplayLink, NSString, FlutterEventChannel, AVPlayer;

@interface FLTVideoPlayer : NSObject <FlutterTexture, FlutterStreamHandler>

@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) AVPlayerItemVideoOutput *videoOutput;
@property (readonly, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) FlutterEventChannel *eventChannel;
@property (copy, nonatomic) id /* block */ eventSink;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;
@property (readonly, nonatomic) BOOL disposed;
@property (readonly, nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isLooping;
@property (readonly, nonatomic) BOOL isInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0 frameUpdater:(id)a1;
- (void)addObservers:(id)a0;
- (void)itemDidPlayToEndTime:(id)a0;
- (id)getVideoCompositionWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withAsset:(id)a1 withVideoTrack:(id)a2;
- (void)createVideoOutputAndDisplayLink:(id)a0;
- (id)initWithURL:(id)a0 frameUpdater:(id)a1 httpHeaders:(id)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })fixTransform:(id)a0;
- (id)initWithPlayerItem:(id)a0 frameUpdater:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updatePlayingState;
- (void)sendInitialized;
- (void)play;
- (void)pause;
- (long long)position;
- (long long)duration;
- (void)seekTo:(int)a0;
- (void)setVolume:(double)a0;
- (void)setPlaybackSpeed:(double)a0;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (void)onTextureUnregistered:(id)a0;
- (id)onCancelWithArguments:(id)a0;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (void)disposeSansEventChannel;
- (void)dispose;
- (void).cxx_destruct;

@end
