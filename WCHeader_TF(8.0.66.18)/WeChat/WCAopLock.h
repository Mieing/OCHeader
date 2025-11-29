@interface WCAopLock : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } m_lock;
}

@property (readonly, nonatomic) struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *lock;

- (id)init;
- (void)dealloc;

@end
