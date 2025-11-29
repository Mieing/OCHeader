@class NSString;

@interface RxLock : NSObject <RxLocking> {
    struct MutexLock { void /* function */ **_vptr$LockingInterface; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _impl; } _mutex;
}

@property (readonly, nonatomic) NSString *name;

- (void)withCriticalScope:(id /* block */)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (id)init;
- (id).cxx_construct;
- (BOOL)tryLock;

@end
