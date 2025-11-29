@class NSString;

@interface WebViewJSEventHandler_openEnterpriseChat : WebviewJSEventHandlerBase <IEnterpriseGroupMgrExt> {
    NSString *_enterpriseChatScene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onInitiateBizChat:(id)a0 errorCode:(int)a1 extDic:(id)a2;
- (void).cxx_destruct;

@end
