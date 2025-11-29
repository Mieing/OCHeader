@class NSString, NSMutableDictionary, NSDate, NSMutableArray;

@interface IESLivePipelineMetricsCollector : NSObject

@property (copy, nonatomic) NSString *pipelineName;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSMutableDictionary *stepStartTimes;
@property (retain, nonatomic) NSMutableDictionary *stepDurations;
@property (retain, nonatomic) NSMutableArray *stepCollectors;
@property (readonly, nonatomic) double totalDuration;

- (id)getReport;
- (id)initWithPipelineName:(id)a0;
- (void)startStep:(id)a0;
- (void)finishStep:(id)a0;
- (void)addStepCollector:(id)a0;
- (void).cxx_destruct;
- (void)finish;
- (void)start;

@end
