@class NSString, AWEClientAILLMAbstractResource;

@interface AWEClientAILLMAbstractExecutor : NSObject <AWEClientAILLMExecutor>

@property (retain, nonatomic) NSString *pri_sceneModelName;
@property (retain, nonatomic) AWEClientAILLMAbstractResource *resource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyLoraAdapterWithName:(id)a0 completion:(id /* block */)a1;
- (void)unloadModelWithCompletion:(id /* block */)a0;
- (void)stopGenerate;
- (id)loraResourceWithName:(id)a0;
- (void)removeLoraAdapterWithName:(id)a0 completion:(id /* block */)a1;
- (void)loadEngineWithCompletion:(id /* block */)a0;
- (void)cancelRequestsWithGroupName:(id)a0;
- (void)resetEngine;
- (BOOL)isResourceReady;
- (void)preDownloadResourceWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancelRequest:(id)a0;
- (id)initWithConfig:(id)a0;
- (BOOL)hasResource;
- (void)executeRequest:(id)a0;

@end
