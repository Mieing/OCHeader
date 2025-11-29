@class NSString;

@interface WAJSEventHandler_openBluetoothAdapter : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>

@property (nonatomic) BOOL openBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)innerHandleJSEventAfterAuth:(id)a0;
- (void)onBluetoothLibOpen:(long long)a0 appid:(id)a1 mode:(id)a2;
- (void)onBluetoothLibOpenTimeoutWithAppId:(id)a0;
- (void)dealloc;
- (id)bleInstance;
- (id)peripheral_bleInstance;

@end
