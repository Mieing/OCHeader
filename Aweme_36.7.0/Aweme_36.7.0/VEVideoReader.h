@interface VEVideoReader : IESMMObject

@property (nonatomic) BOOL isLatestFrame;
@property (nonatomic) BOOL canUseForCache;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })assetDuration;
- (id)resUrl;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithConfig:(id)a0;
- (id)copyNextSampleBuffer;
- (void)updateVideoConfig:(id)a0;
- (id)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
