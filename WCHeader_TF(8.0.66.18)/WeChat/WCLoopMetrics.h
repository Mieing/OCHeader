@class NSDictionary, NSMutableDictionary;

@interface WCLoopMetrics : NSObject {
    NSMutableDictionary *_actionMetricsMutableDictionary;
    NSMutableDictionary *_loopInfoMutableDictionary;
}

@property (readonly, copy, nonatomic) NSDictionary *actionMetricsDictionary;
@property (readonly, copy, nonatomic) NSDictionary *loopInfo;
@property (readonly, nonatomic) double preferredDuration;
@property (readonly, nonatomic) double beginTime;
@property (readonly, nonatomic) double endTime;

- (id)init;
- (id)initWithBeginTime:(double)a0 preferredDuration:(double)a1;
- (void)didFinishWithEndTime:(double)a0;
- (id)_actionMetricsForKey:(id)a0;
- (void)actionDidBeginWithKey:(id)a0;
- (void)actionDidEndWithKey:(id)a0;
- (void)actionDidEndWithKey:(id)a0 actionCount:(unsigned long long)a1;
- (void)allActionsDidEnd;
- (void)actionDidRecordWithKey:(id)a0 duration:(double)a1;
- (void)actionDidRecordWithKey:(id)a0 duration:(double)a1 actionCount:(unsigned long long)a2;
- (void)setLoopInfo:(id)a0 forKey:(id)a1;
- (id)loopInfoForKey:(id)a0;
- (void).cxx_destruct;

@end
