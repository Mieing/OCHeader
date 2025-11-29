@class NSString, IESPrefetchCacheProvider, NSMutableDictionary, NSHashTable, NSMutableArray;
@protocol IESPrefetchCapability, IESPrefetchCacheStorageProtocol;

@interface IESPrefetchLoader : NSObject <IESPrefetchLoaderPrivateProtocol> {
    BOOL _enabled;
}

@property (nonatomic) BOOL prefetchIgnoreCache;
@property (copy, nonatomic) NSString *business;
@property (retain, nonatomic) id<IESPrefetchCapability> capability;
@property (retain, nonatomic) IESPrefetchCacheProvider *cacheManager;
@property (retain, nonatomic) id<IESPrefetchCacheStorageProtocol> defaultStorage;
@property (retain, nonatomic) NSMutableArray *schemaResolvers;
@property (retain, nonatomic) NSMutableDictionary *runningRequests;
@property (retain, nonatomic) NSMutableDictionary *templates;
@property (retain, nonatomic) NSMutableDictionary *bizTemplates;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEventDelegate:(id)a0;
- (void)requestDataWithModel:(id)a0 completion:(id /* block */)a1;
- (id)resolveSchema:(id)a0;
- (void)prefetchForSchema:(id)a0 withVariable:(id)a1;
- (id)currentCachedDatasByUrl:(id)a0;
- (id)p_convertConfigFromJSON:(id)a0 withEvent:(id)a1;
- (void)eventDidFinishLoadConfig:(id)a0;
- (void)removeAllConfigurations;
- (id)loadConfigurationDict:(id)a0 withEvent:(id)a1;
- (void)p_monitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)prefetchAPI:(id)a0;
- (void)loadConfigurationJSON:(id)a0;
- (void)loadConfigurationJSON:(id)a0 cleanExpiredDataAsync:(BOOL)a1;
- (void)loadAllConfigurations:(id)a0;
- (void)registerSchemaResolver:(id)a0;
- (id)initWithCapability:(id)a0 business:(id)a1;
- (void)loaderWithLogInfoMessage:(id)a0;
- (void)eventDidFinishPrefetch:(id)a0;
- (void)eventDidFinishPrefetchAPI:(id)a0;
- (void)eventDidFinishFetchData:(id)a0;
- (void)startNetworkRequest:(id)a0 completion:(id /* block */)a1;
- (void)cleanExpiredDataIfNeed;
- (BOOL)prefetchOptimizeEnable;
- (id)loadConfigurationDict:(id)a0 isBiz:(BOOL)a1 withEvent:(id)a2;
- (id)prefetchForSchema:(id)a0 occasion:(id)a1 withVariables:(id)a2 event:(id)a3;
- (id)currentCachedDatasBySchema:(id)a0 occasion:(id)a1;
- (id)fetchCacheForKey:(id)a0;
- (void)removeCacheForKey:(id)a0;
- (void)saveCacheData:(id)a0 expires:(long long)a1 isPure:(BOOL)a2 for:(id)a3;
- (void)loadBizConfigurationDict:(id)a0;
- (void)prefetchForOccasion:(id)a0 withVariable:(id)a1;
- (id)currentCachedDatasByOccasion:(id)a0;
- (id)currentCachedDataAndRequestsByUrl:(id)a0;
- (id)currentCachedDataAndRequestsByOccasion:(id)a0;
- (id)templateForProject:(id)a0;
- (id)allProjects;
- (void).cxx_destruct;
- (void)removeConfiguration:(id)a0;
- (id)cacheProvider;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)a0;

@end
