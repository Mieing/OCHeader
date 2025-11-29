@class NSString, WCLoopMetrics;
@protocol WCLoopMetricsCollectorDelegate;

@interface WCLoopMetricsCollector : NSObject {
    BOOL _loopRunning;
    NSString *_loopKey;
    WCLoopMetrics *_currentLoopMetrics;
    long long _actionRunningCountInCurrentLoop;
}

@property (weak, nonatomic) id<WCLoopMetricsCollectorDelegate> delegate;
@property (nonatomic) double durationPerCollectionCycle;

- (id)init;
- (void)loopDidBeginWithKey:(id)a0;
- (void)loopDidEndWithKey:(id)a0;
- (void)actionDidBeginWithKey:(id)a0;
- (void)actionDidEndWithKey:(id)a0;
- (void)actionDidEndWithKey:(id)a0 actionCount:(unsigned long long)a1;
- (void)actionDidRecordWithKey:(id)a0 duration:(double)a1;
- (void)actionDidRecordWithKey:(id)a0 duration:(double)a1 actionCount:(unsigned long long)a2;
- (void)setLoopInfo:(id)a0 forKey:(id)a1;
- (id)loopInfoForKey:(id)a0;
- (void)collectionCycleDidBeginIfNeeded;
- (void)collectionCycleDidEndIfNeeded;
- (void)endCollectionCycle;
- (void)didFinishCollectingMetrics:(id)a0;
- (void).cxx_destruct;

@end
