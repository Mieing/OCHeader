@class NSString, WCAccountGatewayMobileHandler, JSEvent;

@interface WebviewJSEventHandler_SimAuth : WebviewJSEventHandlerBase

@property (retain, nonatomic) WCAccountGatewayMobileHandler *mobileHandler;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) JSEvent *jsEvent;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)getMaskNumber:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)getPureNumber:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void).cxx_destruct;

@end
