@class NSString, JSEvent;

@interface WebviewJSEventHandler_configWXDeviceWiFi : WebviewJSEventHandlerBase <AirKissViewControllerDelegate> {
    JSEvent *m_event;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onAirKissReturn:(BOOL)a0;
- (void)onUserCancel;
- (void)onNoWifiCancel;
- (void).cxx_destruct;

@end
