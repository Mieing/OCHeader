@class NSString;

@interface WAJSEventHandler_showWCCoinFirstBuyCoinTips : WAJSEventHandler_BaseEvent <WCCoinFirstBuyCoinTipsViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)didDismiss:(id)a0;

@end
