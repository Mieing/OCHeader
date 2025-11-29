@class IESIMJobManager, NSMutableDictionary;

@interface IESIMJobManagerEnvironmentFetcherEventHistory : IESIMJobManagerEnvironmentFetcher {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } p_recordMutex;
}

@property (readonly, weak, nonatomic) IESIMJobManager *manager;
@property (readonly, nonatomic) NSMutableDictionary *record;

- (BOOL)p_shouldUseCache;
- (id)p_fetch;
- (void)onEventFire:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)initWithManager:(id)a0;
- (id).cxx_construct;

@end
