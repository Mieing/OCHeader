@class NSString;

@interface IESIMJobManagerEnvironmentFetcher : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } p_fetchMutex;
}

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) id cachedValue;

- (BOOL)p_shouldUseCache;
- (id)p_fetch;
- (void).cxx_destruct;
- (id)fetch;
- (id).cxx_construct;

@end
