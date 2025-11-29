@class JSEvent, WCPayNativeCgiTunnelImpl, NSString;

@interface WebviewJSEventHandler_nativeWXPayCgiTunnel : WebviewJSEventHandlerBase <WCPayNativeCgiTunnelImplDelegate>

@property (retain, nonatomic) WCPayNativeCgiTunnelImpl *cgiLogic;
@property (retain, nonatomic) JSEvent *jsEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)checkIfParamValid:(id)a0;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onNativeCgiTunnelSuccess:(id)a0;
- (void)onNativeCgiTunnelFail:(id)a0;
- (void)asyncHandle_callbackEvent:(id)a0 result:(id)a1;
- (void).cxx_destruct;

@end
