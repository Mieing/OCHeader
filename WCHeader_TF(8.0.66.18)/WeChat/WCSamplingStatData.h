@interface WCSamplingStatData : NSObject

@property (readonly, nonatomic) double avgGPUTimeMs;
@property (readonly, nonatomic) double avgVertexTimeMs;
@property (readonly, nonatomic) double avgFragmentTimeMs;
@property (readonly, nonatomic) double avgEncodeTimeMs;
@property double maxGPUTimeMs;
@property double maxVertexTimeMs;
@property double maxFragmentTimeMs;
@property double maxEncodeTimeMs;
@property unsigned long long gpuLagCount;
@property unsigned long long vertexLagCount;
@property unsigned long long fragmentLagCount;
@property unsigned long long encodeLagCount;
@property unsigned long long startTime;
@property unsigned long long endTime;
@property double totalGPUTimeMs;
@property double totalEncodeTimeMs;
@property double totalVertexTimeMs;
@property double totalFragmentTimeMs;
@property unsigned long long totalGPUCmdCount;
@property unsigned long long totalVertexCmdCount;
@property unsigned long long totalFragmentCmdCount;
@property unsigned long long totalEncodeCmdCount;

- (id)init;
- (void)updateWithSamplingTraceInfo:(id)a0;

@end
