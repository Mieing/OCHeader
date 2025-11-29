@class JSEvent, WCPayJSOpenHKOfflinePayLogic, NSString;

@interface WebviewJSEventHandler_openHKOfflinePayView : WebviewJSEventHandlerBase <WCPayJSOpenHKOfflinePayLogicDelegate>

@property (retain, nonatomic) JSEvent *jsEvent;
@property (retain, nonatomic) WCPayJSOpenHKOfflinePayLogic *openHKOfflinePayLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
