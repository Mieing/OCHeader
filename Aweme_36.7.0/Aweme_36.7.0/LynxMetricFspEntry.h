@class LynxPerformanceMetric;

@interface LynxMetricFspEntry : LynxPerformanceEntry

@property (retain, nonatomic) LynxPerformanceMetric *fsp;
@property (retain, nonatomic) LynxPerformanceMetric *lynxFsp;
@property (retain, nonatomic) LynxPerformanceMetric *totalFsp;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
