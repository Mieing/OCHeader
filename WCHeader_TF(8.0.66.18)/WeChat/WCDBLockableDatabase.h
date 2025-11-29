@interface WCDBLockableDatabase : WCTDatabase <WCDBLockable> {
    struct WCDBLockGuard { struct shared_ptr<WCDBSharedLock> { struct WCDBSharedLock *__ptr_; struct __shared_weak_count *__cntrl_; } m_mutex; BOOL m_exclusive; } _lockGuard;
}

- (id)initWithDatabase:(id)a0;
- (void)lockGuard:(void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
