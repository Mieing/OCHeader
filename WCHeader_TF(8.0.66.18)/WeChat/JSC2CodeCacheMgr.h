@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface JSC2CodeCacheMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *generatorQueue;
@property (nonatomic) BOOL shouldSampleLargeReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)validationCodeCacheForJSScript:(id)a0 sourceURL:(id)a1 codeCacheSource:(id)a2 cachePath:(id)a3 completion:(id /* block */)a4;
- (id)scriptForCacheWrap:(id)a0 vm:(id)a1;
- (void)createCodeCacheIfNeededForScript:(id)a0 completion:(id /* block */)a1;
- (void)batchCreateCodeCacheIfNeededForScripts:(id)a0 withoutDelay:(BOOL)a1 completion:(id /* block */)a2;
- (void)createOrValidateCodeCacheWithUsingCodeCache:(BOOL)a0 script:(id)a1 sourceURL:(id)a2 codeCacheSource:(id)a3 name:(id)a4 cachePath:(id)a5;
- (void)reportCodeCacheGenerateWithScript:(id)a0 isSuccess:(BOOL)a1 costTime:(unsigned int)a2 cacheSize:(unsigned long long)a3;
- (void)reportCodeCacheApplySuccessIfNeededWithCodeCacheSource:(id)a0 codeCacheVersion:(unsigned int)a1 setupCostTimeInUS:(unsigned int)a2 evaluateCostTimeInUS:(unsigned int)a3 strSourceURL:(id)a4;
- (void)reportErrorOnCodeCacheValidationWithErrCode:(long long)a0;
- (void)modifyCodeCacheAccessTime:(id)a0 time:(id)a1;
- (void).cxx_destruct;

@end
