@class NSString, NSMutableDictionary, NSDate;

@interface IESLivePipelineStepMetricsCollector : NSObject

@property (copy, nonatomic) NSString *stepName;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSMutableDictionary *hooksStartTimes;
@property (retain, nonatomic) NSMutableDictionary *hooksDurations;
@property (retain, nonatomic) NSDate *moduleStartTime;
@property (nonatomic) double moduleDuration;
@property (readonly, nonatomic) double totalDuration;

- (id)getReport;
- (id)initWithStepName:(id)a0;
- (void)startHook:(id)a0;
- (void)finishHook:(id)a0;
- (void)startModuleExecution;
- (void)finishModuleExecution;
- (void).cxx_destruct;
- (void)finish;
- (void)start;

@end
