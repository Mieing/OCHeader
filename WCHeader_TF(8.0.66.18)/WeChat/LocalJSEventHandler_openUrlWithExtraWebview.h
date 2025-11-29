@interface LocalJSEventHandler_openUrlWithExtraWebview : LocalJSEventHandler_BaseEvent {
    id /* block */ _callbackBlock;
}

+ (BOOL)getGlobalHasShow;
+ (void)setGlobalHasShow:(BOOL)a0;

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (id)backgroundTaskForKey:(id)a0;
- (id)genNewWebExtraInfoFromParams:(id)a0 toUrl:(id)a1 csPreInjectJSExtObj:(id)a2;
- (id)pageSheetConfigFromParams:(id)a0;
- (void)delayDoAction;
- (void)ShowWebViewControllerWithType:(unsigned long long)a0 andWebViewVC:(id)a1;
- (void).cxx_destruct;

@end
