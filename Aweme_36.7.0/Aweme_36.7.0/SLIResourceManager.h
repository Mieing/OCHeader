@class NSMutableDictionary, YYMemoryCache, IESForestKit, IESECSliceXResourceForestInterceptor;

@interface SLIResourceManager : NSObject

@property (retain, nonatomic) YYMemoryCache *cache;
@property (retain, nonatomic) NSMutableDictionary *waitingCompletions;
@property (retain, nonatomic) IESForestKit *forestInstance;
@property (retain, nonatomic) IESECSliceXResourceForestInterceptor *interceptor;

+ (id)p_requestParamsWithURL:(id)a0;
+ (id)shared;

- (void)registerForestFetcherSequenceWithChannel:(id)a0 defaultFetcherSequence:(id)a1 fileSpecificFetcherSequence:(id)a2;
- (void)removeAllCache;
- (id)init_private;
- (void)fetchTemplateWithURL:(id)a0 templateName:(id)a1 bizCode:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)isLocalResourceExistForURL:(id)a0;
- (void)debug_interface_preproccessRequestParams:(id)a0;
- (id)p_cachedTemplateForKey:(id)a0;
- (void)p_fetchTemplateWithURL:(id)a0 templateName:(id)a1 bizCode:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)p_trackFetchingEndWithDuration:(double)a0 result:(id)a1 templateName:(id)a2 bizCode:(id)a3;
- (id)p_loadFromDescription:(unsigned long long)a0;
- (void)p_trackErrorWithResult:(id)a0 templateName:(id)a1 bizCode:(id)a2;
- (id)p_resourceResultFromForestResponse:(id)a0 templateName:(id)a1 bizCode:(id)a2 error:(id)a3;
- (id)p_loadInfoFromGeckoResponse:(id)a0;
- (void)preloadResourceWithPreloadList:(id)a0 bizCode:(id)a1;
- (void).cxx_destruct;

@end
