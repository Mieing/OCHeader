@class NSString;

@interface WAJSEventHandler_chooseInvoice : WAJSEventHandler_BaseEvent <WCCardChooseViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onChooseSuccess:(id)a0;
- (void)onChooseCancel;

@end
