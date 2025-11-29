@interface WAJSEventHandler_connectWifi : WAJSEventHandler_BaseEvent <IWAJSContextWifiProtocol>

- (void)handleJSEvent:(id)a0;
- (void)connectWifiWithParam:(id)a0;
- (void)dealloc;
- (void)onWifiConfigDone:(int)a0 errMsg:(id)a1;
- (id)wifiInstance;
- (unsigned int)getErrNoWithErrorCode:(int)a0;

@end
