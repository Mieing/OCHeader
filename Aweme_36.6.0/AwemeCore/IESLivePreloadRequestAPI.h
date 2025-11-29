@interface IESLivePreloadRequestAPI : HTSLiveApi

- (void)preloadWithRequestUrlPath:(id)a0 params:(id)a1 headers:(id)a2 method:(unsigned long long)a3 modelClass:(Class)a4 responseFormat:(unsigned long long)a5 finish:(id /* block */)a6;
- (void)preloadWithRequest:(id)a0 method:(unsigned long long)a1 finish:(id /* block */)a2;
- (void)preloadWithChunkRequest:(id)a0 method:(unsigned long long)a1 finish:(id /* block */)a2;

@end
