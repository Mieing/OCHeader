@class MMWebViewAISearchConfigData;

@interface MMWebViewPlugin_AiSearch : MMWebViewPluginBase <PBMessageObserverDelegate> {
    id /* block */ _completion;
}

@property (retain, nonatomic) MMWebViewAISearchConfigData *aiSearchConfigData;

+ (unsigned long long)menuTypeForConfigType:(unsigned long long)a0;
+ (BOOL)shouldUrlUseMPConfig:(id)a0;

- (id)init;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)requestAiSearchConfigWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)mainthread_requestAiSearchConfigWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleAISummarySearchConfigResponse:(id)a0;
- (void)dealloc;
- (id)configForType:(unsigned long long)a0;
- (id)configForType:(unsigned long long)a0 contextId:(id)a1;
- (BOOL)isConfigTypeRequesting:(unsigned long long)a0;
- (void)setConfigTypeRequestingState:(BOOL)a0 configType:(unsigned long long)a1;
- (id)configPathForType:(unsigned long long)a0;
- (void)saveConfig;
- (void)saveConfigForType:(unsigned long long)a0;
- (void)loadConfig;
- (void)loadConfigForType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
