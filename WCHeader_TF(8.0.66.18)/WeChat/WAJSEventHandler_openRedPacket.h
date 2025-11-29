@class NSString, WARedEnvelopesOpenLogic;

@interface WAJSEventHandler_openRedPacket : WAJSEventHandler_BaseEvent <WARedEnvelopesOpenLogicDelegate> {
    WARedEnvelopesOpenLogic *m_openLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onWARedEnvelopesOpenLogicBack;
- (void)onWARedEnvelopesOpenLogicError:(id)a0 errCode:(long long)a1;
- (void)onWARedEnvelopesOpenLogicComplete;
- (void).cxx_destruct;

@end
