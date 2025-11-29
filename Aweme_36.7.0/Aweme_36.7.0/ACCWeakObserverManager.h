@class ACCRecursiveLock;

@interface ACCWeakObserverManager : NSObject

@property (readonly, nonatomic) ACCRecursiveLock *observers;

- (void)walkObservers:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end
