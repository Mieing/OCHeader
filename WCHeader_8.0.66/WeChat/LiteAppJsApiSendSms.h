@class NSString;

@interface LiteAppJsApiSendSms : LiteAppJsApi <MFMessageComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (BOOL)checkContentLengthAvailable:(id)a0;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;

@end
