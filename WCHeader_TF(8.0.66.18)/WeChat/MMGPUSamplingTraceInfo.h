@class NSString, MMMetricsStackInfo;

@interface MMGPUSamplingTraceInfo : NSObject <NSCopying>

@property (nonatomic) double time;
@property (retain, nonatomic) id timestampCounterBuffer;
@property (nonatomic) unsigned int type;
@property (nonatomic) struct TimeLapse { unsigned long long start; unsigned long long end; } gpuTimestamp;
@property (nonatomic) struct TimeLapse { unsigned long long start; unsigned long long end; } cpuTimestamp;
@property (nonatomic) unsigned int sampleCount;
@property (retain, nonatomic) MMMetricsStackInfo *stack;
@property (nonatomic) unsigned long long stackHash;
@property (readonly, nonatomic) id sampleKey;
@property (retain, nonatomic) NSString *tag;
@property (nonatomic) int startOfVertexSampleIndex;
@property (nonatomic) int endOfVertexSampleIndex;
@property (nonatomic) int startOfFragmentSampleIndex;
@property (nonatomic) int endOfFragmentSampleIndex;
@property (nonatomic) int startOfEncoderSampleIndex;
@property (nonatomic) int endOfEncoderSampleIndex;
@property (nonatomic) double vertexTimeMs;
@property (nonatomic) double fragmentTimeMs;
@property (nonatomic) double gpuCostTimeMs;
@property (nonatomic) double encodeTimeMs;

+ (unsigned long long)GetAdjustGPUTime:(struct TimeLapse { unsigned long long x0; unsigned long long x1; })a0 cpuLapse:(struct TimeLapse { unsigned long long x0; unsigned long long x1; })a1 gpuTime:(unsigned long long)a2;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)markStartPointWithDevice:(id)a0;
- (void)markEndPointWithDevice:(id)a0;
- (unsigned long long)adjustGPUTime:(unsigned long long)a0;
- (BOOL)isVertexSampleIndexValid;
- (BOOL)isFragmentSampleIndexValid;
- (BOOL)isEncoderSampleIndexValid;
- (id)renderSample;
- (void).cxx_destruct;

@end
