@class NSString, NSMutableDictionary;

@interface IESLiveCacheOperationImpl : NSObject <IESLiveCacheOperation>

@property (retain, nonatomic) NSMutableDictionary *cacheItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerCacheItem:(id)a0;
- (unsigned long long)getCleanSizeWithVisitType:(long long)a0;
- (BOOL)cleanWithVisitType:(long long)a0 extraParams:(id)a1;
- (void)addCacheItems:(id)a0;
- (id)getAllCacheItems;
- (void).cxx_destruct;
- (id)init;

@end
