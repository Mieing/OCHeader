@class NSMutableDictionary, AWEDynamicCardContainer;

@interface AWEDynamicCardServiceCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *services;
@property (retain, nonatomic) NSMutableDictionary *preloadCards;
@property (retain, nonatomic) AWEDynamicCardContainer *dcard;
@property (retain, nonatomic) NSMutableDictionary *dCardCaches;
@property (retain, nonatomic) NSMutableDictionary *fetchingChannels;
@property (retain, nonatomic) NSMutableDictionary *statsInMemory;

+ (id)shared;

- (long long)maxRetryTimes;
- (void)cleanCardForScene:(id)a0;
- (BOOL)resourcesExistInChannel:(id)a0;
- (void)registerBSyncGeckoActionMessageWithCallback:(id /* block */)a0;
- (void)unregisterScene:(id)a0;
- (void)registerScene:(id)a0 withContext:(id)a1;
- (void)loadResourcesFromChannel:(id)a0 enableRetry:(BOOL)a1 completion:(id /* block */)a2;
- (id)statsForScene:(id)a0;
- (id)contextOfScene:(id)a0;
- (void)updateStats:(id)a0 containerType:(long long)a1;
- (id)persistenceKey:(long long)a0;
- (void)deleteDCardsStatsOutOfCacheTime;
- (id)statsForContainerType:(long long)a0;
- (void)updateLocalStats:(id)a0 forScene:(id)a1;
- (void)preloadLynxWithDCard:(id)a0 completion:(id /* block */)a1;
- (id)cardPreloadedForScene:(id)a0;
- (void)updateCacheDCardsStats:(id)a0 type:(long long)a1;
- (void)setContextWithAwemeModel:(id)a0;
- (void)preloadGeckoResources:(id)a0;
- (void)cleanDCardStats;
- (void)updateStats:(id)a0 forScene:(id)a1;
- (long long)maxCount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
