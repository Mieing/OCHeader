@class NSMutableDictionary, TIMXSDKInstance, TIMXLRUNode, NSObject;
@protocol OS_dispatch_queue, TIMXLRUCacheDelegate;

@interface TIMXLRUCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (retain, nonatomic) TIMXLRUNode *head;
@property (retain, nonatomic) TIMXLRUNode *tail;
@property (nonatomic) unsigned long long capacity;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (copy, nonatomic) id /* block */ queryBlock;
@property (nonatomic) BOOL copyResult;
@property (weak, nonatomic) TIMXSDKInstance *r;
@property (nonatomic) long long expiredTime;
@property (nonatomic) unsigned long long queryCount;
@property (nonatomic) unsigned long long hitCount;
@property (nonatomic) double hitRate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (weak, nonatomic) id<TIMXLRUCacheDelegate> delegate;

- (id)removeTailNode;
- (id)initWithCapacity:(unsigned long long)a0 copyResult:(BOOL)a1 rootObj:(id)a2 expiredTime:(long long)a3 queryBlock:(id /* block */)a4;
- (id)objectForKey:(id)a0 useQueryBlock:(BOOL)a1;
- (id)objectsForKeys:(id)a0 isAllCacheHit:(BOOL *)a1;
- (void)removeObjectForKeys:(id)a0;
- (void)modifyCapacity:(unsigned long long)a0;
- (void)removeObjectForKeyCore:(id)a0;
- (id)getValueWithOriginValue:(id)a0;
- (void)moveNodeToHead:(id)a0;
- (BOOL)appendNodeWithValue:(id)a0 key:(id)a1;
- (void)addNodeToHead:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 rootObj:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeNode:(id)a0;

@end
