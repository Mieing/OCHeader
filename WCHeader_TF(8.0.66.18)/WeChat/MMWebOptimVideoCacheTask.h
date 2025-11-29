@class NSString, JSContext, NSMutableDictionary, JSVirtualMachine, VideoPreloadReporter;

@interface MMWebOptimVideoCacheTask : MMObject <PBMessageObserverDelegate, WCPlayerDownloaderExt>

@property (nonatomic) BOOL isInitSuccess;
@property (copy, nonatomic) NSString *taskId;
@property (retain, nonatomic) JSContext *publicContext;
@property (retain, nonatomic) JSContext *devContext;
@property (retain, nonatomic) JSVirtualMachine *jsVirtualMachine;
@property (retain, nonatomic) VideoPreloadReporter *reporter;
@property (retain, nonatomic) NSMutableDictionary *getVUrlDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithId:(id)a0 jvm:(id)a1;
- (void)dealloc;
- (id)identiferForUrl:(id)a0;
- (void)startPrefetchWithUrl:(id)a0 itemShowType:(unsigned int)a1 withScene:(unsigned int)a2;
- (BOOL)startGetVideoUrlFromPageUrl:(id)a0 handler:(id /* block */)a1;
- (BOOL)internalInit;
- (void)setupPublicContext;
- (void)setupDevContext;
- (id)jsContextBridge;
- (void)setupJSErrorHandler:(id)a0;
- (void)setupReportApiBlock:(id)a0;
- (void)setupLogApiBlock:(id)a0;
- (void)setupCommCgiApiBlock:(id)a0;
- (void)setupUserAgent:(id)a0;
- (void)setupCacheVideoBlock:(id)a0;
- (void)setupGetVideoUrlFromMpUrlBlock:(id)a0;
- (void)setupuseSameLayerForVideoBlock:(id)a0;
- (void)setupGetNetworkTypeBlock:(id)a0;
- (void)setupSetLocalDataBlock:(id)a0;
- (void)setupGetLocalDataBlock:(id)a0;
- (BOOL)injectPublicLib;
- (BOOL)injectManifestJS;
- (id)contextEvaluateScript:(id)a0;
- (void)requestCommonCgi:(id)a0 requestString:(id)a1;
- (void)onResponseCommCgi:(id)a0;
- (void)callCommCgiErrorEvent:(id)a0 errorCode:(int)a1 errMsg:(id)a2;
- (void)callCommCgiResponseResult:(id)a0 responseStr:(id)a1 errMsg:(id)a2;
- (void)callBackInvokeApiResult:(id)a0 params:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnCdnVideoPreloadCompleted:(id)a0;
- (void).cxx_destruct;

@end
