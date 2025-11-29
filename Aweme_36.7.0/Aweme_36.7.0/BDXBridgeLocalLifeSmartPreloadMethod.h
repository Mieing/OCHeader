@interface BDXBridgeLocalLifeSmartPreloadMethod : BDXBridgeMethod

+ (id)pitayaBusinesses;
+ (id)lifeSmartPreload;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)preloadManager;
- (void)setPreloadManager:(id)a0;
- (id)preloadInfo;
- (id)preloadSceneMap;
- (BOOL)isInputValidWithParams:(id)a0;
- (void)setPreloadSceneMap:(id)a0;
- (void)registerPitayaEvent:(id)a0;
- (void)trackPrefetchErrorWithParams:(id)a0 errorCode:(unsigned long long)a1;
- (void)runPitayaTaskWithBusinessName:(id)a0 params:(id)a1 paramModel:(id)a2 completion:(id /* block */)a3;
- (void)mobInvokePreloadWithOutput:(id)a0;
- (void)runTaskInvokePreloadWithOutput:(id)a0 runTaskStartTime:(double)a1;
- (BOOL)containTargetID:(id)a0 inPitayaTargetIDList:(id)a1;
- (void)invokePOIPreload:(id)a0 targetID:(id)a1;
- (void)invokeGoodsPreload:(id)a0 targetID:(id)a1;
- (id)errorMessageWithCode:(unsigned long long)a0;
- (id)containerID;
- (long long)authType;
- (id)init;
- (void)dealloc;
- (id)methodName;

@end
