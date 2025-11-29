@class NSString;

@interface WebviewJSEventHandler_enterEnterpriseChat : WebviewJSEventHandlerBase <IEnterpriseGroupMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onConvertBizChat:(id)a0 errorCode:(int)a1 extDic:(id)a2;

@end
