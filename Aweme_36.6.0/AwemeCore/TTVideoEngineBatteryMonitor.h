@class TTVideoEngineMetricBattery, NSMutableDictionary;

@interface TTVideoEngineBatteryMonitor : NSObject

@property (retain, nonatomic) TTVideoEngineMetricBattery *metricInfoBattery;
@property (nonatomic) BOOL isStart;
@property (retain, nonatomic) NSMutableDictionary *reportMetric;

- (void)addNotification;
- (void)removeNotification;
- (void)thermalChange;
- (void)batteryStateChange;
- (double)getCurCriticalTime;
- (double)getCurSeriousTime;
- (id)getDiagnoseReport;
- (int)diagnoseBattery;
- (int)diagnoseThermal;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
