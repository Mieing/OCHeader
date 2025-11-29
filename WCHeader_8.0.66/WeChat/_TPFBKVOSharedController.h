@class NSHashTable;

@interface _TPFBKVOSharedController : NSObject {
    NSHashTable *_infos;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)observe:(id)a0 info:(id)a1;
- (void)unobserve:(id)a0 info:(id)a1;
- (void)unobserve:(id)a0 infos:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
