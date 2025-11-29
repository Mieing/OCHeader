@interface VEInsertFramePlayer : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastFrameTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } srcFrameTime;
@property (nonatomic) struct __CVBuffer { } *srcPixelBuffer;
@property (nonatomic) double targetFps;
@property (nonatomic) double playLoopFreq;

- (void)newPixelBuffer:(struct __CVBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)isInsertFrameNeeded:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct __CVBuffer { } *)getInsertedFrame;
- (id)init;
- (void)dealloc;

@end
