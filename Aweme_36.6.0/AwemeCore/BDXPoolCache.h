@class NSString, NSMapTable, NSMutableSet;
@protocol NSCacheDelegate;

@interface BDXPoolCache : NSCache <NSCacheDelegate>

@property (retain, nonatomic) NSMapTable *cachedRecord;
@property (weak, nonatomic) id<NSCacheDelegate> realDelegate;
@property (copy) NSString *removeCacheReason;
@property (retain, nonatomic) NSMutableSet *didClearedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)delegate;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (void)setDelegate:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;

@end
