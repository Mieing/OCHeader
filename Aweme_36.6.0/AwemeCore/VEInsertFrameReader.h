@interface VEInsertFrameReader : NSObject {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp; struct { long long value; int timescale; unsigned int flags; long long epoch; } decodeTimeStamp; } _lastTimingInfo;
}

@property (nonatomic) struct opaqueCMSampleBuffer { } *lastBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastFrameTime;
@property (nonatomic) long long insertFrameCount;
@property (nonatomic) double targetFps;

- (void)calculateFrameCountWithTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)calculateFrameCountWithTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 readerComplete:(BOOL)a1;
- (struct opaqueCMSampleBuffer { } *)getInsertFrameWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)init;
- (void)dealloc;

@end
