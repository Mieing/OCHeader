@class NSMutableArray;

@interface DolphinDisposeHostManager : NSObject

@property (retain, nonatomic) NSMutableArray *disposeHandlesArr;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;

- (void)addDisposeHandles:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
