@class NSString;

@interface AWEClientAILLMService : HTSService <AWEClientAILLMService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelRequestsWithSceneModel:(id)a0 group:(id)a1;
- (void)preloadResourceWithSceneModelName:(id)a0;
- (id)pri_getExecutorWithSceneModelName:(id)a0;
- (void)cancelRequest:(id)a0;
- (void)executeAction:(id)a0;
- (void)executeRequest:(id)a0;

@end
