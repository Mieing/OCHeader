@class NSString, WCPayPassKitFacade;

@interface WAJSEventHandler_addPaymentPassGetCertificateData : WAJSEventHandler_BaseEvent <WCPayPassKitFacadeDelegate>

@property (retain, nonatomic) WCPayPassKitFacade *passKitFacade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
