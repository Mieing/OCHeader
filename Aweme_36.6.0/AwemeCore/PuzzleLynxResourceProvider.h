@class PuzzleContext, NSMutableDictionary, PuzzleGeckoResourceLoader, NSString;

@interface PuzzleLynxResourceProvider : NSObject <LynxTemplateProvider, LynxResourceFetcher, LynxDynamicComponentFetcher, LynxResourceProvider, LynxImageFetcher> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _operationLock;
}

@property (retain, nonatomic) NSMutableDictionary *runningRequests;
@property (retain, nonatomic) PuzzleGeckoResourceLoader *geckoResourceLoader;
@property (retain, nonatomic) PuzzleContext *context;
@property (nonatomic) BOOL enableForest;
@property (nonatomic) BOOL enableMemoryCache;
@property (retain, nonatomic) NSMutableDictionary *operationsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forestRequestParamsWithContext:(id)a0;
+ (void)unzipFile:(id)a0 completionHandler:(id /* block */)a1;
+ (id)unzipCachePathForURL:(id)a0;
+ (id)zipTempCachePathForURL:(id)a0;

- (id /* block */)loadImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (void)loadTemplateWithUrl:(id)a0 onComplete:(id /* block */)a1;
- (void)loadDynamicComponent:(id)a0 withLoadedBlock:(id /* block */)a1;
- (id /* block */)loadResourceWithURL:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id /* block */)fetchResourceWithURL:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)redirectURL:(id)a0;
- (void)resolveResourceURL:(id)a0 completion:(id /* block */)a1;
- (void)fetchResourceDataWithURLString:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchLocalFileWithURLString:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)request:(id)a0 onComplete:(id /* block */)a1;
- (id)requestParams:(id)a0;
- (void)startResourceRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkValidateURL:(id)a0 error:(id *)a1;
- (void)fallbackResourceRequest:(id)a0 completion:(id /* block */)a1;
- (id /* block */)_fetchResourceWithURL:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)__fetchResourceDataWithURLString:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)__fetchLocalFileWithURLString:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)setOperation:(id)a0 forKey:(id)a1;
- (id /* block */)__asyncLoadImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (void)reportForestTrackData:(id)a0;
- (id)initWithTemplateUrl:(id)a0 context:(id)a1;
- (id)puzzleLynxResourceError:(long long)a0 errorMsg:(id)a1;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)removeOperationForKey:(id)a0;

@end
