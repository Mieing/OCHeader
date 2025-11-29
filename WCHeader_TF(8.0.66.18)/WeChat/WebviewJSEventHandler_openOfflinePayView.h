@class JSEvent, WCPayJSOpenOfflinePayControlLogic, NSString;

@interface WebviewJSEventHandler_openOfflinePayView : WebviewJSEventHandlerBase <WCPayJSOpenOfflinePayControlLogicDelegate>

@property (retain, nonatomic) JSEvent *jsEvent;
@property (retain, nonatomic) WCPayJSOpenOfflinePayControlLogic *openOfflinePayLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)succToOpenOfflinePayLogic;
- (void)failToStartOpenOfflinePayLogic;
- (void)returnToOfflinePayView;
- (void).cxx_destruct;

@end
