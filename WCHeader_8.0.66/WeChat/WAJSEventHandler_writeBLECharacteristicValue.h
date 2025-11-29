@class NSString;

@interface WAJSEventHandler_writeBLECharacteristicValue : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol> {
    NSString *m_deviceId;
    NSString *m_serviceId;
    NSString *m_charId;
    unsigned long long m_writeTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onBluetoothCharacteristicsDidWrite:(id)a0 service:(id)a1 device:(id)a2 errorCode:(int)a3 errMsg:(id)a4 appid:(id)a5;
- (void)onSuccess;
- (void)dealloc;
- (id)bleInstance;
- (void).cxx_destruct;

@end
