@class NSString;

@interface WebviewJSEventHandler_sendEmail : WebviewJSEventHandlerBase <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;

@end
