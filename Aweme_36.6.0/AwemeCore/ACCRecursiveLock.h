@class ACCOption;

@interface ACCRecursiveLock : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _pthread_mutex;
}

@property (retain, nonatomic) ACCOption *data;
@property (readonly, nonatomic) BOOL hasLockInitialled;

+ (id)lockWith:(id)a0;

- (id)safeRead:(id /* block */)a0;
- (id)safeWrite:(id /* block */)a0;
- (id)safeSwap:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (BOOL)hasData;
- (id)initWith:(id)a0;

@end
