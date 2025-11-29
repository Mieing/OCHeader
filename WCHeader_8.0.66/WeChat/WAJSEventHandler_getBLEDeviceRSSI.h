@class NSString;

@interface WAJSEventHandler_getBLEDeviceRSSI : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>

@property (copy, nonatomic) NSString *deviceUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onBLEDevice:(id)a0 didReadRSSI:(id)a1 errorCode:(int)a2 errMsg:(id)a3 appId:(id)a4;
- (void).cxx_destruct;

@end
