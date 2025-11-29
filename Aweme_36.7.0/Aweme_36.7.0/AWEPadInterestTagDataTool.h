@interface AWEPadInterestTagDataTool : NSObject

+ (id)cacheStorage;
+ (void)fetchTagWithCompletion:(id /* block */)a0;
+ (void)cacheResponseModel:(id)a0 saveKey:(id)a1 completion:(id /* block */)a2;
+ (void)loadCacheForSaveKey:(id)a0 withCompletion:(id /* block */)a1;

@end
