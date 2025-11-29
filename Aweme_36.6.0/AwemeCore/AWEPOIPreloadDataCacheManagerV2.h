@class YYMemoryCache;

@interface AWEPOIPreloadDataCacheManagerV2 : NSObject

@property (retain, nonatomic) YYMemoryCache *dataCache;

+ (id)sharedInstance;

- (id)templateKey:(id)a0;
- (id)bizDataInStorageWithKey:(id)a0;
- (void)updateStorageBizData:(id)a0 forKey:(id)a1;
- (id)storageKeyWithTemplateKey:(id)a0;
- (id)bizDataWithKey:(id)a0;
- (void)updateCacheWithBizData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
