@interface QMUReadWriteLock : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;
}

- (int)writerLock;
- (int)readerLock;
- (int)unlock;
- (id)init;
- (void)dealloc;

@end
