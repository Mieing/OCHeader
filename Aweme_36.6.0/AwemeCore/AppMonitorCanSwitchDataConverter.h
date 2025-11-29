@class NSLock, NSMutableDictionary;

@interface AppMonitorCanSwitchDataConverter : AppMonitorSwitchDataConverter {
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *countDict;
@property (retain, nonatomic) NSMutableDictionary *alarmDict;
@property (retain, nonatomic) NSMutableDictionary *statDict;

+ (id)sharedInstance;

- (id)compareValueWithMetricsForStat:(id)a0 RandomNum:(int)a1 KeyStr:(id)a2 Dimension:(id)a3;
- (id)compareValueWithMetricsForAlarm:(id)a0 RandomNum:(int)a1 isSuccess:(BOOL)a2 KeyStr:(id)a3 Arg:(id)a4;
- (id)compareValueWithMetricsForCount:(id)a0 RandomNum:(int)a1 KeyStr:(id)a2 Arg:(id)a3;
- (void)parseSamplingAndMetrics:(id)a0 MonitorType:(id)a1;
- (void)parseModuleAndMonitorPoints:(id)a0 MonitorType:(id)a1;
- (void)parseMonitorPoints:(id)a0 MonitorType:(id)a1 Sampling1:(id)a2 sucSampling1:(id)a3 failSampling1:(id)a4 Module:(id)a5;
- (void)parseMonitorPoints:(id)a0 MonitorType:(id)a1 Sampling1:(id)a2 Module:(id)a3;
- (void)completeAssignment:(id)a0 ConverKey:(id)a1 ConverValue:(id)a2;
- (void)impAssignment:(id)a0 Key:(id)a1;
- (int)GetValidPoint:(id)a0 MonitorPoint:(id)a1 Measure:(id)a2 measureValue:(id)a3;
- (id)getDetailPointForStat:(id)a0 MonitorPoint:(id)a1;
- (BOOL)isEmptyofDic;
- (id)getSwitchResultForStat:(id)a0 monitorPoint:(id)a1 Dimension:(id)a2 RandomNum:(int)a3;
- (id)getSwitchResultForCountAndAlarm:(id)a0 monitorPoint:(id)a1 Type:(id)a2 Arg:(id)a3 RandomNum:(int)a4;
- (void)removeDicContent;
- (void)setDicContent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
