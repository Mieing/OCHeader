@class NSString, NSNumber;

@interface AWEPerfEvaluateBootCollector : NSObject <AWEPerfEvaluateApplogObserver, AWEPerfEvaluateCollector> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, copy, nonatomic) NSString *subType;
@property (retain, nonatomic) NSNumber *firstVideoDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEvent:(id)a0 params:(id)a1;
- (id)observedEvents;
- (id)collectFeatures;
- (id)initWithJSONConfig:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
