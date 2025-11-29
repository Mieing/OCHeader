@interface OMJCoverSnapshotOptions : NSObject

@property (readonly, nonatomic) int sampleRate;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxDuration;
@property (readonly, nonatomic) float darknessRatioThreshold;
@property (readonly, nonatomic) float clarityThreshold;

- (id)init;
- (id)initWithSampleRate:(int)a0 maxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 darknessRatioThreshold:(float)a2;
- (id)initWithSampleRate:(int)a0 maxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithSampleRate:(int)a0 maxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 darknessRatioThreshold:(float)a2 clarityThreshold:(float)a3;
- (id)description;

@end
