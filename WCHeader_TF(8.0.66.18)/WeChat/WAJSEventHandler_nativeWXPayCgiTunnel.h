@class NSString, WCPayNativeCgiTunnelImpl;

@interface WAJSEventHandler_nativeWXPayCgiTunnel : WAJSEventHandler_BaseEvent <WCPayNativeCgiTunnelImplDelegate>

@property (retain, nonatomic) WCPayNativeCgiTunnelImpl *cgiLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkIfParamValid:(id)a0;
- (void)handleJSEvent:(id)a0;
- (void)onNativeCgiTunnelSuccess:(id)a0;
- (void)onNativeCgiTunnelFail:(id)a0;
- (void).cxx_destruct;

@end
