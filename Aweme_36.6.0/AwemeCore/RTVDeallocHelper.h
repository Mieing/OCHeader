@class NSMutableArray;

@interface RTVDeallocHelper : NSObject {
    struct Mutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (retain, nonatomic) NSMutableArray *deallocBlocks;

- (void)addDeallocBlock:(id /* block */)a0;
- (void)willDealloc;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
