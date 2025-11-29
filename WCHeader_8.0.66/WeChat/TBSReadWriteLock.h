@interface TBSReadWriteLock : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;
}

- (int)TBS_WriterLock;
- (int)TBS_ReaderLock;
- (int)TBS_Unlock;
- (id)init;
- (void)dealloc;

@end
