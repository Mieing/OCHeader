@class NSString, JSContext, JSVirtualMachine, MMWebOptimJSContextTaskConfig;

@interface MMWebOptimJSContextTask : MMObject <PBMessageObserverDelegate>

@property (copy, nonatomic) NSString *taskId;
@property (retain, nonatomic) JSContext *publicContext;
@property (retain, nonatomic) JSContext *devContext;
@property (retain, nonatomic) JSVirtualMachine *jsVirtualMachine;
@property (retain, nonatomic) MMWebOptimJSContextTaskConfig *config;

- (id)initWithConfig:(id)a0 jvm:(id)a1;
- (void)dealloc;
- (BOOL)isSupportPrefetchForUrl:(id)a0 extInfo:(id)a1;
- (id)identiferForUrl:(id)a0;
- (id)prefetchResArrForUrl:(id)a0;
- (void)internalInit;
- (void)setupPublicContext;
- (void)setupDevContext;
- (id)jsContextBridge;
- (void)setupJSErrorHandler:(id)a0;
- (void)setupReportApiBlock:(id)a0;
- (void)setupLogApiBlock:(id)a0;
- (void)setupCommCgiApiBlock:(id)a0;
- (void)setupAddCachesApiBlock:(id)a0;
- (BOOL)injectPublicLib;
- (void)injectMainifestJS;
- (id)contextEvaluateScript:(id)a0;
- (void)requestCommonCgi:(id)a0 requestString:(id)a1;
- (void)onResponseCommCgi:(id)a0;
- (void)callCommCgiErrorEvent:(id)a0 errorType:(int)a1 errorCode:(int)a2 errMsg:(id)a3;
- (void)callCommCgiResponseResult:(id)a0 responseStr:(id)a1;
- (void)callBackInvokeApiResult:(id)a0 params:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
