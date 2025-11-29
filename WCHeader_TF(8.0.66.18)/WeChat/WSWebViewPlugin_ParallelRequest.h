@interface WSWebViewPlugin_ParallelRequest : WSWebViewPluginBase <LocalJSEventHandlerContextDelegate> {
    void /* unknown type, empty encoding */ parallelHandlerDict;
    void /* unknown type, empty encoding */ eventResponseDict;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tempWebview;
}

@property (nonatomic) void /* unknown type, empty encoding */ pRequestID;

- (BOOL)tryParallelAsyncWebSearch:(unsigned long long)a0 sessionID:(id)a1 scene:(unsigned int)a2 query:(id)a3 bizType:(unsigned long long)a4 initExtParams:(id)a5 isFromNewVoice:(BOOL)a6;
- (BOOL)shouldEnabelParallelReqSearch;
- (BOOL)containsKey:(id)a0 key:(id)a1;
- (id)genReqSearchParams:(id)a0 isFromNewVoice:(BOOL)a1;
- (BOOL)tryUseCacheWithRealEventHandler:(id)a0;
- (void)dispatch:(id)a0 params:(id)a1;
- (void)sendEvent:(id)a0 handler:(id)a1 result:(id)a2;
- (void)eventEndWithHandler:(id)a0 result:(id)a1;
- (unsigned long long)getLocalJSBusinessType;
- (id)getWebViewOwner;
- (id)webView;
- (id)init;
- (void).cxx_destruct;

@end
