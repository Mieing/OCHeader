@class NSTimer;

@interface IESGCPAIExplainEngine : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL taskHasRan;
@property (copy, nonatomic) id /* block */ hitPredictionHandler;

- (void)stopPredicting;
- (void)scheduledTimerWithTimeInterval:(double)a0;
- (void)scheduledTimerByLoopTimeInterval;
- (void)runPredictTaskWithTimeInterval:(double)a0;
- (id)packageTaskParamsWithUserProfile:(id)a0;
- (void)runPitayaTaskWithParams:(id)a0 timeInterval:(double)a1;
- (long long)predictProbabilityWithOutput:(id)a0;
- (void)startPredictingWithIsExplaining:(BOOL)a0 timeInterval:(double)a1;
- (void)restartPredicting;
- (id)config;
- (void).cxx_destruct;
- (void)dealloc;

@end
