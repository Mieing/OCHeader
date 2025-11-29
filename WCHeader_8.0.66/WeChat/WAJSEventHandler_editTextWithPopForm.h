@class WCUIAlertView;

@interface WAJSEventHandler_editTextWithPopForm : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) WCUIAlertView *editTextView;

- (void)handleJSEvent:(id)a0;
- (void)onEditTextViewCancelled;
- (void)onEditTextViewConfirmed;
- (void).cxx_destruct;

@end
