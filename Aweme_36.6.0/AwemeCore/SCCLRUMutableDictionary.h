@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SCCLRUMutableDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) NSMutableArray *arrayForLRU;
@property (nonatomic) unsigned long long maxCountLRU;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) unsigned long long count;

- (id)objectForKey:(id)a0 returnEliminateObjectUsingBlock:(id /* block */)a1;
- (void)_removeObjectLRU:(id)a0;
- (void)_adjustPositionLRU:(id)a0;
- (void)_addObjectLRU:(id)a0;
- (id)initWithMaxCountLRU:(unsigned long long)a0;
- (BOOL)searchObject:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
