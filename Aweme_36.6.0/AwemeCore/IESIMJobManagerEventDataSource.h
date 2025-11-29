@class NSMutableDictionary;

@interface IESIMJobManagerEventDataSource : IESIMJobManagerInnerObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } p_jobCountDictLock;
}

@property (readonly, nonatomic) NSMutableDictionary *jobCountDict;

- (id)generateEventWithName:(id)a0 env:(id)a1 extra:(id)a2;
- (unsigned int)p_bumpAndGetEventCountWithEventName:(id)a0;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (id).cxx_construct;

@end
