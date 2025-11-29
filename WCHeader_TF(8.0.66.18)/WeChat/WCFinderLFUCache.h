@class NSRecursiveLock, NSString, WCFinderDoublyLinkedList, NSMutableDictionary;
@protocol WCFinderCacheDelegate;

@interface WCFinderLFUCache : NSObject <WCFinderCacheBaseProtocol>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) unsigned long long totalCost;
@property (retain, nonatomic) WCFinderDoublyLinkedList *freqNodeList;
@property (retain, nonatomic) NSMutableDictionary *nodeDict;
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
- (void).cxx_destruct;

@end
