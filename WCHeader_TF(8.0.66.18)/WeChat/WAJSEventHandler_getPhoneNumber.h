@class PhoneAuthGetPhoneNumberLogic;

@interface WAJSEventHandler_getPhoneNumber : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) PhoneAuthGetPhoneNumberLogic *getPhoneNumberLogic;

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)newGetPhoneNumberLogic:(id)a0;
- (void).cxx_destruct;

@end
