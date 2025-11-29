@class NSString;

@interface WAJSEventHandler_addBLEPeripheralService : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol> {
    NSString *serverId;
    NSString *serviceUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)dealloc;
- (id)bleInstance;
- (void)onBluetoothDidAddService:(id)a0 serverID:(id)a1 errMsg:(id)a2 errCode:(int)a3 appid:(id)a4;
- (void).cxx_destruct;

@end
