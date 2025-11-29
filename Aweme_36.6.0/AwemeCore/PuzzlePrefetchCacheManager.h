@class NSString;
@protocol HTSKVStore;

@interface PuzzlePrefetchCacheManager : NSObject <IESPrefetchCacheStorageProtocol>

@property (retain, nonatomic) id<HTSKVStore> kvStoreManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchObjectForKey:(id)a0;
- (id)fetchAllKeys;
- (void).cxx_destruct;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)saveObject:(id)a0 forKey:(id)a1;

@end
