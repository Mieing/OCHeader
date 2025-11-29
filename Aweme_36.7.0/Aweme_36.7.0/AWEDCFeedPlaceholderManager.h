@class NSMutableDictionary, AWEDCFeedPlaceholderConfig, NSArray, NSString, NSLock;

@interface AWEDCFeedPlaceholderManager : NSObject <AWEUserMessage>

@property (class, readonly, nonatomic) NSLock *preloadedPlaceholderDataDictLock;
@property (class, readonly, nonatomic) NSMutableDictionary *preloadedPlaceholderDataDict;
@property (class, readonly, nonatomic) BOOL useNewPreload;
@property (class, readonly, nonatomic) NSMutableDictionary *preloadBusinessState;
@property (class, readonly, nonatomic) NSLock *preloadBusinessCompleteDictLock;
@property (class, readonly, nonatomic) NSMutableDictionary *preloadBusinessCompleteDict;

@property (retain, nonatomic) AWEDCFeedPlaceholderConfig *config;
@property (retain, nonatomic) NSMutableDictionary *placeholderCacheDic;
@property (retain, nonatomic) NSArray *cacheModelArray;
@property (copy, nonatomic) NSString *placeholderImageCacheKey;
@property (nonatomic) long long recordStartIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateCustomPreloadCache:(id)a0 payload:(id)a1 neverExpires:(BOOL)a2;
+ (id)getCurrentImageCacheKeyWithBusinessID:(id)a0 distinguishUser:(BOOL)a1;
+ (void)registerImageCacheWithCacheName:(id)a0 config:(id)a1 cacheBlock:(id /* block */)a2;
+ (void)preloadPlaceholderDataWithPayload:(id)a0 completion:(id /* block */)a1;
+ (id)preloadedDataWithPayload:(id)a0;
+ (void)registerPreloadImageCacheWithPayload:(id)a0 cacheModels:(id)a1;
+ (void)registerPlaceholderImageCacheWithBusinessID:(id)a0 distinguishUser:(BOOL)a1 cacheCount:(long long)a2 diskSizeLimit:(long long)a3;
+ (void)preloadPlaceholderImageWithCacheModels:(id)a0 businessID:(id)a1 distinguishUser:(BOOL)a2 enableAvatarCache:(BOOL)a3;
+ (id)getPlaceholderModelCacheKeyWithBusinessID:(id)a0 distinguishUser:(BOOL)a1;
+ (long long)getPlaceHolderPreloadStateWithKey:(id)a0;
+ (BOOL)getPlaceHolderIsPreloadingWithKey:(id)a0;
+ (void)setMemoryDataCache:(id)a0 payload:(id)a1;
+ (void)readPlaceholderDataFromDiskWithBusinessID:(id)a0 distinguishUser:(BOOL)a1 cacheWhenNotLogin:(BOOL)a2 disableCache:(BOOL)a3 enable7DayInvalid:(BOOL)a4 async:(BOOL)a5 completion:(id /* block */)a6;
+ (id)getPlaceholderModelCacheTimeStampKeyWithBusinessID:(id)a0 distinguishUser:(BOOL)a1;
+ (id)neverExpiresKey:(id)a0;
+ (id)getPlaceholderImageCacheConfigWithCacheCount:(long long)a0 diskSizeLimit:(long long)a1;
+ (id)generateCacheKeyWithPrefix:(id)a0 businessID:(id)a1 distinguishUser:(BOOL)a2;
+ (id)getCurrentUserID;
+ (void)updatePlaceHolderPreloadState:(long long)a0 withKey:(id)a1;
+ (void)updatePlaceHolderIsPreloading:(BOOL)a0 withKey:(id)a1;
+ (BOOL)is7DayAgo:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)loadPlaceholderDataCompletion:(id /* block */)a0;
- (void)cachePlaceholderData:(id)a0 startIndexType:(long long)a1;
- (id)classNameWithBusinessID;
- (id)placeholderModelCacheKey;
- (id)placeholderModelCacheTimeStampKey;
- (void)storePlaceholderImageToDiskForModels:(id)a0;
- (id)receiveOuterPlaceholderCache;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (long long)placeholderCount;

@end
