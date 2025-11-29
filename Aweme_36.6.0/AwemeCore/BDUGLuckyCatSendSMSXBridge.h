@class NSString;

@interface BDUGLuckyCatSendSMSXBridge : BDUGLuckyXBridgeMethod <MFMessageComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)methodName;

@end
