@class TTVideoEngineMetricDisk, TTVideoEngineMetricGPU, TTVideoEngineMetricFlow, TTVideoEngineMetricCPU, TTVideoEngineMetricMemory;

@interface TTVideoEngineMetricInfo : NSObject

@property (retain, nonatomic) TTVideoEngineMetricCPU *metricInfoCPU;
@property (retain, nonatomic) TTVideoEngineMetricMemory *metricInfoMemory;
@property (retain, nonatomic) TTVideoEngineMetricFlow *metricInfoFlow;
@property (retain, nonatomic) TTVideoEngineMetricGPU *metricInfoGPU;
@property (retain, nonatomic) TTVideoEngineMetricDisk *metricInfoDisk;

- (void).cxx_destruct;

@end
