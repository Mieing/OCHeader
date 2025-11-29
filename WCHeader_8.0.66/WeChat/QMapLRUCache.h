@class NSMutableDictionary, QMapLinkList, NSString, NSLock;
@protocol QMapLRUCacheDelegate;

@interface QMapLRUCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *map;
@property (retain, nonatomic) QMapLinkList *linkList;
@property (retain, nonatomic) NSLock *lock;
@property (copy) NSString *name;
@property (weak) id<QMapLRUCacheDelegate> delegate;
@property unsigned long long totalCostLimit;
@property unsigned long long countLimit;

- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;

@end
