@class NSString;

@interface TSPKUnfairLockImp : NSObject <TSPKLock> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unlock;
- (void)lock;
- (id)init;

@end
