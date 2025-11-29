@class MMWebJsBasePkgInfo, NSMutableDictionary, NSDictionary, JSVirtualMachine, MMPrefetcherMainJSContext;

@interface MMWebPrefecherJsEngine : MMObject

@property (retain, nonatomic) NSDictionary *configInfo;
@property (retain, nonatomic) NSMutableDictionary *dictClientJsContext;
@property (retain, nonatomic) JSVirtualMachine *jsVM;
@property (retain, nonatomic) MMPrefetcherMainJSContext *mainContext;
@property (retain, nonatomic) MMWebJsBasePkgInfo *basePkgInfo;
@property (retain, nonatomic) NSMutableDictionary *dicModuleKeyJSContexts;

- (id)initWithBasePkgInfo:(id)a0;
- (void)initMainContext;
- (BOOL)shouldPrefetch:(id)a0 config:(id)a1 extInfo:(id)a2 bizPkgInfo:(id)a3;
- (unsigned int)getFetchPkgType:(id)a0 config:(id)a1 extInfo:(id)a2;
- (BOOL)shouldFetchContent:(id)a0 config:(id)a1 extInfo:(id)a2;
- (BOOL)shouldWaitPrefetchNotify:(id)a0 config:(id)a1 extInfo:(id)a2;
- (id)identiferForUrl:(id)a0 config:(id)a1 bizPkgInfo:(id)a2;
- (id)prefetchResArrForUrl:(id)a0 config:(id)a1 bizPkgInfo:(id)a2;
- (void)tryAddManifestClientJsClientContext:(id)a0 bizPkgInfo:(id)a1;
- (void)tryAddPrefetcherClientJsClientContext:(id)a0 bizPkgInfo:(id)a1;
- (void)setupContext:(id)a0 metaInfo:(id)a1 moduleName:(id)a2 pkgInfo:(id)a3;
- (id)getClientContextIdWithType:(id)a0 domian:(id)a1 path:(id)a2 appId:(id)a3;
- (id)invokeWithConfig:(id)a0 contextType:(id)a1 func:(id)a2 params:(id)a3;
- (void)dispatchEventToAdContext:(id)a0 extraData:(id)a1;
- (void)dispatchEventWithConfig:(id)a0 contextType:(id)a1 event:(id)a2 extraData:(id)a3;
- (void)tryAddClientContext:(id)a0 config:(id)a1 bizPkgInfo:(id)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
