@class NSString, NSMutableSet;

@interface WebviewJSEventHandler_secureTunnel : WebviewJSEventHandlerBase <SecureTunnelLogicDelegate> {
    NSMutableSet *logics;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)inputValidate:(id)a0;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onSecureTunnelLogicSuccess:(id)a0 from:(id)a1;
- (void)onSecureTunnelLogicFail:(id)a0 from:(id)a1;
- (void).cxx_destruct;

@end
