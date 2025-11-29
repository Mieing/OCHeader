@class NSURL, IESMMAudioBeatTrackingResult, NSString;

@interface IESMMAudioBeatTracking : NSObject

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } originTimeRange;
@property (retain, nonatomic) IESMMAudioBeatTrackingResult *result;
@property (readonly, nonatomic) NSURL *audioURL;
@property (readonly, nonatomic) NSString *modelPath;
@property (readonly, nonatomic) float srcStart;
@property (readonly, nonatomic) float srcDuration;
@property (nonatomic) float dstStart;
@property (nonatomic) float dstDuration;

+ (void)GetResultAsync:(id)a0 srcStart:(float)a1 srcDuration:(float)a2 dstDuration:(float)a3 modelPath:(id)a4 completion:(id /* block */)a5;

- (BOOL)p_checkParameters;
- (id)p_getResult;
- (id)initWithFileURL:(id)a0 srcStart:(float)a1 srcDuration:(float)a2 modelPath:(id)a3;
- (id)convertFeatureSetToIESMMAudioBeatTrackingResult:(const void *)a0;
- (void).cxx_destruct;
- (id)getResult;

@end
