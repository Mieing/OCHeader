@class NSString, NSData, VoIPTokenRegisterObject;

@interface TokenRegisterService : MMUserService <MMKernelExt, PBMessageObserverDelegate, VoIPTokenRegisterObjectDelegate, MMServiceProtocol> {
    BOOL m_apnsTokenRecovered;
    unsigned int m_apnsTokenEntrance;
    NSString *m_lastRegApnsToken;
    NSData *m_lastRegVoIPToken;
    NSString *m_lastApnsToken;
    VoIPTokenRegisterObject *m_voipRegister;
    VoIPTokenRegisterObject *m_secondTryRegister;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onApnsTokenUpdate:(id)a0;
- (void)onVoIPTokenUpdate:(id)a0;
- (void)recoverApnsToken;
- (void)createSendApnsTokenEvent:(id)a0;
- (void)createSendVoIPTokenEvent:(id)a0;
- (void)reportVoIPPayLoad:(id)a0;
- (id)lastRegApnsToken;
- (id)lastRegVoIPToken;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleRespForSendToken:(id)a0;
- (void)handleRespForAPNSReport:(id)a0;
- (void)onAuthOK;
- (void)onVoIPTokenRegisterObjectError;
- (void)onVoIPTokenRegisterObjectOk;
- (void).cxx_destruct;

@end
