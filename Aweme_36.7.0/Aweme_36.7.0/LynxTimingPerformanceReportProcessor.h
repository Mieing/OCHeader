@class LynxPipelineEntry;

@interface LynxTimingPerformanceReportProcessor : NSObject <LynxPerformanceReportProcessorProtocol>

@property (retain, nonatomic) LynxPipelineEntry *loadBundleEntry;

- (id)processPerformanceEntry:(id)a0;
- (BOOL)canProcess:(id)a0;
- (id)processPipelineEntry:(id)a0;
- (id)processMetricEntry:(id)a0;
- (void).cxx_destruct;

@end
