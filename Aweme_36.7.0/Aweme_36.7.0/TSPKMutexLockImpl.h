@class NSString;

@interface TSPKMutexLockImpl : NSObject <TSPKLock> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _plock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unlock;
- (void)lock;
- (id)init;

@end
