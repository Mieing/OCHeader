@class LynxPerformanceMetric;

@interface LynxMetricFcpEntry : LynxPerformanceEntry

@property (retain, nonatomic) LynxPerformanceMetric *fcp;
@property (retain, nonatomic) LynxPerformanceMetric *lynxFcp;
@property (retain, nonatomic) LynxPerformanceMetric *totalFcp;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
