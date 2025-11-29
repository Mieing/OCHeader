@class NSMutableDictionary, NSRecursiveLock;

@interface LifeStorageBrick : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableDictionary *store;
@property (retain, nonatomic) NSRecursiveLock *observerLock;
@property (retain, nonatomic) NSMutableDictionary *observers;

- (void)notifyObserversForKey:(id)a0 currentValue:(id)a1 previousValue:(id)a2;
- (id)observeValueForKey:(id)a0 onChangeBlock:(id /* block */)a1;
- (void)removeObserverForKey:(id)a0 withHandle:(id)a1;
- (id)observeEveryChanges:(id /* block */)a0;
- (void)removeObserverForEveryChangesWithHandle:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
