@class NSString, WCPayJSApiSecureTunnelControlLogic;

@interface WAJSEventHandler_secureTunnel : WAJSEventHandler_BaseEvent <SecureTunnelLogicDelegate> {
    WCPayJSApiSecureTunnelControlLogic *logic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
