@class NSString, WCPayPassKitFacade;

@interface WAJSEventHandler_removeSecureElementPass : WAJSEventHandler_BaseEvent <WCPayPassKitFacadeDelegate>

@property (retain, nonatomic) WCPayPassKitFacade *passKitFacade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onRemoveSecureElementPass:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
