@class NSString;

@interface IESMMBGVideoPlayer : IESMMObject <IESMMBGVideoProtocol>

@property (nonatomic) BOOL autoRepeat;
@property (nonatomic) BOOL pauseAndStillRender;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) unsigned long long bgVideoType;
@property (nonatomic) BOOL isForcePause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CVBuffer { } *)copyPixelBuffer;
- (id)currentUrl;
- (void)playerRateChange:(id)a0 object:(id)a1;
- (void)setVideoURL:(id)a0 rate:(float)a1 completeBlock:(id /* block */)a2 didPlayToEndBlock:(id /* block */)a3;
- (void)seekToPercent:(float)a0 completeBlock:(id /* block */)a1;
- (void)didPlayToEnd:(id)a0;
- (void)playItemStatusChange:(id)a0 object:(id)a1;
- (void)setVideoURL:(id)a0 rate:(float)a1 completeBlock:(id /* block */)a2;
- (void)resetRecordStatus:(BOOL)a0;
- (void)seekToPercent:(float)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })assetDuration;
- (float)currentPlayPercent;
- (void)forbidAudioTracks:(BOOL)a0;
- (BOOL)isForbidAudioTracks;
- (void)mutePlayer:(BOOL)a0;
- (void)changeRate:(float)a0 completeBlock:(id /* block */)a1;
- (id)getPlayer;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completeBlock:(id /* block */)a1;
- (id)playerItemOutput;
- (struct __CVBuffer { } *)copyPixelBufferInterval:(double)a0;
- (struct __CVBuffer { } *)copyPixelBuffer:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)forcePause:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)enterBackground;
- (void)stop;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (id)player;
- (void)enterForeground;
- (void)dealloc;

@end
