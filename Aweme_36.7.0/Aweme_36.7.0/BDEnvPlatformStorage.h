@interface BDEnvPlatformStorage : NSObject

+ (id)configModel;
+ (BOOL)isExpand;
+ (id)recentlyModelArray;
+ (id)geckoConfigModel;
+ (id)recentlyGeckoModelArray;
+ (void)storeRecentlyModelArray:(id)a0;
+ (void)onlyStoreConfigModel:(id)a0;
+ (void)storeGeckoExpand:(BOOL)a0;
+ (void)storeRecentlyGeckoModelArray:(id)a0;
+ (void)onlyStoreGeckoConfigModel:(id)a0;
+ (void)storeGeckoConfigModel:(id)a0;
+ (void)storeConfigModel:(id)a0;
+ (void)recentlyGeckoModelArrayAppendModel:(id)a0;
+ (void)recentlyModelArrayAppendModel:(id)a0;
+ (id)storagePath;

@end
