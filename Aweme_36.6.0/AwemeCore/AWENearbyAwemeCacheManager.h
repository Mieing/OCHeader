@class NSString, AWEStorage;

@interface AWENearbyAwemeCacheManager : NSObject <AWEUserMessage, AWENearbyAwemeCacheManagerProtocol>

@property (retain, nonatomic) AWEStorage *cacheStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWENearbyAwemeCacheManagerCommonAdapterClass;
+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)enableNearbyFeedCache;
- (id)p_cachedAwemesFromOrigianlCache:(id)a0;
- (id)aAWENearbyAwemeCacheManagerCommonAdapter;
- (void)clearAwemeCache;
- (id)__hotWordStringWithAwemeModel:(id)a0;
- (id)cachedNearbyAwemesForCity:(id)a0;
- (id)cachedEntriesForCity:(id)a0;
- (void)setNearbyAwemeCache:(id)a0 forCity:(id)a1;
- (void)clearNearbyCache;
- (void)saveHotWordsWithAwemeModel:(id)a0;
- (BOOL)isEqualToLocalHotWordsWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)cacheKey;
- (id)init;
- (void)dealloc;

@end
