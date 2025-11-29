@class NSMutableSet;

@interface YataInnerTrackerEventImpl : YataEventBaseImpl {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _trackerLock;
}

@property (retain, nonatomic) NSMutableSet *trackerOnceIDSet;

- (id)initWithYataInstance:(id)a0;
- (void)triggerEventWithEventData:(id)a0;
- (void)interceptorEventWithEventData:(id)a0;
- (id)supportSecondaryExprKeys;
- (void).cxx_destruct;
- (id)name;
- (void)dealloc;

@end
