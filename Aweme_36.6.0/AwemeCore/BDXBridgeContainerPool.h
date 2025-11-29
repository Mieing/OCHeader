@class NSMapTable;

@interface BDXBridgeContainerPool : NSObject

@property (class, readonly, nonatomic) BDXBridgeContainerPool *sharedPool;

@property (copy, nonatomic) NSMapTable *containers;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } containersLock;

- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
