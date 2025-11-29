@class NSString, NSMutableDictionary;

@interface WAJSEventHandler_verifyPaymentPassword : WAJSEventHandler_BaseEvent <WCPayJSApiVerifyDelegate>

@property (retain) NSMutableDictionary *param;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onVerifyResult:(id)a0;
- (id)getParam;
- (id)getCurrentURL;
- (void).cxx_destruct;

@end
