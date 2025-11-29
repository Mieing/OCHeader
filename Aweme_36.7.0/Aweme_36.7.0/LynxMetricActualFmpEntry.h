@class LynxPerformanceMetric;

@interface LynxMetricActualFmpEntry : LynxPerformanceEntry

@property (retain, nonatomic) LynxPerformanceMetric *actualFmp;
@property (retain, nonatomic) LynxPerformanceMetric *lynxActualFmp;
@property (retain, nonatomic) LynxPerformanceMetric *totalActualFmp;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
