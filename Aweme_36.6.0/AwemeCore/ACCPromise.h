@class ACCRecursiveLock;

@interface ACCPromise : NSObject

@property (readonly, nonatomic) ACCRecursiveLock *lockedResult;
@property (copy, nonatomic) ACCRecursiveLock *lockedObservers;

+ (id)resolved:(id)a0;

- (void)observeOnce:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;

@end
