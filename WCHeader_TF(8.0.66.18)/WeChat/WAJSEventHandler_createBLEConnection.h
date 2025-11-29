@class NSString, MMTimer;

@interface WAJSEventHandler_createBLEConnection : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol> {
    MMTimer *m_timeOutTimer;
    NSString *m_uuid;
    unsigned long long m_connectTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onBluetoothConnected:(id)a0 errorCode:(int)a1 errMsg:(id)a2 appid:(id)a3;
- (void)dealloc;
- (void)onTimeOut;
- (void)onSuccess;
- (id)bleInstance;
- (void).cxx_destruct;

@end
