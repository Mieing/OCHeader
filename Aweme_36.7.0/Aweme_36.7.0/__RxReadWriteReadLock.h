@interface __RxReadWriteReadLock : NSObject <RxLocking> {
    struct SharedPtr<Rx::ReadWriteLock, Rx::ESPMode::Fast> { struct ReadWriteLock *Object; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *ReferenceController; } SharedReferenceCount; } _rwl;
}

- (void)withCriticalScope:(id /* block */)a0;
- (id)initWithImp:(struct SharedPtr<Rx::ReadWriteLock, Rx::ESPMode::Fast> { struct ReadWriteLock *x0; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *x0; } x1; })a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (id).cxx_construct;
- (BOOL)tryLock;

@end
