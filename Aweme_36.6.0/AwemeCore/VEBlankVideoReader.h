@interface VEBlankVideoReader : VEVideoReader

@property (nonatomic) struct __CVBuffer { } *lastPixelBufferRef;

- (void)initPixelBuffer;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
