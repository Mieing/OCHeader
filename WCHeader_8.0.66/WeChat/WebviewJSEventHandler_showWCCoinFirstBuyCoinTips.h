@class NSString;

@interface WebviewJSEventHandler_showWCCoinFirstBuyCoinTips : WebviewJSEventHandlerBase <WCCoinFirstBuyCoinTipsViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)didDismiss:(id)a0;

@end
