@class NSString;

@interface WAJSEventHandler_buyWCCoin : WAJSEventHandler_BaseEvent <WCCoinBuyCoinLogicDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
