@interface OnceLock : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } atomicLock;

- (void)unlock;
- (BOOL)lock;
- (id)init;

@end
