@interface IRISConcurrentWrapper : NSObject {
    id obj;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
}

@property (readonly, nonatomic) id object;

- (id)concurrentGet:(id /* block */)a0;
- (void)concurrentUpdate:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)dealloc;

@end
