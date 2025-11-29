@class NSString, LocalJSEventHandler_BaseEvent, FTSWebSearchMgr, MMContext;

@interface LiteAppApiLocalJSBridge : LiteAppJsApi <LocalJSEventHandlerContextDelegate, WebSearchMgrDelegate> {
    MMContext *m_context;
}

@property (retain, nonatomic) LocalJSEventHandler_BaseEvent *handler;
@property (retain, nonatomic) FTSWebSearchMgr *webSearchMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)onSearchRecmdDataSuccess:(id)a0;
- (void)onSearchRecmdDataFail:(id)a0;
- (void)onWebSearchDataChanged:(id)a0;
- (void)onWebSearchDataFail:(id)a0;
- (id)makeEmptyJSONResultParam:(BOOL)a0;
- (id)makeNetworkFailParam:(BOOL)a0;
- (void)eventEndWithHandler:(id)a0 result:(id)a1;
- (void)sendEvent:(id)a0 handler:(id)a1 result:(id)a2;
- (void)handlerEndWithEvent:(id)a0 handler:(id)a1 result:(id)a2;
- (unsigned long long)getLocalJSBusinessType;
- (id)getWebViewOwner;
- (id)webView;
- (void).cxx_destruct;

@end
