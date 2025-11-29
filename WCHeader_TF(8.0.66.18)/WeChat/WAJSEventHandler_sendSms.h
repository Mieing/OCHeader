@class NSString;

@interface WAJSEventHandler_sendSms : WAJSEventHandler_BaseEvent <MFMessageComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (BOOL)checkContentLengthAvailable:(id)a0;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;

@end
