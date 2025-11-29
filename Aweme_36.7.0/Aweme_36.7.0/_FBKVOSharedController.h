@class NSHashTable;

@interface _FBKVOSharedController : NSObject {
    NSHashTable *_infos;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

+ (id)sharedController;

- (void)observe:(id)a0 info:(id)a1;
- (void)unobserve:(id)a0 info:(id)a1;
- (void)unobserve:(id)a0 infos:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)debugDescription;

@end
