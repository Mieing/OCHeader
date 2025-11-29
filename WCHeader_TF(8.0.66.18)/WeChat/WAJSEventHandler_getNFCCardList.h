@class NSString, WCPayPassKitFacade;

@interface WAJSEventHandler_getNFCCardList : WAJSEventHandler_BaseEvent <WCPayPassKitFacadeDelegate>

@property (retain, nonatomic) WCPayPassKitFacade *passKitFacade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
