@class NSString, WCFinderDoublyLinkedList, NSRecursiveLock;
@protocol WCFinderCacheDelegate;

@interface WCFinderLRUCache : NSObject <WCFinderCacheBaseProtocol>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WCFinderDoublyLinkedList *cacheList;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) unsigned long long totalCost;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (weak, nonatomic) id<WCFinderCacheDelegate> delegate;
@property (nonatomic) long long strategy;
@property (nonatomic) unsigned long long countLimit;
@property (nonatomic) unsigned long long costLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0;
- (void)safeSetObject:(id)a0 forKey:(id)a1;
- (void)safeSetObject:(id)a0 forKey:(id)a1 withCost:(unsigned long long)a2;
- (void)safeRemoveObjectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)trimToCount:(unsigned long long)a0;
- (void)trimToCost:(unsigned long long)a0;
- (id)allObjects;
- (void).cxx_destruct;

@end
