@interface AWELiveClientLLMSwiftImpl : NSObject <IESLiveClientLLMInjector> {
    void /* unknown type, empty encoding */ _llmService;
}

- (void)cancelRequestsWithSceneModel:(id)a0 group:(id)a1;
- (void)preloadResourceWithSceneModelName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancelRequest:(id)a0;
- (void)executeAction:(id)a0;
- (void)executeRequest:(id)a0;

@end
