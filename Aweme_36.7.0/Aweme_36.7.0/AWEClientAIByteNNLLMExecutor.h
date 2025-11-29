@class AWEByteNNLLMEngine, NSString, AWEClientAILLMDelayTaskScheduler, AWEClientAILLMSceneConfig, AWEClientAILLMExecutorConfig, NSDictionary, AWEClientAILLMTaskManager, AWEClientAILByteNNLLMMonitor;

@interface AWEClientAIByteNNLLMExecutor : AWEClientAILLMAbstractExecutor <AWEClientAILLMResourceMonitorDelegate> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) AWEClientAILLMExecutorConfig *clientAIEngineConfig;
@property (retain, nonatomic) AWEByteNNLLMEngine *innerEngine;
@property (retain, nonatomic) AWEClientAILByteNNLLMMonitor *monitor;
@property (nonatomic) BOOL releaseResourceAfterForward;
@property (nonatomic) long long releaseResourceAfterForwardTimeOutMs;
@property (nonatomic) unsigned long long engineStatus;
@property (retain, nonatomic) NSDictionary *generateParamsDict;
@property (retain, nonatomic) AWEClientAILLMTaskManager *taskManager;
@property (retain, nonatomic) AWEClientAILLMDelayTaskScheduler *delayTaskScheduler;
@property (retain, nonatomic) AWEClientAILLMSceneConfig *sceneConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordDownloadError:(id)a0 resourceType:(id)a1;
- (void)recordDownloadSuccessWithModelURLString:(id)a0 resourceType:(id)a1;
- (id)makeEngineErrorWithCode:(long long)a0 desc:(id)a1 userInfo:(id)a2;
- (id)buildByteNNLLMEngineConfigWithExecutorConfig:(id)a0;
- (id)getIsModelReadyString;
- (id)getModelSizeString;
- (void)p_loadEngineWithCallback:(id /* block */)a0;
- (void)loadEngineWithCallback:(id /* block */)a0;
- (id)buildGenerateParamsWithDict:(id)a0;
- (void)p_generateForward:(id)a0 scene:(id)a1 generateParams:(id)a2 tokenCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (void)pri_removeLoraAdapterAfterForwardIfNeededWithName:(id)a0 completion:(id /* block */)a1;
- (void)p_inferenceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)applyLoraAdapterWithName:(id)a0 completion:(id /* block */)a1;
- (void)p_executeRequestWithLoraIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)unloadModelWithCompletion:(id /* block */)a0;
- (void)p_executeRequest:(id)a0 completion:(id /* block */)a1;
- (void)stopGenerate;
- (void)pri_applyLoraAdapterWithLoraName:(id)a0 resource:(id)a1 completion:(id /* block */)a2;
- (void)removeLoraAdapterWithName:(id)a0 completion:(id /* block */)a1;
- (void)loadEngineWithCompletion:(id /* block */)a0;
- (void)cancelRequestsWithGroupName:(id)a0;
- (void)resetEngine;
- (void).cxx_destruct;
- (void)cancelRequest:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)executeRequest:(id)a0;

@end
