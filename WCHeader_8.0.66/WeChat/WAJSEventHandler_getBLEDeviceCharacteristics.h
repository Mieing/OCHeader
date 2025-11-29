@class NSString;

@interface WAJSEventHandler_getBLEDeviceCharacteristics : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol> {
    NSString *m_deviceId;
    NSString *m_serviceId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onBluetoothCharacteristicsDiscovered:(id)a0 service:(id)a1 device:(id)a2 errorCode:(int)a3 errMsg:(id)a4 appid:(id)a5;
- (void)dealloc;
- (id)bleInstance;
- (void).cxx_destruct;

@end
