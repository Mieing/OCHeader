@interface AWEArchContainerViewAroundLock : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } *unfairLock;

- (id)around:(id /* block */)a0;
- (void)aroundVoid:(id /* block */)a0;
- (void)unlock;
- (void)lock;
- (id)init;
- (void)dealloc;

@end
