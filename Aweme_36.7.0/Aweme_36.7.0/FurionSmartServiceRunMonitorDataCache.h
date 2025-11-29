@class FurionMonitorInputData, NSDictionary, FurionSmartTruthInjectCondition;

@interface FurionSmartServiceRunMonitorDataCache : NSObject

@property (retain, nonatomic) FurionSmartTruthInjectCondition *condition;
@property (retain, nonatomic) FurionMonitorInputData *inputData;
@property (copy, nonatomic) NSDictionary *monitorData;
@property (nonatomic) long long waitCount;

- (void).cxx_destruct;
- (BOOL)isReportable;

@end
