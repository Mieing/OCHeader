@class NSMutableArray, NSMutableDictionary;

@interface TTVideoEngineMetricDiagnose : NSObject

@property (retain, nonatomic) NSMutableArray *metricInfoQueue;
@property (nonatomic) long long interval;
@property (retain, nonatomic) NSMutableDictionary *reportMetric;

- (id)diagnoseCpu:(id)a0;
- (id)diagnoseGpu:(id)a0;
- (id)diagnoseMem:(id)a0;
- (void)setCollectInterval:(long long)a0;
- (id)getDiagnoseReport;
- (void)collectMetricInfo:(id)a0;
- (void)diagnose;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
