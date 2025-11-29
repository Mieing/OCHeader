@class WCAccountBindPhoneControlLogic, NSString;

@interface WAJSEventHandler_startBindPhone : WAJSEventHandler_BaseEvent <VerifyPhoneDelegate, WCAccountBindPhoneControlLogicDelegate>

@property (retain, nonatomic) WCAccountBindPhoneControlLogic *bindLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onBind;
- (void)bindPhoneReturn;
- (void)onWCAccountBindPhoneControlLogicStop:(id)a0;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)a0;
- (void).cxx_destruct;

@end
