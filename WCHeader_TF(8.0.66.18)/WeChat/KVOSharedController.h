@class NSHashTable;

@interface KVOSharedController : NSObject {
    NSHashTable *m_infos;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } m_mutex;
}

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (void)observe:(id)a0 info:(id)a1;
- (void)unobserve:(id)a0 info:(id)a1;
- (void)unobserve:(id)a0 infos:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
