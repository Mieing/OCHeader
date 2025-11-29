@class NSString, NSMutableArray, NSRecursiveLock;

@interface MMLocationCacheStorage : MMObject <PBCoding> {
    NSRecursiveLock *_lock;
}

@property (retain, nonatomic) NSMutableArray *caches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_caches;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)lastCacheItem;
- (void)addCacheItem:(id)a0;
- (void).cxx_destruct;

@end
