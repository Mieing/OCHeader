@class NSDictionary, CachalotTimeMonitorConfig, NSMutableDictionary;

@interface CachalotTimeMonitor : CachalotMonitor {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) CachalotTimeMonitorConfig *config;
@property (retain, nonatomic) NSMutableDictionary *timestampMap;
@property (readonly, nonatomic) NSDictionary *timeMetric;

+ (id)monitorWithConfig:(id)a0;
+ (double)timestamp;

- (void)endAndSendEvent:(id)a0 category:(id)a1 metric:(id)a2 extra:(id)a3;
- (void)trigger:(id)a0;
- (void)p_trigger:(id)a0 time:(double)a1;
- (void)p_safeTrigger:(id)a0 timestamp:(double)a1;
- (void)trigger:(id)a0 time:(double)a1;
- (void).cxx_destruct;
- (void)begin;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)end;

@end
