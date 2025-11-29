@class IESECLiveThreadSafeDictionary, NSRecursiveLock;

@interface IESECLiveBaseContext : IESECContext

@property (retain) IESECLiveThreadSafeDictionary *dictionary;
@property (retain) NSRecursiveLock *lock;

- (void)addKey:(id)a0 handler:(id /* block */)a1;
- (void)postForKey:(id)a0;
- (void)removeKey:(id)a0 handler:(id /* block */)a1;
- (id)contextItemForKey:(id)a0;
- (void)removeHandlersForKey:(id)a0;
- (void)notifyChanged:(id)a0 object:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;

@end
