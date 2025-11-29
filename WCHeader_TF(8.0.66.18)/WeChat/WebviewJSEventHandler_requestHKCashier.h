@class JSEvent, WCPayJSRequestHKCashierLogic, NSString;

@interface WebviewJSEventHandler_requestHKCashier : WebviewJSEventHandlerBase <WCPayJSRequestHKCashierLogicDelegate>

@property (retain, nonatomic) JSEvent *jsEvent;
@property (retain, nonatomic) WCPayJSRequestHKCashierLogic *requestHKCashierLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
