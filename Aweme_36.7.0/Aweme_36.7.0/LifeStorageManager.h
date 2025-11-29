@class NSMapTable, NSMutableDictionary, NSRecursiveLock;

@interface LifeStorageManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *bricks;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMapTable *weakObjects;

+ (id)shared;

- (id)weakObjects;
- (id)getObjectForKey:(id)a0 domain:(id)a1;
- (id)subscribeChangeForDomain:(id)a0 onChanged:(id /* block */)a1;
- (void)unsubscribeChangeForDomain:(id)a0 withHandle:(id)a1;
- (id)subscribeChangeForKey:(id)a0 domain:(id)a1 onChanged:(id /* block */)a2;
- (void)unsubscribeChangeForKey:(id)a0 domain:(id)a1 observeHandle:(id)a2;
- (id)threadSafeGetBrickForDomain:(id)a0;
- (void)setInternalObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1 domain:(id)a2;
- (id)internalObjectForKey:(id)a0;
- (void)destroyDomain:(id)a0;

@end
