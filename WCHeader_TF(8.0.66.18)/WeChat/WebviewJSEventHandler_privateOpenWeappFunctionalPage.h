@class NSString;

@interface WebviewJSEventHandler_privateOpenWeappFunctionalPage : WebviewJSEventHandlerBase <WAOpenSDKQRCodeHandlerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)endWithResult:(long long)a0 data:(id)a1;

@end
