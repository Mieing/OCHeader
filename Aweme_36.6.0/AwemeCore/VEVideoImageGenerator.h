@class VECurveTransUtils, AVAssetReader, AVAssetReaderOutput, VEVideoConfig;

@interface VEVideoImageGenerator : VEVideoReader

@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetReaderOutput *videoOutput;
@property (retain, nonatomic) VEVideoConfig *config;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (retain, nonatomic) VECurveTransUtils *curveTransUtils;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })p_convertTimeLineToVideoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)initAssetReader:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
