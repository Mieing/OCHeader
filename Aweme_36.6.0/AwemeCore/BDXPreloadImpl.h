@class NSString;

@interface BDXPreloadImpl : NSObject <BDXPreloadProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)preloadWithBuilder:(id /* block */)a0 callback:(id /* block */)a1;
+ (void)preloadResourceWith:(id)a0 strategy:(id)a1 taskConfig:(id)a2 callback:(id /* block */)a3;
+ (void)bdxRouterPreloadResourceWith:(id)a0 strategy:(id)a1 taskConfig:(id)a2 callback:(id /* block */)a3;
+ (id)getCacheWith:(id)a0;
+ (void)forceCleanWith:(id)a0;
+ (void)triggerAPIPrefetchFor:(id)a0 with:(id)a1;
+ (void)triggerAPIPrefetchFor:(id)a0;
+ (void)dataWithRequestModel:(id)a0 completion:(id /* block */)a1;
+ (void)triggerPrefetchWithSchema:(id)a0 config:(id)a1;
+ (void)dataWithRequestModel:(id)a0 dataCallback:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)triggerPrefetchWithCardModel:(id)a0;
+ (void)triggerForestPreloadResourceAndPrefetchWithSchema:(id)a0 enablePrefetch:(BOOL)a1 triggerSource:(id)a2;
+ (void)syncInjectPrefetchDataCache:(id)a0;
+ (unsigned long long)p_mainResourcePreloadAdapterTypeWithScheme:(id)a0;
+ (id)p_requestParameters:(id)a0 taskConfig:(id)a1 isMainResource:(BOOL)a2;
+ (void)p_triggerForestPreloadChildResource:(id)a0 taskConfig:(id)a1 judgeForEachSubRes:(BOOL)a2 allSuccess:(BOOL *)a3;
+ (id)p_preloadConfig:(id)a0 judgeForEachSubRes:(BOOL)a1 allSuccess:(BOOL *)a2;
+ (id)p_convertToForestPreloadWithPreloadItems:(id)a0 judgeForEachSubRes:(BOOL)a1 allSuccess:(BOOL *)a2;
+ (unsigned long long)p_childResourcePreloadAdapterTypeWithScheme:(id)a0;
+ (unsigned long long)p_preloadAdapterTypeWithScheme:(id)a0 isMainResource:(BOOL)a1 listKey:(id)a2;
+ (void)forestPreloadMainResource:(id)a0 taskConfig:(id)a1 rlPreloadBlock:(id /* block */)a2;
+ (void)forestPreloadChildResource:(id)a0 jsonObject:(id)a1 taskConfig:(id)a2 rlPreloadBlock:(id /* block */)a3;
+ (void)findPreloadConfigWith:(id)a0 taskConfig:(id)a1 completion:(id /* block */)a2;
+ (void)triggerPrefetchWithCardModel:(id)a0 schema:(id)a1 config:(id)a2;
+ (void)p_triggerNewPrefetchIfNeeded:(id)a0 cardModel:(id)a1;
+ (BOOL)p_canPrefetchInRouter:(id)a0 cardModel:(id)a1;
+ (unsigned long long)serviceType;


@end
