@class AVAsset, AVPlayerItemVideoOutput, NSURL, NSLock, AVPlayer;

@interface IESMMBGAVPlayer : IESMMBGVideoPlayer

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerItemVideoOutput *playerItemOutput;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) struct __CVBuffer { } *lastPixelBuffer;
@property (nonatomic) float rate;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) BOOL isResetItem;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSLock *playerLock;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (nonatomic) BOOL isForbidAudioTracks;
@property (copy, nonatomic) id /* block */ didPlayToEndBlock;
@property (nonatomic) BOOL needAutoReStart;
@property (nonatomic) BOOL wantsPlay;

- (struct __CVBuffer { } *)copyPixelBuffer;
- (id)currentUrl;
- (void)playerRateChange:(id)a0 object:(id)a1;
- (void)setVideoURL:(id)a0 rate:(float)a1 completeBlock:(id /* block */)a2 didPlayToEndBlock:(id /* block */)a3;
- (void)buildAVMutableCompositionByRate:(float)a0;
- (void)seekToPercent:(float)a0 completeBlock:(id /* block */)a1;
- (void)didPlayToEnd:(id)a0;
- (void)playItemStatusChange:(id)a0 object:(id)a1;
- (void)setVideoURL:(id)a0 rate:(float)a1 completeBlock:(id /* block */)a2;
- (void)resetRecordStatus:(BOOL)a0;
- (void)seekToPercent:(float)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })assetDuration;
- (float)currentPlayPercent;
- (void)forbidAudioTracks:(BOOL)a0;
- (void)mutePlayer:(BOOL)a0;
- (void)changeRate:(float)a0 completeBlock:(id /* block */)a1;
- (id)getPlayer;
- (void)releaseLastBuffer;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completeBlock:(id /* block */)a1;
- (struct __CVBuffer { } *)copyPixelBufferInterval:(double)a0;
- (struct __CVBuffer { } *)copyPixelBuffer:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)dealloc;

@end
