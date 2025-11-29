@class NSString, NSMutableDictionary;
@protocol IESLiveNewDressCacheFactory;

@interface IESLiveNewDressResourceCache : NSObject <IESLiveNewDressResourceCache>

@property (retain, nonatomic) id<IESLiveNewDressCacheFactory> cacheFactory;
@property (retain, nonatomic) NSMutableDictionary *modelCaches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createModelCacheWithDressType:(int)a0;
- (id)getModelCacheWithDressType:(int)a0 error:(id *)a1;
- (id)resourceForDressID:(id)a0 dressType:(int)a1 error:(id *)a2;
- (void)addDressResourceModelCacheClass:(Class)a0;
- (BOOL)containsResourceForDressID:(id)a0 dressType:(int)a1;
- (BOOL)storeResource:(id)a0 forDressID:(id)a1 dressType:(int)a2 error:(id *)a3;
- (void)addDressResourceModelCache:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
