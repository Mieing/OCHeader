@class NSString, NSMutableDictionary;

@interface WAJSEventHandler_bindPaymentCard : WAJSEventHandler_BaseEvent <WCPayAddPayCardDelegate>

@property (retain) NSMutableDictionary *param;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (id)getParams;
- (id)getCurrentURL;
- (void)onAddPayCardResult:(BOOL)a0;
- (void).cxx_destruct;

@end
