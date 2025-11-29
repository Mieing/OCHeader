@class NSString;

@interface WAJSEventHandler_getBLEDeviceServices : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol> {
    NSString *m_uuid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onBluetoothServicesDiscovered:(id)a0 device:(id)a1 errorCode:(int)a2 errMsg:(id)a3 appid:(id)a4;
- (void)dealloc;
- (id)bleInstance;
- (void).cxx_destruct;

@end
