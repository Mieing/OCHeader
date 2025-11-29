@class IESForestKit, IESECSliceXResourceForestInterceptor, YYMemoryCache;

@interface IESECSliceXResourceManager : NSObject

@property (retain, nonatomic) YYMemoryCache *cache;
@property (retain, nonatomic) IESForestKit *forestInstance;
@property (retain, nonatomic) IESECSliceXResourceForestInterceptor *interceptor;
@property (nonatomic) unsigned long long timeoutLimit;

+ (id)geckoAccessKey;
+ (void)initialize;
+ (id)shared;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)trackEvent:(id)a0 params:(id)a1;
- (BOOL)isLocalResourceExistForURLString:(id)a0 error:(id *)a1;
- (void)registerForestFetcherSequenceWithChannel:(id)a0 defaultFetcherSequence:(id)a1 fileSpecificFetcherSequence:(id)a2;
- (void)removeAllCache;
- (id)init_private;
- (void)fetchSliceXElementWithURL:(id)a0 sliceXInstance:(id)a1 resourceMetaData:(id)a2 complete:(id /* block */)a3;
- (id)fetchSliceXElementWithURL:(id)a0 sliceXInstance:(id)a1 resourceMetaData:(id)a2;
- (void)preloadSliceXResourceWithPreloadList:(id)a0 bizCode:(id)a1;
- (id)cachedTemplateForKey:(id)a0;
- (void)fetchWithURL:(id)a0 extraLog:(id)a1 complete:(id /* block */)a2;
- (id)fetchWithURL:(id)a0 extraLog:(id)a1;
- (void)debug_interface_preproccessRequestParams:(id)a0;
- (id)getGeckoErrorMsgWithRequest:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
