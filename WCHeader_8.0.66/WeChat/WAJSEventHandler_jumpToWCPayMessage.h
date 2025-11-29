@class WCPayJumpC2CMessageJsapiLogic, NSString;

@interface WAJSEventHandler_jumpToWCPayMessage : WAJSEventHandler_BaseEvent <WCBaseControlMgrExt>

@property (retain, nonatomic) WCPayJumpC2CMessageJsapiLogic *m_jumpC2CMessageJsapiLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void).cxx_destruct;

@end
