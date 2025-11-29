@class NSString, IESMMBGAVPlayer;

@interface VEEffectVideoPlayer : NSObject

@property (retain, nonatomic) IESMMBGAVPlayer *iesPlayer;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) float playSpeed;
@property (nonatomic) BOOL isChangingSpeed;
@property (nonatomic) float speed;
@property (nonatomic) float volume;
@property (nonatomic) BOOL isLoop;
@property (readonly, nonatomic) unsigned long long state;

- (struct __CVBuffer { } *)copyPixelBuffer;
- (void)p_createPlayer;
- (void)p_handleSpeedChanged:(float)a0 currentPercent:(float)a1 needResumePlay:(BOOL)a2;
- (void)prepareVideo:(id)a0;
- (long long)videoDurationInMSeconds;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (long long)currentPosition;
- (void)restart;
- (void)resume;
- (void)dealloc;
- (id)currentPath;
- (void)seek:(long long)a0;

@end
