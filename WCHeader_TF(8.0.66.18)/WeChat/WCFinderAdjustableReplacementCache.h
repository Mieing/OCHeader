@class NSRecursiveLock, NSString, NSMutableDictionary, WCFinderLRUCache;
@protocol WCFinderCacheDelegate;

@interface WCFinderAdjustableReplacementCache : NSObject <WCFinderCacheDelegate, WCFinderCacheBaseProtocol>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WCFinderLRUCache *lruCache;
@property (retain, nonatomic) WCFinderLRUCache *lruCacheForGhost;
@property (retain, nonatomic) WCFinderLRUCache *lfuCache;
@property (retain, nonatomic) WCFinderLRUCache *lfuCacheForGhost;
@property (retain, nonatomic) NSMutableDictionary *cacheList;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double lfuRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WCFinderCacheDelegate> delegate;
@property (nonatomic) long long strategy;
@property (nonatomic) unsigned long long countLimit;
@property (nonatomic) unsigned long long costLimit;

- (id)initWithName:(id)a0;
- (void)safeSetObject:(id)a0 forKey:(id)a1;
- (void)safeSetObject:(id)a0 forKey:(id)a1 withCost:(unsigned long long)a2;
- (void)safeRemoveObjectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)trimToCount:(unsigned long long)a0;
- (void)trimToCost:(unsigned long long)a0;
- (unsigned long long)totalCount;
- (unsigned long long)totalCost;
- (void)cache:(id)a0 didEvictObject:(id)a1;
- (void).cxx_destruct;

@end
