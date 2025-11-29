@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DataAggregator : NSObject {
    NSObject<OS_dispatch_queue> *aggr_queue;
    void *aggr_queue_tag;
    NSMutableDictionary *configurations;
    NSMutableDictionary *metricsHolder;
}

@property (copy) NSArray *metricsList;
@property (copy, nonatomic) id /* block */ flushBlock;

- (id)aggrKey:(id)a0 dimensions:(id)a1 configuration:(id)a2;
- (BOOL)isMetricsConfigured:(id)a0;
- (void)addMetrics:(id)a0 dimensions:(id)a1 options:(id)a2;
- (void)async:(id /* block */)a0;
- (void)configure:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_flush;
- (void)flush:(BOOL)a0;

@end
